# Tips
Use scripts from DIKUnotes compsys (download before exam): https://github.com/Emil2468/CompSys-scripts

Converting between bases:
to convert between binary, hexadecimal and decimal use python 

```python
hex() #convert binary or dec to hex
bin() #convert hex or dec to binary
0b1 # binary number
0x10 # hex number
# to convert hex to dec simply type 0x10 it will then be converted to dec

import numpy as np
np.log2(7) # using log 2 in python

```

**Conversion betweeen data sizes**
1 KB = 1 Kibibyte (KiB) = 1024 bytes
1 MB = 1024KB = 1,048,576 bytes
1 GB = 1 000 000 000 bytes
1 Kbit = 1 kilobit = 125 bytes
1 byte = 8 bits
1 word = 2 bytes = 16 bits
1 halfword = 4 bytes = 32 bits
8 bytes = 64 bits
# Data representation
## Endians

## IEE float
IEEE floating point has clear properties.
Represents numbers of the form $M \cdot 2^E$ .
![[Pasted image 20240118160025.png]]
![[Pasted image 20240118160052.png]]
![[Pasted image 20240118160735.png]]
![[Pasted image 20240118160141.png]]
![[Pasted image 20240118160219.png]]
![[Pasted image 20240118160353.png]]
![[Pasted image 20240118160433.png]]

in the IEEE floating point format, the inaccuracies of calculations become larger as the numbers get larger due to the limited number of bits available to represent the mantissa (or significand) of the number. This means that the larger the number, the less precise the representation of that number in the format.

This is because the mantissa is represented as a fixed-point number, with a fixed number of bits to the left and right of the radix point. As the number gets larger, more bits are required to
represent the mantissa, but since the number of bits is fixed, the representation becomes less precise.

This phenomenon is called the "floating-point precision error" and it affects all floating-point computations. Programs that need to perform high precision computation, such as scientific simulations and financial computations, use arbitrary precision libraries or other methods to perform these calculations.
![[Pasted image 20240118160648.png]]
![[Pasted image 20240118160544.png]]
![[Pasted image 20240118160607.png]]
![[Pasted image 20240118160901.png]]
![[Pasted image 20240118160930.png]]
## Twos compliment
![[Pasted image 20240118155421.png]]
![[Pasted image 20240118155529.png]]
![[Pasted image 20240118155607.png]]
Distinguish between representation and interpretation.
![[Pasted image 20240118155745.png]]
## Size of different data types
![[Pasted image 20240118155325.png]]
**in 32 bit architecture:**
char: 1 byte 
short: 2
int: 4 bytes
long: 4 bytes
long long: 8 bytes
*floating point:*
float: 4 bytes
double: 8 bytes
long double: 16 bytes

**in 64 bit architecture:**
char: 1 byte 
short: 2
int: 4 bytes
long: 8 bytes
long long: 8 bytes
*floating point:*
float: 4 bytes
double: 8 bytes
long double: 16 bytes

**Integer Type Aliases:**
int8_t: 1 byte signed integer              
int16_t: 2 byte signed integer               
int32_t: 4 byte signed integer           
int64_t: 8 byte signed integer         
|intptr_t: Signed integer of size equal to a pointer 
uint8_t: 1 byte unsigned integer 
uint16_t: 2 byte unsigned integer   
uint32_t: 4 byte unsigned integer                    
uint64_t: 8 byte unsigned integer 
uintptr_t: Unsigned integer of size equal to a pointer 


# OS
**Processes**
- duplicate of parent, but with own address space (changes are not reflected)
- Child processes must be reaped, adopted but init process if termination of parent. 
- Processes that never terminates are “zombie children”
- program is the “dead” code
- process is the “live” instance running the program
**Threads**
- run in same address as the calling process (changes are reflected)
- have own thread context: ID, SP, PC, general purpose registers, condition codes
- can access “critical memory” must be handled with semaphores (mutexes) and / or condition variables
- dies when the process containing the thread dies
**Kernel**
- “Aways resident code that services request from the hardware and manages processes”
- Unprivileged, must make calls to kernel to switch to privileged state (interrupts)
- The kernel handles: hardware, system memory, File I/0 and context switching
**Syscalls**
See man syscalls
**How to write to memory**
what happens on a write depends on the method used:
- Write-through: The more simple solution is to update the cache, and main memory each time we write. Data is written into the cache and the corresponding main memory location at the same time. The cached data allows for fast re-trieval on demand, while the same data in main memory ensures that nothing will get lost if a crash, power failure, or other system disruption occurs.

- Write-back: Another solution is that we only write to the cache so that the block is written to the main memory at a later time (when it is replaced by another block). Data is written into the cache every time a change occurs,but is written into the corresponding location in main memory only at specified intervals or under certain conditions.

-  Write allocate: With a write miss, the address the data is to be written to is loaded into the cache, and then the data is written to the cache. Less consistency but faster.

- No-write allocate: On a write miss, you write the data directly to the main memory and do not add the address to the cache. Full consistency, but slower.

For more OS theory check out: exam notes detailed on DIKUnotes.
## Locality 
![[Pasted image 20240117220844.png]]
- **Spatial locality:** Where data is located in terms of each other, good spacial locality is accessing things close in memory. 

- **Temporal locality:** Data that has recently been accessed, is accessed again soon. Which is good since it's in the cache making it quick to access. 


• Stride: How large are the jumps between memory accesses?

row-major and column-major: How mulit dimensional arrays are stored in memory:
```
A[3][3]=
[1, 2, 3],
[4, 5, 6],
[7, 8, 9]
```
![[Pasted image 20240117220603.png]]
If we try to access the 1 in row 1, then the cache in this example will contain {1,2,3}. When we try to iterate through rows first then we have good spacial locality since we only have to jump little in memory to get the next element 2, futhermore it's in the cache making it quick to get. 

However when using column major the cache will contain {1,4,7} which will be discarded since we are trying to access 2, which is futher away than when using row major.
![[Pasted image 20240117221638.png]]
**Stride in this example:**
row major: on average we have to jump 1 block in memory to get the next element, therefore stride is 1.

column: on average we have to jump 3 blocks in memory to get the next element, therefore stride is 3. from 1 to 2 the distance is 3. Even though we have to jump from 3 to 4 which is 5 blocks, most of the time we have to jump 3 blocks therefore stride becomes 3 regardless. 
![[Pasted image 20240117222115.png]]
C is row major
R is column major

j has better temporal locality than i because it's accessed more often. 
## Semaphore
- Combination of a mutex and a counter
- Locked if 0 (memory is inaccessible)
- if the semaphore is 5, it would need 5 calls of P(s) to become locked.
- A mutex is a type of semaphore that is only 0 (locked) or 1 (unlocked).
```
wait (S){ // originally called P(S)
	while ( S < 0 ) do no-op;
	S--;
\}
```
```
Signal (S){ // originally called V(S)
	S++;
\}
```
That means when you see p(a) it means that a is being decremented, if a=1 (unlocked), p(a) will make a = 0 (locked). When you see V(a) it means a is being incremented so if a=0 (unlocked)then V(a) wil make a 1 (unlocked)

**Drawing a process graph:**
![[Pasted image 20240117205126.png]]
Make a graph with thread 1 and 2 along the axes as specified by the text, along the each axis put the semaphore operation starting from 0,0. 

now make a square indicating where each variable is locked, in thread 1 a is locked from p(a) to v(a), same for thread 2. Blue square is where a is locked, red is where b is locked.  
![[Pasted image 20240117204851.png]]
when moving right, one thread is progressing, when moving up, the other thread is progressing. we can only go right or up. 

The place where both of threads lock a is forbidden. Same goes for other variables. that means if we move into the square we have a deadlock

Make a square indicating where each variable is locked, here we see it's not necessary to show where c  is locked (purple square) because it's within the area where a and b is locked.
![[Pasted image 20240117211008.png]]
We see a deadlock is possible since when at (p(b),p(a)) we can go neither up or right, meaning we are stuck (deadlock), a is already locked in thread 2 and now thread 1 is trying to claim it aswell, how sad...

In this example we can always move up or right.
![[Pasted image 20240117211217.png]]
It's important to note that moving along is not forbidden, think of it this way: it's first moving past p(c) that a thread actually locks c so standing at (p(c),p(c)) is not a deadlock since it first (p(c),p(b)) where c is actually locked and we would not be allowed to move right, however we could just move up instead. 

This could not cause a deadlock, since we can move along the lines (green lines indicate these paths)
![[Pasted image 20240117212029.png]]

## Context switching
**![[Pasted image 20240118025222.png]]**
## Fork 
See man fork() for more info.

The child process and the parent process run in separate memory spaces. At the time of fork() both memory spaces have the same content. fork() is called once but returns twice.

Fork returns -1 on failure, 0 if child, 0> for parent (the parent gets the ID of the child). if (fork() == 0) - It's the child that goes into this if statement.

Mutexs are just variables so they are a part of this virtual address
space. 

File descriptors are also inherited, including open file status flags, current file offset, and signal-driven I/O attributes

Threads are not copied into the new process

**OBS:** the states of mutexes, condition variables, and other pthreads objects are part of the parent’s virtual address space, and so they are inherited to the child! This may cause deadlocks.
-  print uses a buffer (a variable) before actually printing, so this buffer may be inherited and the child will print too.
- if a mutex is locked and not unlocked before child is created, the mutex may never be unlocked.
![[Pasted image 20240118024906.png]]
`If (waitpid(pid, NULL, 0)) > 0)` will be true when the child of pid has executed, in terms of the code example: 

In the parent process, `waitpid` is used to wait for the child process to finish. Once the child process completes, it checks again and creates a new child process. The second child process prints "3", and the parent process prints "4".

the parent can print 4 and 5
children can print 1, 2 and 3
![[Pasted image 20240110132054.png]]
Make a graph: Make a fork in the graph each time fork() is called. Beware of the level of each thing when making the graph, we see that print(4), print(3) are on the same level, therefore we can't be certain that one prints before the other, the same goes for the 2 print(5).
![[Pasted image 20240118001831.png]]
## Threads
Race condition: code is dependent on the sequence or timing of other uncontrollable events such as multiple threads accessing the same variable, leading to unexpected results.

context switched, just like processes

thread context: Thread ID, stack, stack pointer, PC, condition codes, and GP registers 
	the remaining process context is shared between the thread: Code, data, heap, and shared library segments of the process virtual address space. Open files and installed handlers.
**Atomicity**
Atomicity is a guarantee of isolation from concurrent processes. Additionally, atomic operations commonly have a succeed-or-fail definition — they either successfully change the state of the system, or have no apparent effect. That is atomic functions doesn’t need mutexes while non-atomic functions need mutexes
if multiple thread

remember that threads die with their process, this is not the same for forks. 

```C
#include <unistd.h>

#include <stdio.h>
int x = 0;
void* worker(void* p) {
	for (int i = 0; i < 1000; i++)
		x++;
	return NULL;
}
int main() {
	pthread_t t;
	pthread_create(&t, NULL, worker, NULL)
	pthread_join(t);
	pthread_create(&t, NULL, worker, NULL);
	pthread_join(t);
	printf("%d\n", x);
}
```
`pthread_create(&t, NULL, worker, NULL);`: Creates a new thread (`t`) that will execute the `worker` function. The `NULL` arguments mean default thread attributes and no argument for the worker function. We now have the main thread an worker thread

`pthread_join(t);`: Waits for the thread represented by `t` to finish before proceeding. wait for thread termination.

In this example the a thread is created then terminated when x has been incremented a 1000 times. `pthread_join` ensures that no other code is executed before the thread is executed. After the thread is done a new thread is created. 

Beacause of `pthread_join(t);` there can be no race condition

``` C
int x = 1;
void* thread(void* arg) {
	x = 2;
	printf("%d\n", x);
	return NULL;
}
int main() {
	printf("%d\n", x);
	pthread_t tid;
	pthread_create(&tid, NULL, thread, NULL);
	fork();
	printf("%d\n", x);
	exit(0);
}
```
In this example the worker thread would start working, but the thread in main would keep progressing aswell which would means that it could die before the worker thread does anything. Therefore the output is non deterministic (race condition). 

"1" will be printed at least one time 

Fork will have the child print one time, the parent process will also print one time after the fork.  

Depending on whether the worker thread gets to run or not another print is made

We will therefore either print 3 or 4 times

if the worker thread newer runs any code, 3 prints are made and none of them are "2"

if the worker thread runs before the parent process (main thread) and the child: 3 of the 4 prints are "2" 

its possible for the "2" to be printed 0-3 times.

**Best way to go about solving this sort of question:**
there aren't really any ONE way to figure this out, but a great way is just to look at the code an decipher the way the code could execute.
- Look at each function related to processes (what does it do)
- Look at each function relating to threads (what does it do and how does it impact the output)
- Use the man page to look up functions (open WSL terminal, bash terminal, mac terminal or bash terminal in VScode if non other are available)
## Memory
![[Pasted image 20240118023124.png]]
SRAM and DRAM: Key differences
SRAM: Static random access memory 
DRAM: Dynamic random access memory
RAM is volatile memory - the content is lost when the power is gone.
1. SRAM is an on-chip memory whose access time is small while DRAM is an off-chip memory which has a large access time. Therefore SRAM is faster than DRAM.
2. DRAM is available in larger storage capacity while SRAM is of smaller size. SRAM is expensive whereas DRAM is cheap.
3. The cache memory is an application of SRAM. In contrast, DRAM is used in main memory.
4. DRAM is highly dense. As against, SRAM is rarer.
5. The construction of SRAM is complex due to the usage of a large number of transistors. On the contrary, DRAM is simple to design and implement.
6. In SRAM a single block of memory requires six transistors whereas DRAM needs just one transistor for a single block of memory.
7. DRAM is named as dynamic, because it uses capacitor which produces leakage current due to the dielectric used inside the capacitor to separate the conductive plates is not a perfect insulator hence require power refresh circuitry. On the other hand, there is no issue of charge leakage in the SRAM.
8. Power consumption is higher in DRAM than SRAM. SRAM operates on the principle of changing the direction of current through switches whereas DRAM works on holding the charges.
### Disk Storage
**Rotational latency:**
Time it takes for the disk to rotate so that the head can
read the first bit of the target sector. 
**Maximum Rotational latency:** 
Time it takes for the disk to do an entire rotation. Average is half of that
## Cache info
Always has the following order
Tag | Index | Offset 

**Cache organisation**
- N-way set associative: N: how many blocks there are in each set.
- Direct mapped/One-way set associative: one block for each set, so each memory location is mapped to one location in the cache.
- Fully associative: cache is one set, a memory location can be mapped to anywhere in the cache.

$\text{offset}=\log_2(\text{blocksize in bytes})=\log_2(32)=5$
$\text{cache size in bytes}=\mathrm{KiB} * 1024$
$n = \text{associativity}$
$\text{set count}=\frac{\text{ cachesize in bytes}}{n \cdot \text{blocksize in bytes}}$
$index=\log _2(\text{set count})$
$tag=\text{bits in address}-(offset+index)$

Use script to calculate size of each.  

Number of lines pr. set = associativity
## Virtual memory

## Virtual addresses
Page faults are handled by software (kernel code), meaning we have flexibility.
- Page fault handler can update the page table based on kernel data and policy.
mmap() is powerful but inflexible:
- Smallest granularity of allocation is a page.
- Is a system call, so fairly slow.
Instead programmers use dynamic memory allocators (e.g. malloc()) to aquire memory at runtime.
- Run entirely in user space-not part of the kernel.
- Acquires memory via mmap() and sbrk ().
Region of virtual memory managed by such an allocator is known as the heap.
- No relation to the datastructure known as a heap.
- May have multiple heaps; heap might not be contiguous.
- When we say the heap, we mean whatever malloc() manages by default.


VPO: virtual page offset
VPI: virtual page index
PPO: physical page offset. Is the same number as VPO
VPN: virtual page number (like tag) 
![[416361371_7215294488509136_1498697205366660270_n.png]]
TLB hit:
- check TLB index som set.
- Er der et TLB tag som matcher index, og er den valid?
- hvis ja - skriv Y, ellers N
- aflæs PPN og skriv ind
- Hvis ikke i TLB table aflæs andet skema
Page fault?
- Aflæs andet skema.
- Hvis skemaet har din VPN - aflæs tilsvarende PPN
- Hvis valid -> Page fault = N
- Hvis invalid -> Page fault = Y
- Hvis VPN ikke kan findes, page fault = Y

mmap () syscall allows processes to map virtual memory.
- Can map files to memory, or make anonymous mapping.
- Can share memory between processes.
malloc () is a userspace memory manager.
- Not a system call itself.
- Requests memory from kernel with mmap () and sbrk () and then parcels it out.
- Internal fragmentation is when allocated blocks have wasted space.
- External fragmentation is when free space is split into many small blocks.
## Cache table
**Cache organisation**
- N-way set associative: N: how many blocks there are in each set.
- Direct mapped/One-way set associative: one block for each set, so each memory location is mapped to one location in the cache.
- Fully associative: cache is one set, a memory location can be mapped to anywhere in the cache.

Each address has tag, index and offset. 

**For this type of question use the script for calculating cache addresses:**
Number of lines pr. set = associativity

usally the cache size is given in Kibibytes or other unit, convert this to byte.

1 KB = 1 Kibibyte (KiB) = 1024 bytes
1 MB = 1024KB = 1,048,576 bytes
1 GB = 1 000 000 000 bytes
1 Kbit = 1 kilobit = 125 bytes

**Managing state of tags**
If the index and tag is the same it's a hit. in a 4 way associative 
we keep 4 tags in each index, getting a hit is a good thing since it means we don't have to go into memory which is slow. 

**Replacement strategies**
- First in first out (FIFO): First block in is deleted first.
- Last in first out (LIFO): Last block in is deleted last.
- Least recently used (LRU): The last used block is deleted first. In the state of tags we order the tags from most recently used to least recently used. 
- Most recently used (MRU): The latest used block is deleted first.
- Random replacement (RR): A random block is deleted.

0 : {0x10, 0x0, 0x1, 0x11}
Means that in index we have recently encounted 0x10 and not encountered 0x11 for some time. 

If a new address comes in such as 0x12, 0x11 would be removed since we only have space for 4 in the cache:

0 : {0x12, 0x10, 0x0, 0x1}

if we now encounter 0x0 agian it gets moved to the front since thats the last we saw, this would be a hit: 

0 : {0x0, 0x12, 0x10, 0x1}


## Heap
**1. Understanding the Heap Structure:**

- Rows in the heap can be headers, footers, or payload, with each row having a size of 4, each row has an address.
- Blocks are collections of rows with a header, footer, and optional payload (sometimes blocks must have payload meaning they must be bigger than 8, which is the size of a block with only a header and footer).
- The heap grows from bottom up.
- Block sizes must be multiples of 8.
- When one block ends the next block the next starts. By finding header of one block you also know the next row will be Header of next block. 
![[Pasted image 20240113142357.png|500]]
**2. Analyzing Header and Footer Bits:**
- Bit 0 in the header/footer indicates block usage (1 for allocated, 0 for free).
- Bit 1 indicates the usage of the previous block.
- Bit 2 is unused and always set to 0.
- The block size is determined when the first 3 bits are set to 0.
	(this could change so be sure to read the text carefully)
	
	*example:* 0x23 = 0b0010 0011
	bit 0 is 1: the block is allocated
	bit 1 is 1: the previous block is allocated
	setting bit 0 and 1 to 0 we get the size: 0b00100000 = 32
	
	32 is a multiple of 8 the block would therefore have 8 rows since each row has a size of 4, therefore 8 * 4 = 32. 
	of those 8 rows 2 rows are for the header and footer
	
![[Pasted image 20240113142314.png|500]]
**3. Steps to Solve the Assignment:**
- Start by finding the first block (header or footer) from the bottom.
- Check if it's a valid block: Is the previous block allocated? Is the size correct (multiple of 8)?
- Find other blocks by moving from one block's footer to the next block's header, considering that blocks are right next to each other.

**4. Operations:**
- **immediate coalescing
- When freeing a block, check for adjacent free blocks immediately.
- If neighboring blocks are free, merge them into a single larger block.
- Ensure that the new block's header and footer are adjusted for the combined size, if 2 blocks have size 16, new size will be 32. alternatively count the amount of rows in each block (each row is 4 in size), *this not always possible(some rows of a block may be offscreen) so its better to look at header and footer of each block, determine their sizes, then add them up. See example below*
- Retain the headers and footers of the merged blocks in the payload area. That means the headers and footers in the middle of the block stay unchanged
- Update the adjacent block's (the block above)  header and footer bits to reflect the merged block's status.
- Verify that the merged block adheres to any specified constraints, such as not creating blocks with zero payload.
- Adjust the size and allocation status(bit 1 and 0) of the resulting block to accurately reflect the merged space.
![[Pasted image 20240113142159.png|600]]
- **Free Operation:**
    1. Find header and footer of the block to free (the whole block which contains the address to free has to be freed, however only the header and footer of the block will change).
    2. Implement immediate coalescing if adjacent blocks are free.
    3. Change header and footer bits to indicate the block is free.
    4. Update adjacent block header and footer bits.
    5. Recalculate the size and update the header/footer accordingly.
- **Malloc Operation:**    
    1. Find the block where the address is located, this block will be allocated or at least part of the block.
    2. Round up the requested size to the nearest multiple of 8.
    3. Determine the rows needed for the new block (considering header, footer, and payload). malloc(n) bytes meaning reserving n bytes of payload and 8 for the header and footer, therefore we malloc n+8. 
    4. if the free block is 32 for example, and you malloc(8), you get 2 new blocks one that that is 16 bytes and alllocated and another thats 16 bytes and free still, they previously free 32 byte block has been split. 
    5. if malloc ends up creating a empty free block (only header and footer) you have to take additional rows to avoid having empty blocks (*only if the text specifies that there can be no empty blocks*). See an example below.
    6. Change header and footer bits to indicate the block is allocated.
    7. Update the adjacent block's header and footer bits.
- **Realloc Operation:**
    
    1. Perform a combination of free and malloc.
    2. Free the existing block.
    3. Malloc a new block with the required size.
    4. Implement immediate coalescing if necessary.
    5. Adjust header and footer bits, considering the new block's size and allocation status.

**5. Internal Fragmentation:**
- Understand that rounding up to the nearest multiple of 8 can cause internal fragmentation.
- Example: If reallocating 12 bytes, you may end up with a block of 16 bytes, causing 4 bytes of internal fragmentation.
**6. Example:**
*Exam 20/21 *
- Follow the given examples to understand how to apply the mentioned steps and concepts:
- we want have freed some memory (blue) and want to realloc 12 bytes (red)
![[Pasted image 20240112234806.png]]
We have to take 16(realloc) + 4(header) + 4(footer) = 24 bytes, which is 6 rows (each row has size 4). 

the black is the remaining free space, but since there is a block above the free space, it would mean we would get a block with size 2 * 4 = 8. 

Exam text specifies that "we must never create blocks with 0 payload", this means we must not have a block that's only a header and footer, therefore we also need to take the remaining free space when re-allocating. 
![[Pasted image 20240112235041.png]]Therefore:
![[Pasted image 20240112235706.png]]
Therefore we get a block that is 16 + 16 in size, we remember that the old footer (0x13) and header (0x12) don't change since the 2 blocks merge into 1 due to immediate coalescing
![[Pasted image 20240112235808.png]]
**7. Additional Tips:**
- Pay attention to the specific requirements of the assignment, such as restrictions on block sizes or the presence of payload in certain cases.
- Be meticulous in tracking block sizes, allocation status, and immediate coalescing.
# Machine architecture 
## Assembly
### Registers 
The "ra" register holds the return address
call func, stores pc + 4 in ra.
![[Pasted image 20240118004548.png]]
### Instructions
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
### Calling functions
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
#### Example of function
• Caller loads arguments into registers a0-a7.
• Caller calls function (jal, jalr, etc.)
• Callee uses arguments
• Callee stores result (if any) in a0-1
• Callee returns (ret)
• Caller uses results (if any) from a0-1
### Loops
Branching instructions or pseudo branch instructions will often be used in a loop.

While-loop, For-loop optionally have a jalr or jal instruction (j pseudo instruction)

**OBS:** Infinite while-loop can use pseudo instruction j offset (instruction jal x0, offset , negative offset) with no branch instruction.
### Translating from Assembly to C and general tip
Risc v uses goto style, C does not. 

Take the assembly code and write a comment for each line that in c like pseudo code and explain with words what happens in that line 

lbu a5, 0(a0) would be a5 = a0 
![[Pasted image 20240118010227.png]]

## Pipeline Teori 
The non-pipelined approach to laundry would be as follows:
1. Place one dirty load of clothes in the washer.
2. When the washer is finished, place the wet load in the dryer.
3. When the dryer is finished, place the dry load on a table and fold.
4. When folding is finished, ask your roommate to put the clothes away.
As soon as the washer is finished with the first load and placed in the dryer, you load the washer with the second dirty load. When the first load is dry, you place it on the table to start folding, move the wet load to the dryer, and put the next dirty load into the washer. Next, you have your roommate put the first load away, you start folding the second load, the dryer has the third load, and you put the fourth load into the washer. At this point all steps—called stages in pipelining—are operating concurrently. 

instructions run in parrallel, since more instructions are handled at a time the program is executed faster

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
addi x11,x11,100           Fe De De Ex Me Wb
sw   x11,0(x14)               Fe Fe De Ex Me Wb
addi x10,x10,1                      Fe De Ex Me Wb
```
Her er skal addi bruge x11 og er derfor nødt til at vente på at `lw` har hentet en værdi fra memory og lagt den i x11, det sker i `Me`: derfor må addi stalle `Ex`  til at `lw` er færdi med `Me`.

I `sw` ser vi at `De` er nødt til at blive stallet fordi vi kun har en ressource til at køre `De` skridtet og derfor sker der et stall på `De` (`Fe Fe` eller `Fe >>`)  da vi venter på at `addi` er færdig med at stalle. Derfor behøver vi heller ikke stalle `Ex` hos `sw` da vi pga tidligere stall nu har x11 klar fra addi. 

addi x10 bliver også udskudt fordi vi ikke kan fetche flere ting på en gang.

### Branching
```
hop baglæns taget:       produce(De, PC)
hop baglæns ikke taget:  produce(Ex, PC)
hop forlæns taget:       produce(Ex, PC)
hop forlæns ikke taget:  -
Betinget hop behøver ikke Wb
```
![[Pasted image 20240115162432.png]]
Det betyder at hvis et hop baglæns tages så vil PC være klar i De derfor kan næste instruktions Fe fase begynde sammtidig med Ex fasen for branch instruktionen. Hvis hop ikke tages eller et hop forlæns tages så kan næste instruktions Fe fase først 

her unlades `Me` fasen i add og branch instruktioner: Don't do that.
### Superskalar
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

Der kan nu godt være 2 Fe på samme tid

```
aritmetisk op: depend(Ex,Rs1),depend(Ex,rs2),depend(Ex,rd),produce(Wb,rd)
```
Dette vil sikre at der maximalt er en instruktion for hvert register i trinnene fra Ex og frem ad gangen. Det udelukker forkert skrive rækkefølge og det sikrer at operand-referencer er unikke.

![[Pasted image 20240117014935.png]]
Her ser man at 2 instruktioner `lw` og `addi` begge kan være i fetch fasen på samme tid. 

# Networking
c1=send p1 : c1 send packet 1 
c3=rec ak0+send p3: c3 recieve and acknowledge s0 (server packet 0)  + send packet 3 (client to server)
## Packet switching
## Circuit switching
## Application layer
### HTTP
## Transport layer

TCP
UDP

### multiplexing demultiplexing
### Congestion control
### Flow control
### Go-back-N
### relliable data transfer

## Link layer
### IPV4
getting new ip adresses, why we don't need ipv6
### DNS
### Subnet
### Fowarding table
## Routing algoritms
### Link state
### Distant vector
## Security 
