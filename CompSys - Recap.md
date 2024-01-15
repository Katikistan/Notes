# OS
**Processes**
- duplicate of parent, but with own address space (changes are not reflected)
- Child processes must be reaped, adopted but init process if termination of parent. 
- Processes that never terminates are “zombie children”
**Threads**
- run in same address as the calling process (changes are reflected)
- have own thread context: ID, SP, PC, general purpose registers, condition codes
- can access “critical memory” must be handled with semaphores (mutexes) and / or condition variables
## Fork 
print rælkkefølger?
(fork() == 0) - det er kun barnet der kan der kan kører inde i if statement
forældren kan printe 5, børn kan printe 1, 2 og 3

tegn en graf, forældre går ikke ind i if børn gør. 

![[CompSys - Recap 10-01-24 13.26.31.excalidraw]]
![[Pasted image 20240110132054.png]]
![[CompSys - Recap 10-01-24 14.20.43.excalidraw]]
## Heap
Before you start it's vital that you read the provided information in the question, furthermore here are some things that are important to remember before trying to solve this type of problem:

The assignment provides a Heap which individual rows, rows can be headers, footers or payload. The heap grows from bottom up (unless text says the upiside, it won't, but..), the first row of the heap is therefore at the bottom:
![[Pasted image 20240113142357.png|10000]]
Each row has a size of 4 

exam2022-23: "The minimum block size is 8"(all blocks most contain header and footer, therefore block size is at least $header\_size+footer\_size=4+4=8$), blocks must therefore be multiples of 8. Unless other is stated such as  "The minimum block size is 4" which would mean each row has a size of 2 (this will probably never occur).

A block is a collection of rows that have a header and footer and can also have some payload, that is between the header and footer row.

sometimes it will specified that a block must not be empty and must have some payload, which means a block must be bigger than 8.

Each row is tied to an address and has some hexadecimal value.

The header and footer contain information about the block they form and the block before it. the header and footer value will be the same. 

blocks are directly next to each other: when you find a footer of a block you know that the next row will be the header for the next block. 

Some parts of the heap may lie outside the area shown.

In most exams the bits of the header and footer give the following information about the block and heap:
**Beware these could be switched around**
• Bit 0 indicates the use of the current block: 1 for allocated, 0 for free.

• Bit 1 indicates the use of the previous adjacent block: 1 for allocated, 0 for free.

• Bit 2 is unused and is always set to be 0.

The size of the block is found checking the value when first 3 bits are set to 0
*here is an example*
0x12 = 0b0010 010
bit 0 tells us the block is free since it has the value 0
bit 1 tells us the previous block is allocated since it has the value

by setting the first 3 bits of 0b0010 010 to 0 we get the following bit string:
0b0010000 = 32 = 8 * 4 
which means the size of the block is 32, which means the block should have 8 rows from header to footer.


When a block ends 
**Skridt til at løse denne type opgave:**
1. Find the first block by finding a header or footer (remember to look bottom up). 
2.  check ii is a block header and footer: is the previous block allocated (check bit 1: this should then be 1)? Is the size correct: should be mutiple of 8 and take up the right ammount of rows.
3. Find all the other blocks, remmeber: blocks are directly next to each other. so after first blocks footer comes second blocks header and so on. Therefore use the header of each block to find the size of the block, mark the rows of that block and continue onto next block. When you get to the top of the heap rememeber it continues of page, therefore you not be able to find the footer of the last block. 
![[Pasted image 20240113142314.png|10000]]
4. after you have mapped out the different blocks you can begin to perform some operations and fill out how these will affect the rows of the heap, you are supposed to fill out the new headers and footers of the heap. use the adress to find out which block is being affected by the operation. Using malloc, free or realloc on an adress will affect the whole block of that adress, the headers/footers of the adjacent blocks will also be affected.

**If you are asked to free:**
1. look at the address you are freeing, find the header and footer of the block that contains that address. 
2. With immediate coalescing: if there are any free blocks next to the block you are freeing they become one new big free block merge the blocks (see the section on immediate coalseing). 
3. change the footer and header so the 0'th bit is 0 (or other if specified) 
4. find header and footer of the next block above and change the 1'st bit in that blocks header and footer to 0 since the previous block (the block we are freeing) is now free. 
5. find the size of the new block if 2 or more blocks have merged together add up the size of each block otherwise the size will be the same as before and can be found by looking at the header/footer bits where bit 0 and 1 are turned to 0. 
6. Calculate the new header/footer: convert the size of the block to binary, and flip the 0 bit to 0 beacause the block is free
7. look at the previous block (found below header of block you are freeing) is it allocated? look at bit 0 if it's 1, the 1st bit of the block you are freeing becomes 1. 
8.  Find the block above the one you freed and change the header and footer of that block so that the 1st bit is 0

Remember that if 2 or more blocks next to each other all are free they become one big block when we are told to use immediate coallseing. Therefore we have to make a new block header and footer and leave the old headers and footers in the middle. 

**If you are asked to malloc:** 
1. If you are asked to malloc: you are told to malloc an address and an amount of bytes. find the block where that address is in
2. if you are asked to asked to malloc something that is not a multiple of 8: round up to nearest multiple of 8. 
3. find the header of the block and count the ammount of rows that will be allocated (each row has a size of 4). Malloc(8) will allocate 2 rows for payload (4 * 2=8) and 2 rows for header and footer therefore we get 4 rows and a block size of 16.
4. Count 4(when malloc(8)) rows, this is your new block.
5. change the footer and header of the block so that the 0 and 1 bit indicate whether the previous block is allocated and that  the current block is now allocated. 
6. Above the block you just allocated there will have been a free block (otherwise you are not allowed to malloc into allocated memory) this will need a new header and footer. the header of the free block should come right after the footer of the block we just malloced. caluclate the size of the now smaller free block and change the header and footer to indicate the size of the free block and that the previous block now is allocated. 
*Beware:* sometimes you are told that there can be no blocks with size 8 (meaning no payload), if you are told to malloc(8) and this causes the next block that is free to become only 8 in size, we will have to take those extra rows also to avoid having an empty block. therefore we would end up taking the whole free block above instead of just part of it (see example from exam 20/21 below)
**If you are asked to realloc** 
you will a combination of free and malloc, you will first free a block, then you will malloc that from that block header and to the size you have been asked so, when freeing you
**Immediate coallesing:** 2 adjacent blocks will be merged into 1 block when one is free and the other either also becomes free or is allocated and overlap into the free block, that means if block 1 (bottom up) and block 2 both become free (maybe block 1 is already free and block 2 becomes free or otherway) block 1's new footer will be where block 2's footer was. and block 1's footer and block 2's header will stay the same and become part of the block payload, meaning they are junk that will be overwritten when the block is allocated. The new Header  (same location as block's 1 before) and footer (same location as block 2's footer before) must change it's value to account for the new size of the block and the fact that the block is free and take into account whether the previous block is free. 
![[Pasted image 20240113142159.png|10000]]
Sometimes things dont line up so nicely, as metioned all blocks must be multiples of 8, what if we want to malloc or realloc 12 bytes: then we have to round up the nearest multiple of 8 which is 16, we wanted to alloc 12, but end up allocing 16 instead, we end up using 16+8=24 bytes in the heap because we also need 4+4 bytes for the header and footer. this is what is known as internal fragmentation. 

**example from exam 20/21**
we want have freed some memory (blue) and want to realloc 12 bytes (red)
![[Pasted image 20240112234806.png]]
We have to take 16(realloc) + 4(header) + 4(footer) = 24 bytes, which is 6 rows (each row has size 4). the black is the remaning free space, but since there is a block above the free space, it would mean we would get a block with size 2 * 4 = 8, however the exam test specifies that "we must never create blocks with 0 payload", this means we must not have a block thats only a header and footer, therefore we also need to take the remaing free space when realloc
![[Pasted image 20240112235041.png]]Therefore:
![[Pasted image 20240112235706.png]]
Therefore we get a block that is 16 + 16 big, we remember that the old footer (0x13) and header (0x12) dont change since the 2 blocks merge into 1 due to immediate coalesing
![[Pasted image 20240112235808.png]]

###  Example walktrough
# Pipelines
The non-pipelined approach to laundry would be as follows:
1. Place one dirty load of clothes in the washer.
2. When the washer is finished, place the wet load in the dryer.
3. When the dryer is finished, place the dry load on a table and fold.
4. When folding is finished, ask your roommate to put the clothes away.
As soon as thewasher is finished with the first load and placed in the dryer, you load the washer with the second dirty load. When the first load is dry, you place it on the table to start folding, move the wet load to the dryer, and put the next dirty load into the washer. Next, you have your roommate put the first load away, you start folding the second load, the dryer has the third load, and you put the fourth load into the washer. At this point all steps—called stages in pipelining—are operating concurrently. 

pipelining is faster for many loads is that everything is working in parallel, so more loads are finished per hour. The same goes for instructions; they run in parrallel, since more instructions are handled at a time the program is executed faster

The same principles apply to processors where we pipeline instruction execution. RISC-V instructions classically take five steps:
1. FE: Fetch instruction from memory.
2. DE: Read registers and decode the instruction.
3. EX: Execute the operation or calculate an address.
4. ME: Access an operand in data memory (if necessary)
5. WB: Write the result into a register (if necessary).
![[Pasted image 20240115035053.png]]
The pipeline registers, in color, separate each pipeline stage.
They are labeled by the stages that they separate; for example, the first is labeled IF/ID (FE/DE) because it separates the instruction fetch and instruction decode stages.
![[Pasted image 20240115032235.png]]

All RISC-V instructions are the same length. This restriction makes it much easier to fetch instructions in the first pipeline stage and to decode them in the second stage. RISC-V has just a few instruction formats, with the source and destination register fields being located in the same place in each instruction. Memory operands only appear in loads or stores in RISC-V.
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
## Summary 
Pipelining is a technique that exploits parallelism between the instructions in a sequential instruction stream. Pipelining increases the number of simultaneously executing instructions and the rate at which instructions are started and completed. Pipelining does not reduce the time it takes to complete an individual instruction,
also called the latency. For example, the five-stage pipeline still takes five clock cycles for the instruction to complete. pipelining improves instruction throughput rather than individual
instruction execution time or latency.
## Stalls and fowarding
![[Pasted image 20240115035654.png]]
![[Pasted image 20240115035744.png]]
The last four instructions are all dependent on the result in register x2 of the first instruction. If register x2 had the value 10 before the subtract instruction and −20 afterwards, the programmer intends that −20 will be used in the following instructions that refer to register x2.


## Full foward
">>" indikerer at den staller i den fase som efterfølger, så "De >> Ex", betyder et stall i Ex.

Vi kan beskrive maskinens ressourcer ved antallet af instruktioner som kan udføre samme aktivitet på samme tidspunkt. For den simple pipeline angives ressourcebegrænsningen ved
```
Fe: 1, De: 1, Ex: 1, Me: 1, Wb: 1
```

```
                        0  1  2  3  4  5  6  7  8
lw   x11,0(x10)         Fe De Ex Me Wb
addi x11,x11,100           Fe De De Ex Me Wb
sw   x11,0(x14)               Fe Fe De Ex Me Wb
addi x10,x10,1                      Fe De Ex Me Wb
```
Her er skal addi bruge x11 og er derfor nødt til at vente på at lw har hentet en værdi fra memory og lagt den i x11, det sker i `Me`: derfor må addi vente med at execute til at lw er færdi med `Me`, der sker altså et stall i Ex hos addi. 

Dernæst ser vi at De er nødt til at blive stallet fordi vi kun har en ressource til at køre De skridtet og derfor sker der et stall på De da vi venter med at den anden instruktion er færdig med at stalle; derfor behøver vi heller ikke stalle Ex hos sw da vi pga tidligere stall nu har x11 klar fra addi. 

addi x10 bliver også udskudt fordi vi ikke kan fetche flere ting på en gang.
### Dataafhængigheder
Dataafhængigheder specificeres ved at angive hvilke aktiviteter der producerer og/eller afhænger af en værdi. Eksempel:

```
load: "Fe De Ex Me Wb"   depend(Ex,rs1), produce(Me,rd)
store: "Fe De Ex Me"     depend(Ex,rs1), depend(Me,rs2)
andre: "Fe De Ex Wb"     depend(Ex,rs1), depend(Ex,rs2), produce(Ex,rd)
```
Her refererer "rs1", "rs2" og "rd" til de to kilderegistre og destinationsregisteret på samme måde som på den grønne side forrest i COD. Ideen er at en instruktion der anfører depend(Ex,rs1) tidligst kan gennemføre "Ex" i en cyklus efter at rs1 er blevet produceret.

Kontrolafhængigheder specificeres på samme måde som dataafhængigheder men med angivelse af et særlig register: "PC". Eksempel:
```
retur: produce(Ex, PC)
alle: depend(Fe, PC)
```

Angiver at PC opdateres i "Ex" af retur instruktionen og at efter en retur-instruktion kan maskinen tidligst gennemføre "Fe" (instruktionshentning) for efterfølgende instruktioner, når PC er opdateret. Den sidste regel for alle instruktioner: "depend(Fe, PC)" er så indlysende at vi ikke vil anføre den fremover.


```
hop baglæns taget:       produce(De, PC)
hop baglæns ikke taget:  produce(Ex, PC)
hop forlæns taget:       produce(Ex, PC)
hop forlæns ikke taget:  -
```
![[Pasted image 20240115162432.png]]