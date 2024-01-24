# Assembly
## Register conventions
The "ra" register holds the return address
call func, stores pc + 4 in ra.
![[Pasted image 20240118004548.png]]
## Instructions
![[Pasted image 20240118004619.png]]
![[Pasted image 20240118004653.png]]
![[Pasted image 20240118015538.png]]
![[Pasted image 20240118015516.png]]
![[Pasted image 20240118015448.png]]
![[Pasted image 20240118015601.png]]
### Pseudo instructions
A pseudo instruction is an instruction handled by
the assembler by translating it into one or more
real (non-pseudo) instructions. mv will use addi to move a value from one register to another.
![[Pasted image 20240118004800.png]]
	![[Pasted image 20240118015633.png]]
## Calling functions
Look for Jumping instructions to determine if a function is being called (jal, jalr). is function argument registers being used (x10-x17 or a0-a7)

Function arguments can be stored and loaded from the stack.

Argument registers are recognized by using the register in a function without first having written to it in that function. 

**OBS:** jalr x0, x1, 0 does NOT call functions it returns from a function. (x1 contains the return address)
• Functions can be called with the following pseudo instructions:
	• j offset :jump
	• jal offset :jump and link (return addr is stored in x1)
	• jr rs :jump register
	• jalr rs :jump and link register (return addr is stored in x1)
	• call offset :jump and link to far away address (return addr is stored in x1)

**OBS:** the pseudo instruction ret (instruction jalr x0, x1, 0) does NOT call other functions, it returns from a function. (can also be written jalr x0, ra, 0)
### Example of function
• Caller loads arguments into registers a0-a7.
• Caller calls function (jal, jalr, etc.)
• Callee uses arguments
• Callee stores result (if any) in a0-1
• Callee returns (ret)
• Caller uses results (if any) from a0-1
## Loops
Branching instructions or pseudo branch instructions will often be used in a loop.

While-loop, For-loop optionally have a jalr or jal instruction (j pseudo instruction)

**OBS:** Infinite while-loop can use pseudo instruction j offset (instruction jal x0, offset , negative offset) with no branch instruction.
## Translating from Assembly to C and general tip
Risc v uses goto style, C does not. 

Take the assembly code and write a comment for each line that in c like pseudo code and explain with words what happens in that line 

lbu a5, 0(a0) would be a5 = a0 
![[Pasted image 20240118010227.png]]
# Pipelining
## Pipeline Teori 
The non-pipelined approach to laundry would be as follows:
1. Place one dirty load of clothes in the washer.
2. When the washer is finished, place the wet load in the dryer.
3. When the dryer is finished, place the dry load on a table and fold.
4. When folding is finished, ask your roommate to put the clothes away.
As soon as the washer is finished with the first load and placed in the dryer, you load the washer with the second dirty load. When the first load is dry, you place it on the table to start folding, move the wet load to the dryer, and put the next dirty load into the washer. Next, you have your roommate put the first load away, you start folding the second load, the dryer has the third load, and you put the fourth load into the washer. At this point all steps—called stages in pipelining—are operating concurrently. 

instructions run in parrallel, since more instructions are handled at a time the program is executed faster.

worth noting that the performance gain from having more stages in a pipeline is not linear. The more stages there are, the more difficult it becomes to keep all stages busy and to keep the pipeline full.

The same principles apply to processors where we pipeline instruction execution. RISC-V instructions classically take five steps:
1. FE: Fetch instruction from memory.
2. DE: Read registers and decode the instruction.
3. EX: Execute the operation or calculate an address.
4. ME: Access an operand in data memory (if necessary)
5. WB: Write the result into a register (if necessary).
![[Pasted image 20240115035053.png]]
The pipeline registers, in color, separate each pipeline stage.

In our case each stage takes one clock cycle to complete, when it doesn't get stalled
### Pipeline Hazards 
There are situations in pipelining when the next instruction cannot execute in the following clock cycle (tal på x akse i afviklingsplot). These events are called hazards, and there are three different types.

**Structural hazard:** When a planned instruction cannot execute in the proper clock cycle because the hardware does not support the combination of instructions that are set to execute.

**Data hazard(stall):** Also called a pipeline data hazard. When a planned instruction cannot execute in the proper clock cycle because data that are needed to execute the instruction are not yet available. For example, suppose we have an add instruction
followed immediately by a subtract instruction that uses that sum (x19):
```Asm
add *x19*, x0, x1
sub x2, *x19*, x3
```

The primary solution is based on the observation that we don’t need to wait for the instruction to complete before trying to resolve the data hazard. For the code sequence above, as soon as the ALU creates the sum for the add, we can supply it as an input for the subtract. Adding extra hardware to retrieve the missing item early from the internal resources is called forwarding or
bypassing.
```ad-info
Officially called a **pipeline stall**, but often given the nickname **bubble**. A stall initiated
in order to resolve a
hazard.
```
#### Ekstra
![[Pasted image 20240115034216.png]]
![[Pasted image 20240115034327.png]
### Summary 
Pipelining is a technique that exploits parallelism between the instructions in a sequential instruction stream. Pipelining increases the number of simultaneously executing instructions and the rate at which instructions are started and completed. Pipelining does not reduce the time it takes to complete an individual instruction,
also called the latency. For example, the five-stage pipeline still takes five clock cycles for the instruction to complete. pipelining improves instruction throughput rather than individual
instruction execution time or latency.
### Stalls and fowarding
![[Pasted image 20240115035654.png]]
![[Pasted image 20240115035744.png]]
The last four instructions are all dependent on the result in register x2 of the first instruction. If register x2 had the value 10 before the subtract instruction and −20 afterwards, the programmer intends that −20 will be used in the following instructions that refer to register x2.
## Pipeline praktisk (Finns noter)
1. FE: Fetch instruction from memory.
2. DE: Read registers and decode the instruction.
3. EX: Execute the operation or calculate an address.
4. ME: Access an operand in data memory (if necessary)
5. WB: Write the result into a register (if necessary).
### Full fowarding
Vi antager
- At hop forudsiges taget i De.
- At load data kan forwardes fra starten af Wb til store i Me
Vi kan beskrive maskinens ressourcer ved antallet af instruktioner som kan udføre samme aktivitet på samme tidspunkt. For den simple pipeline angives ressourcebegrænsningen ved
```
Fe: 1, De: 1, Ex: 1, Me: 1, Wb: 1
```
kun en instruktion kan være i hver fase samtidig.
```
load: "Fe De Ex Me Wb"   
store: "Fe De Ex Me"     
andre: "Fe De Ex Wb"     

branch: "Fe De Ex" // Wb behøves med betinget hop
```
">>" indikerer at den staller i den fase som efterfølger, så "`De >> Ex`", betyder et stall i Ex. Man kan også skrive `De De Ex`, fordi den holder i `De` fasen fordi `Ex` ikke er tilgænglig. Jeg synes den sidste metode er mere overskuelig fordi det bliver nemmere at spotte hvornår der skal ske stalls pga. ressourcebegrænsning 

#### Dataafhængigheder
Dataafhængigheder specificeres ved at angive hvilke aktiviteter der producerer og/eller afhænger af en værdi. Eksempel:

```
load: "Fe De Ex Me Wb"   depend(Ex,rs1), produce(Me,rd)
store: "Fe De Ex Me"     depend(Ex,rs1), depend(Me,rs2)
andre: "Fe De Ex Wb"     depend(Ex,rs1), depend(Ex,rs2),
produce(Ex,rd)
branch: "Fe De Ex" // Wb behøves med betinget hop
```
Her refererer "rs1", "rs2" og "rd" til de to kilderegistre og destinationsregisteret. Ideen er at en instruktion der anfører depend(Ex,rs1) tidligst kan gennemføre "Ex" i en cyklus efter at rs1 er blevet produceret.

Load instruktioner producerer f.eks. deres register i `Me` fasen og derfor må en add instruktion f.eks vente  til at load er færdig med sin `Me` før add kan begynde sin `Ex` fase


• **Format på instruktioner:**
	• Load: rd, imm(rs1)
	• Store: rs2, imm(rs1)
	• Alle andre: rd, rs1, rs2/imm/label
• **Eksempler på dataafhængigheder**
	• depend(Ex, rs1) betyder at rs1 skal være klar inden denne instruktion kan udføre Ex.
	• produce(Wb, rd) betyder at rd bliver skrevet til registeret i Wb-fasen af denne instruktion.
	• depend(Fe, PC) betyder at program counter skal være klar før denne instruktion kan gå ind i Fe (Fetch-fasen).
#### Kontrolafhængigheder
Kontrolafhængigheder specificeres på samme måde som dataafhængigheder men med angivelse af et særlig register: "PC". Eksempel:
```
retur: produce(Ex, PC)
alle: depend(Fe, PC)
```
Angiver at PC opdateres i "Ex" af retur instruktionen og at efter en retur-instruktion kan maskinen tidligst gennemføre "Fe" (instruktionshentning) for efterfølgende instruktioner, når PC er opdateret. Den sidste regel for alle instruktioner: "depend(Fe, PC)" er så indlysende at vi ikke vil anføre den fremover.
#### Gennemgået eksempel
```
                        0  1  2  3  4  5  6  7  8
lw   x11,0(x10)         Fe De Ex Me Wb
addi x11,x11,100           Fe De De Ex Wb
sw   x11,0(x14)               Fe Fe De Ex Me
addi x10,x10,1                      Fe De Ex Wb
```
Her er skal addi bruge x11 og er derfor nødt til at vente på at `lw` har hentet en værdi fra memory og lagt den i x11, det sker i `Me`: derfor må addi stalle `Ex`  til at `lw` er færdi med `Me`.

I `sw` ser vi at `De` er nødt til at blive stallet fordi vi kun har en ressource til at køre `De` skridtet og derfor sker der et stall på `De` (`Fe Fe` eller `Fe >>`)  da vi venter på at `addi` er færdig med at stalle. Derfor behøver vi heller ikke stalle `Ex` hos `sw` da vi pga tidligere stall nu har x11 klar fra addi. 

addi x10 bliver også udskudt fordi vi ikke kan fetche flere ting på en gang.

## Branching
```
hop baglæns taget:       produce(De, PC)
hop baglæns ikke taget:  produce(Ex, PC)
hop forlæns taget:       produce(Ex, PC)
hop forlæns ikke taget:  -
Betinget hop behøver ikke Wb
```
![[Pasted image 20240115162432.png]]
Det betyder at hvis et hop baglæns tages så vil PC være klar i De derfor kan næste instruktions Fe fase begynde sammtidig med Ex fasen for branch instruktionen. Hvis hop ikke tages eller et hop forlæns tages så kan næste instruktions Fe fase først 
###### husk til eksamen


**Simpel 5 stage pipeline:**
We assume backward branches are predicted during decode

Following resources are available:
Fe: 1, De: 1, Ex: 1, Me: 1, Wb: 1
all instructions use the following stages
Fe, De, Ex, Me and Wb
since it's a **5 stage** pipeline


**2 way super skalar:**
We assume backward branches are predicted during decode

Following resources are available:
Fe:2, De:2, Ex:2, Ag:1, Me:1, Wb:2
all instructions use the following stages
Load: Fe De Ag Me Wb
store: Fe De Ag Me
others: Fe De Ex Wb <- branch instructions dont need Wb

## Superskalar
En maskine der kan udføre to eller flere instruktioner samtidigt kaldes "superskalar".

2 way - Superskalar Ressource-inddeling:
```
ressourcer: Fe:2, De:2, Ex:2, Ag:1, Me:1, Wb:2
```
```
load:  "Fe De Ag Me Wb"
store: "Fe De Ag Me"
andre: "Fe De Ex Wb" // betingede hop behøver ikke Wb
branch: "Fe De Ex" // kun med betinget hop
```
Forkortelsen "Ag" står for "Address generate" som så erstatter brugen af den generelle ALU til at beregne adresser ved lagertilgang.

**Hvis du staller  i Ex så skriver du De De, hvis der så er et hop som kan forudsiges i De, så kan du starte ved det andet De  fordi vi er færdig med De vi venter bare nu.**

**Hvis du skal hoppe skal du vente på sidste er færdig med ex, men hvis du er done med instruktioner skal du ikke vente**

Der kan nu godt være 2 Fe på samme tid

```
aritmetisk op: depend(Ex,Rs1),depend(Ex,rs2),depend(Ex,rd),produce(Wb,rd)
```
Dette vil sikre at der maximalt er en instruktion for hvert register i trinnene fra Ex og frem ad gangen. Det udelukker forkert skrive rækkefølge og det sikrer at operand-referencer er unikke.

![[Pasted image 20240117014935.png]]
Her ser man at 2 instruktioner `lw` og `addi` begge kan være i fetch fasen på samme tid. 
