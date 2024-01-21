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
![[Misc/åBilleder/32bit-Endianess.svg.png]]

IEEE 754 uses big endian as a standard

Many use the term _network order_, meaning the order of transmission for bytes _over the wire_ network protocols. Among others, defines the network order for protocols to be big-endian.

Host order: litte endian
## IEE float
The IEEE Standard for Floating-Point Arithmetic (IEEE 754) is a technical standard for floating-point computation.

IEEE floating point has clear properties.

There are several ways to represent floating point number but IEEE 754 is the most efficient in most cases. IEEE 754 has 3 basic components:
1. **The Sign of Mantissa –**  
    This is as simple as the name. 0 represents a positive number while 1 represents a negative number.
2. **The Biased exponent –**  
    The exponent field needs to represent both positive and negative exponents. A bias is added to the actual exponent in order to get the stored exponent.
3. **The Normalised Mantissa –**  
    The mantissa is part of a number in scientific notation or a floating-point number, consisting of its significant digits. Here we have only 2 digits, i.e. O and 1. So a normalised mantissa is one with only one 1 to the left of the decimal.

```
85.125
85 = 1010101
0.125 = 001
85.125 = 1010101.001
       =1.010101001 x 2^6 
sign = 0 

1. Single precision:
biased exponent 127+6=133
133 = 10000101
Normalised mantisa = 010101001
we will add 0's to complete the 23 bits

The IEEE 754 Single precision is:
= 0 10000101 01010100100000000000000
This can be written in hexadecimal form **42AA4000**

2. Double precision:
biased exponent 1023+6=1029
1029 = 10000000101
Normalised mantisa = 010101001
we will add 0's to complete the 52 bits

The IEEE 754 Double precision is:
= 0 10000000101 0101010010000000000000000000000000000000000000000000
This can be written in hexadecimal form **4055480000000000**
```

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
- Processes are a purely virtual concept, CPU has no idea what they are.
- Processes are isolated from each other.
- Processes can only directly interact with the outside world through system calls, mediated by the kernel.
Unix process can be in the following states:
- running
- sleeping (waiting for an event or signal)
- stopped (paused)
- zombie (terminated but waiting for parent process to acknowledge)
- uninterruptible sleep (waiting for a hardware event)

**Threads**
- run in same address as the calling process (changes are reflected)
- have own thread context: ID, SP, PC, general purpose registers, condition codes
- can access “critical memory” must be handled with semaphores (mutexes) and / or condition variables
- dies when the process containing the thread dies
**Kernel**
- “Aways resident code that services request from the hardware and manages processes”
- Unprivileged, must make calls to kernel to switch to privileged state (interrupts)
- The kernel handles: hardware, system memory, File I/0 and context switching
- Handles the following
	- Memory allocation and deallocation
	- Interrupt handling
	- Task scheduling
	- File system management
	- Network stack management
	- Access to hardware devices
	- Creation and deletion of processes
	- Control and manipulation of system resources such as CPU, memory, and I/O devices.
- Allowing user-level programs to perform these operations could potentially lead to systeminstability or security vulnerabilities.
- Process Management: The kernel manages the creation, execution and termination of processes. It also manages the scheduling of processes and assigns the CPU time to different processes.
- Memory Management: The kernel manages the physical and virtual memory of the system and provides memory allocation and deallocation services to the processes.
- File System: The kernel provides an interface for the file system, it manages the file system, and it controls the access to the file system by the processes.
- Network Stack: The kernel provides the network stack, which is responsible for managing the network communication and protocols.
- Device Drivers: The kernel provides the device drivers, which are responsible for managing the communication between the hardware and the kernel.
- Security: The kernel provides security mechanisms such as access control and authentication to protect the system and user's data.
**Syscalls**
A request by a process that the kernel carries out some operation on its behalf.
- Only the kernel has direct access to hardware and system memory.
- Whenever we want to do IO we have to perform a system call
- Much like a function call, but implemented very dierently.

See man syscalls to which functions perform syscall

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
Only one process gets to run at a time, but we regularly switch between available processes. Doing this often and rapidly creates the illusion of simultaneous execution.

Pausing a process, saving its entire state, then resuming some other process based on its saved state.

**So what do we need to save?**
1. All registers, including control registers.
2. Contents of memory.
**So when do we do this?**
- Regular timer interrupts transfer control to the kernel, whose scheduler decides the next process to run.
	- Scheduling is a big and interesting topic that we don't have time to go into.

**![[Pasted image 20240118025222.png]]**
## Fork 
See man fork() for more info.


- Each process in Unix has a process ID (PID).
- Each process has a parent.
- ...except the initial process (init) with PID 1.
- A process may have multiple children.
- Implies processes are organised as a tree (pstree command shows it).
- Creating processes: fork().
- Terminating current process: exit().
- Loading program code from disk into current process: exec().
- Waiting for a specic child to die: waitpid().
- Getting PID of running process: getpid().

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
Use DRAM as a cache for parts of a virtual address space
Uses memory efficiently by caching virtual memory pages
- Efficient only because of locality
- Simplifies memory management and programming
- Simplifies protection by providing a convenient interpositioning point to check permissions


Each process gets the same uniform linear address space that cannot be corrupted by other processes

**Isolates address spaces**
- One process can’t interfere with another’s memory
- User program cannot access privileged kernel information and code
Simplifying memory allocation
- Each virtual page can be mapped to any physical page
- A virtual page can be stored in different physical pages at different times
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
CompComponents of the virtual address (VA)
- TLBI: TLB index
- TLBT: TLB tag
- VPO: Virtual page offset
- VPN: Virtual page number
Components of the physical address (PA)
- PPO: Physical page offset (same as VPO)
- PPN: Physical page numberonents of the virtual address (VA)
- TLBI: TLB index
- TLBT: TLB tag
- VPO: Virtual page offset
- VPN: Virtual page number
Components of the physical address (PA)
- PPO: Physical page offset (same as VPO)
- PPN: Physical page number
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

## The 5 Different layers shortly described
The OSI (Open Systems Interconnection) model is a framework that is used to understand and describe the different layers of a computer network. The OSI model consists of 7 different layers, each with its own specific functions and responsibilities.
### Application Layer
The highest layer of the OSI model, the application layer is
responsible for providing the interface between the network and the applications that run on it. This layer is responsible for providing services to the user such as email, file transfer(HTTP), and web access.

This layer interacts directly with the application and end-user, and
provides services such as email, file transfer, and web access. Protocols that apply to this layer include HTTP (Hypertext Transfer Protocol), FTP (File Transfer Protocol), and SMTP (Simple Mail Transfer Protocol).
### Transport Layer
The transport layer is responsible for providing end-to-end
communication between devices on the network. It is responsible for providing reliable communication, flow control, and error recovery.

This layer provides end-to-end communication between applications. Protocols that apply to this layer include TCP (Transmission Control Protocol) and UDP (User Datagram Protocol).
### Network Layer
The network layer is responsible for providing routing and switching
services. It is responsible for determining the best path for data to travel from one device to another and for managing the flow of data across the network.

This layer is responsible for routing and forwarding packets through a network. Protocols that apply to this layer include IP (Internet Protocol) and ICMP (Internet Control Message Protocol).
### Link Layer
The link layer is responsible for providing communication between
devices on the same network segment. It is responsible for providing services such as error detection, flow control, and addressing. 

This layer provides a reliable link between devices on a network. Protocols that apply to this layer include MAC (Media Access Control) and LLC (Logical Link Control).

### Physical Layer 
The lowest layer of the OSI model, the physical layer is responsible for providing the physical connection between devices on the network. This layer is responsible for the transmission of bits over the physical medium such as copper or fiber-optic cables.

This layer deals with the physical connection between devices, such as cables and switches. Protocols that apply to this layer include Ethernet and Wi-Fi.
## CDN
Content Distribution Networks (CDN s) are a system of distributed servers that are deployed in multiple data centers around the world. The goal of a CDN is to provide faster delivery of content to users by caching a copy of the content on servers that are closer to the user's location.

CDN s can be used to speed up the delivery of a wide variety of content, including web pages, images, videos, audio and video streaming, software downloads and more. They work by intercepting requests for content from users and redirecting them to the nearest server that has a cached copy of the content. This reduces the distance that the data needs to travel, which can result in faster delivery times.
## CDN and P2P
CDN vs. Peer-to-peer:
A Content Delivery Network (CDN) is a system of distributed servers that are used to deliver web content to users based on their geographic location. The goal of a CDN is to reduce latency and improve the performance of web content delivery. This is
accomplished by caching frequently requested content on servers located in strategic locations around the world, so that users can access the content from a server that is geographically closer to them.

Peer-to-peer (P2P) is a decentralized type of network, where each node (peer) acts as both a client and a server. In a P2P network, files and other resources are shared directly between users, rather than being stored on a central server.

The main difference between CDN and P2P is the way content is delivered. CDN uses a centralized system where content is stored on servers that are strategically placed, while P2P uses a decentralized system where content is shared directly between
users. CDN is typically used for delivering static content such as images and videos, while P2P is typically used for sharing files such as music and movies. CDN is mainly used by large companies and websites with high traffic, while P2P is mainly used by
smaller groups of people for sharing files among themselves.

## Packet switching
To send a message from a source end system to a destination end
system, the source breaks long messages into smaller chunks of data known as packets. Between source and destination, each packet travels through communication links and packet switches (for which there are two predominant types, routers and link-layer switches). Packets are transmitted over each communication link at a rate equal to the full transmission rate of the link. So, if a source end system or a packet switch is sending a packet of L bits over a link with transmission rate R bits/sec, then the time to transmit the packet is L / R seconds.
![[Pasted image 20240121165741.png]]
Store-and-forward transmission means that the packet switch must receive the entire packet before it can begin to transmit the first bit of the packet onto the outbound link.

in addition to the store-and-forward delays, packets
suffer output buffer queuing delays.

an arriving packet may find that the buffer is completely full with other packets waiting for transmission. In this case, packet loss will occur—either the arriving packet or one of the already-queued packets will be dropped.
## Delay 
**Processing Delay**
The time required to examine the packet’s header and determine where to direct the packet is part of the processing delay. The processing delay can also include other factors, such as the time needed to check for bit-level errors in the packet that occurred in transmitting the packet’s bits from the upstream node to router A.

**Queuing Delay**
At the queue, the packet experiences a queuing delay as it waits to be transmitted onto the link. The length of the queuing delay of a specific packet will depend on the number of earlier-arriving packets that are queued and waiting for transmission onto
the link. If the queue is empty and no other packet is currently being transmitted, then our packet’s queuing delay will be zero. On the other hand, if the traffic is heavy and many other packets are also waiting to be transmitted, the queuing delay will be long.

**Transmission Delay**
Assuming that packets are transmitted in a first-come-first-served manner, as is common in packet-switched networks, our packet can be transmitted only after all the packets that have arrived before it have been transmitted. 

Denote the length of the packet by L bits and denote the transmission rate of the link from router A to router B by R bits/sec. For example, for a 10 Mbps Ethernet link, the rate is R = 10 Mbps;
for a 100 Mbps Ethernet link, the rate is R = 100 Mbps. The transmission delay is L/R. This is the amount of time required to push (that is, transmit) all of the packet’s bits into the link.

**Propagation Delay**
Once a bit is pushed into the link, it needs to propagate to router B. The time required to propagate from the beginning of the link to router B is the propagation delay. The bit propagates at the propagation speed of the link. The propagation speed depends
on the physical medium of the link (that is, fiber optics, twisted-pair copper wire, and so on).
**Propagation Delay vs Transmission Delay**
The transmission delay is the amount of time required
for the router to push out the packet; it is a function of the packet’s length and the transmission rate of the link, but has nothing to do with the distance between the two routers. The propagation delay, on the other hand, is the time it takes a bit to propagate from one router to the next; it is a function of the distance between the two routers, but has nothing to do with the packet’s length or the transmission rate of the link.
**Nodal delay**
$$
d_{\text {nodal }}=d_{\text {proc }}+d_{\text {queue }}+d_{\text {trans }}+d_{\text {prop }}
$$
## Throughput
In addition to delay and packet loss, another critical performance measure in computer networks is end-to-end throughput. To define throughput, consider transferring a large file from Host A to Host B across a computer network. This transfer might be, for example, a large video clip from one computer to another. The instantaneous throughput at any instant of time is the rate (in bits/sec) at which Host B is receiving the file.
## Circuit switching
In circuit-switched networks, the resources needed along a path (buffers, link transmission rate) to provide for communication between the end systems are reserved for the duration of the communication session between the end systems.

When the network establishes the circuit, it also
reserves a constant transmission rate in the network’s links
## Application layer
### HTTP
![[Pasted image 20240121133223.png]]
![[Pasted image 20240121133259.png]]

Get, POST, HEAD, PUT, and DELETE
The GET method is used when the browser requests an object, with the requested object identified in the URL field.

The header line Host:
www.someschool.edu specifies the host on which the object resides.

By including the Connection: close header line, the browser is telling the server that it doesn’t want to bother with persistent connection

The User-agent: header line specifies the user agent, that
is, the browser type that is making the request to the server

the Accept-language: header indicates that the user prefers to receive a French version of the object, if such an object exists on the server; otherwise, the server should send its default version.



An HTTP client often uses the POST method when the user fills out a form—for example, when a user provides search words to a search engine. With a POST message, the user is still requesting a Web page from the server, but the specific contents of the Web page depend on what the user entered into the form fields.

When a server receives a request with the HEAD method, it responds with an HTTP message but it leaves out the requested object. Application developers often use the HEAD method for debugging.

The PUT method is often used in conjunction with Web publishing tools. It allows a user to upload an object to a specific path (directory) on a specific Web server. The PUT method is also used by applications that need to upload objects to Web servers. The DELETE method allows a user, or an application, to delete an
object on a Web server.

**Some common status codes and associated phrases include:**
- *200 OK:* Request succeeded and the information is returned in the response.
- *301 Moved Permanently:* Requested object has been permanently moved; the new URL is specified in Location: header of the response message. The client software will automatically retrieve the new URL.
- *400 Bad Request:* This is a generic error code indicating that the request could not be understood by the server.
- *404 Not Found:* The requested document does not exist on this server.
- *505 HTTP Version Not Supported:* The requested HTTP protocol version is not supported by the server.

should each request/response pair be sent over a separate TCP connection, or should all of the requests and their corresponding responses be sent over the same TCP connection? **non-persistent connections**; and in the latter approach, **persistent connections**.

HTTP is said to be a stateless protocol. We also
remark that the Web uses the client-server application architecture

**Non persistent:**
1. The HTTP client process initiates a TCP connection to the server www.someSchool.edu on port number 80, which is the default port number for HTTP. Associated with the TCP connection, there will be a socket at the client and a socket at the server.
2. The HTTP client sends an HTTP request message to the server via its socket. The request message includes the path name /someDepartment/home.index.
3. The HTTP server process receives the request message via its socket, retrieves the object /someDepartment/home.index from its storage (RAM or disk), encapsulates the object in an HTTP response message, and sends the response message to the client via its socket.
4. The HTTP server process tells TCP to close the TCP connection. (But TCP doesn’t actually terminate the connection until it knows for sure that the client has received the response message intact.)

**Persistent:**
Non-persistent connections have some shortcomings. First, a brand-new connection must be established and maintained for each requested object. For each of these connections, TCP buffers must be allocated and TCP variables must be kept in both the client and server. This can place a significant burden on the Web server, which may be serving requests from hundreds of different clients simultaneously.

With HTTP/1.1 persistent connections, the server leaves the TCP connection open after sending a response. The default mode of HTTP uses persistent connections with pipelining.


an HTTP server is stateless, but often desirable for a Web site to identify users: Cookies. allow sites to keep track of users
![[Pasted image 20240121134742.png]]
including in the HTTP response a Set-cookie: header, which contains the identification number: Set-cookie: 1678


A Web cache—also called a proxy server—is a network entity that satisfies HTTP requests on the behalf of an origin Web server. The Web cache has its own disk storage and keeps copies of recently requested objects in this storage.
![[Pasted image 20240121134901.png]]
## HTTP2
The primary goals for HTTP/2 are to reduce perceived latency by enabling request and response multiplexing over a single TCP connection, provide request prioritization and server push, and provide efficient compression of HTTP header fields. HTTP/2
does not change HTTP methods, status codes, URLs, or header fields. Instead, HTTP/2 changes how the data is formatted and transported between the client and server.

developers of Web browsers quickly discovered that sending all the objects in a Web page over a single TCP connection(HTTP1) has a Head of Line (HOL) blocking problem (side 144).

One of the primary goals of HTTP/2 is to get rid of (or at least reduce the number of) parallel TCP connections for transporting a single Web page. This not onlyreduces the number of sockets that 
need to be open and maintained at servers, but also allows TCP congestion control to operate as intended.
## Transport layer

### UDP
One way data transfer, dosent guarnatue delivery, since there are no handshaking 

Includes a checksum, but no way of knowing if packets are in correct order or lost. No retransmit

UDP is typically used for applications that do not require a reliable, ordered delivery of data. This means that it's not good for something like video streaming or gaming. 
### TCP
**The 32-bit sequence number field** and the **32-bit acknowledgment number** field are used by the TCP sender and receiver in implementing a reliable data transfer service.

**The 16-bit receive window field** is used for flow control. Used to indicate the number of bytes that a receiver is willing to accept.¨

**The 4-bit header length field** specifies the length of the TCP header in 32-bit words. The TCP header can be of variable length due to the TCP options field.

**The optional and variable-length options field** is used when a sender and receiver negotiate the maximum segment size (MSS) or as a window scaling factor for use in high-speed networks.

**The flag field contains 6 bits**. The ACK bit is used to indicate that the value carried in the acknowledgment field is valid; that is, the segment contains an acknowledgment for a segment that has been successfully received. The RST, SYN, and FIN bits are used for connection setup and teardown
![[Pasted image 20240121160906.png]]
Connection-oriented vs Connectionless: TCP is a connection-oriented protocol, which means that a connection must be established between the sender and receiver before any data can be sent. UDP, on the other hand, is connectionless, which means that data can be sent without establishing a connection first.

TCP has error checking and correction mechanisms built in to
ensure data integrity. UDP has minimal error checking, and any errors must be handled at the application level.

TCP has more overhead than UDP because it establishes and maintains connections, performs error checking, and ensures data integrity. This can make TCP slower than UDP for some applications.
![[Pasted image 20240121161354.png]]
Fast Retransmit
One of the problems with timeout-triggered retransmissions is that the timeout period can be relatively long. When a segment is lost, this long timeout period forces the sender to delay resending the lost packet, thereby increasing the end-to-end delay. Fortunately, the sender can often detect packet loss well before the timeout event occurs by noting so-called duplicate ACKs. A duplicate ACK is an ACK that reacknowledges a segment for which the sender has already received an earlier acknowledgment.
![[Pasted image 20240121161630.png]]

**Is TCP a GBN or an SR protocol?**
TCP acknowledg-ments are cumulative and correctly received but out-of-order segments are not individually ACKed by the receiver. TCP looks a lot like a GBN-style protocol. But there are some striking differences between TCP and Go-Back-N. Many TCP implementations will buffer correctly received but out-of-order
segments
*example:*
the sender sends a sequence of segments 1, 2, . . . , N, and all of the segments arrive in order without error at the receiver the acknowledgment for packet n < N gets lost, but the remaining N - 1 acknowledgments arrive at the sender before their respective timeouts. GBN would retransmit not only packet n, but also all of the subsequent packets n + 1, n + 2, . . . , N. TCP, on the other hand, would retransmit at most one segment, namely, segment n. Moreover, TCP would not even retransmit segment n if the acknowledgment for segment n + 1 arrived before the timeout for segment n.

Use case: TCP is typically used for applications that require a reliable, ordered delivery of data, such as web browsing, email, and file transfer. ordered delivery of data, such as streaming video and audio, online gaming, and DNS queries.
has reliable data transfer.

### multiplexing demultiplexing
Now let’s consider how a receiving host directs an incoming transport-layer
segment to the appropriate socket. Each transport-layer segment has a set of fields in
the segment for this purpose. At the receiving end, the transport layer examines these
fields to identify the receiving socket and then directs the segment to that socket.
This job of delivering the data in a transport-layer segment to the correct socket is
called demultiplexing. The job of gathering data chunks at the source host from
different sockets, encapsulating each data chunk with header information (that will
later be used in demultiplexing) to create segments, and passing the segments to the
network layer is called multiplexing.

we know that transport-layer multiplexing requires (1) that sockets have unique
identifiers, and (2) that each segment have special fields that indicate the socket to
which the segment is to be delivered. These special fields, illustrated in Figure 3.3,
are the source port number field and the destination port number field. (The UDP
and TCP segments have other fields as well, as discussed in the subsequent sections
of this chapter.) Each port number is a 16-bit number, ranging from 0 to 65535.
The port numbers ranging from 0 to 1023 are called well-known port numbers
and are restricted, which means that they are reserved for use by well-known

application protocols such as HTTP (which uses port number 80) and FTP (which
uses port number 21).

Each socket in the host could be assigned a port number, and when
a segment arrives at the host, the transport layer examines the destination port
number in the segment and directs the segment to the corresponding socket. The
segment’s data then passes through the socket into the attached process. As we’ll
see, this is basically how UDP does it. However, we’ll also see that multiplexing/
demultiplexing in TCP is yet more subtle


TCP socket and a UDP socket is that a TCP socket is identified by a four-tuple:
(source IP address, source port number, destination IP address, destination port
number). Thus, when a TCP segment arrives from the network to a host, the host
uses all four values to direct (demultiplex) the segment to the appropriate socket.

In particular, and in contrast with UDP, two arriving TCP segments with differ-
ent source IP addresses or source port numbers will (with the exception of a TCP
segment carrying the original connection-establishment request) be directed to two
different sockets.
### Congestion control
congestion window=cwnd
ssthresh (short-hand for “slow start threshold”)
![[Pasted image 20240121163025.png]]
Congestion control adjusts the sending rate of the sender based on network conditions to prevent packet loss and delays. 

Congestion control, is a mechanism used to prevent network
congestion by regulating the rate at which data is sent into the network. Congestion occurs when too much data is sent into the network, causing network resources such as bandwidth and buffer space to become exhausted. Congestion control is mainly used at the transport layer. (Har mere at gøre med den fysiske “tykkelse” på ledingen og hvor meget der kan sendes.)
![[blobid21-60f546786ae24.jpeg]]
Every step in the reno protocol:
- slow start
- triple duplicate loss
- Fast recovery ssthresh = control window/2
((new control window = control window/2) + 3)
- congestion control
- triple duplicate loss
- Fast recovery Fast recovery ssthresh = control window/2
((new control window = control window/2) + 3)
- congestion control
- timeout (control window = control window/2)
- slow start
TCP Tahoe dosent have fast recovery 
![[Pasted image 20240121162934.png]]
### Flow control
TCP uses flow control mechanisms to prevent the sender from overwhelming the receiver. UDP does not have flow control mechanisms, so the sender can potentially overwhelm the receiver.

Flow control is a mechanism used to prevent a fast sender from overwhelming a slow receiver. It ensures that the receiver can handle the data being sent to it, by regulating the rate at which the sender sends data. Flow control is mainly used at the data link layer. ( only has to do with the receiver). It is done by having the receiver send a window of how much it can receive with its messages.  Flow control is thus a speedmatching service

TCP provides flow control by having the sender maintain a variable called the receive window.

Flow control in TCP helps with congestion control by allowing the receiver to limit the amount of data that the sender can send, preventing the sender from overwhelming the network.
Both flow control and congestion control are necessary for
efficient and stable network communication.
### TCP Connection Management
Suppose a process running in one host (client) wants to initiate a connection with another process in another host (server)

**Step 1.** The client-side TCP first sends a special TCP segment to the server-side TCP. This special segment contains no application-layer data. But one of the flag bits in the segment’s header (see Figure 3.29), the SYN bit, is set to 1.

**step 2.** Once the IP datagram containing the TCP SYN segment arrives at the server host, the server extracts the TCP SYN segment from the datagram, allocates the TCP buffers and variables to the connection, and sends a connection-granted segment to the client TCP. the SYN bit is set to 1. Second, the
acknowledgment field of the TCP segment header is set to client_isn+1. Finally, the server chooses its own initial sequence number (server_isn) and puts this value in the sequence number field of the TCP segment header. saying, in effect, “I received your SYN packet to start a connection with your initial sequence number, client_isn. I agree to establish this connection. My own initial sequence number is server_isn.” The connection-granted segment is referred to as a SYNACK segment.

**Step 3.** Upon receiving the SYNACK segment, the client also allocates buffers and variables to the connection. The client host then sends the server yet another segment; this last segment acknowledges the server’s connection-granted segment. The SYN bit is set to zero, since the connection is established. This third stage of the three-way handshake may carry client-to-server data in the segment payload
![[Pasted image 20240121162755.png]]
Once these three steps have been completed, the client and server hosts can send segments containing data to each other. In each of these future segments, the SYN bit will be set to zero.
![[Pasted image 20240121162828.png]]
### Reliable data transfer
![[Pasted image 20240121160801.png]]
TCP provides a reliable connection, which means that data sent using TCP is guaranteed to reach the receiver. In contrast, UDP does not guarantee that data will reach the receiver, and packets can be lost or delivered out of order.
![[Pasted image 20240121140150.png]]
### Sliding window
N is often referred to as the window size and the GBN protocol itself as a sliding-window protocol
### Go-back-N
It is a type of sliding window protocol, which means that it uses a fixed-size window to control the flow of data between devices.

In Go-Back-N, the sender sends multiple packets of data in sequence, and the receiver acknowledges receipt of each packet. If the sender does not receive an acknowledgement for a packet within a certain period of time, it will assume that the packet was lost and retransmit it. 

If the receiver receives a packet out of order, it will discard it and request a retransmission of that packet. 

Once the sender receives an acknowledgement for a packet, it will slide the window forward to the next unacknowledged packet, allowing it to continue sending data. 
![[Pasted image 20240121155206.png]]
constrained to have no more than some maximum allowable number, N, of unacknowledged packets in the pipeline

Go-Back-N is efficient in terms of network bandwidth usage, as it does not require the sender to wait for an acknowledgement for every packet sent, but if a packet is lost, all packets sent after it will be retransmited which leads to waste of bandwidth.

In our GBN protocol, the receiver discards out-of-order packets. Although it may seem silly and wasteful to discard a correctly received (but out-of-order) packet, there is some justification for doing so. the only piece of information the receiver need maintain is
the sequence number of the next in-order packet. If packet n is expected, but packet n + 1 arrives data must be delivered in order, the receiver could buffer (save) packet n + 1 and then deliver this packet to the upper layer after it had later received and delivered packet n. However, if packet n is lost, both it and packet n + 1 will eventually be retransmitted as a result of the GBN retransmission rule at the sender. Thus, the receiver can simply discard packet n + 1.

**Invocation from above:** When rdt_send() is called from above, the sender first checks to see if the window is full, that is, whether there are N outstanding, unacknowledged packets. If the window is not full, a packet is created and sent, and variables are appropriately updated. If the window is full, the sender
simply returns the data back to the upper layer, an implicit indication that the window is full. The upper layer would presumably then have to try again later

**Receipt of an ACK:** In our GBN protocol, an acknowledgment for a packet with sequence number n will be taken to be a cumulative acknowledgment, indicating that all packets with a sequence number up to and including n have been correctly received at the receiver.

**A timeout event:**. The protocol’s name, “Go-Back-N,” is derived from the sender’s behavior in the presence of lost or overly delayed packets. As in the stop-and-wait protocol, a timer will again be used to recover from lost data or acknowledgment
packets. If a timeout occurs, the sender resends all packets that have been previously sent but that have not yet been acknowledged.
![[Pasted image 20240121160102.png]]
### Selective repeat protocol (SR)
GBN(Go-back-N) avoids this stop-and-wait protocol, however this can also cause performance problems. If window size and bandwith delay are big, many packets can be in the pipeline, thus if there is a packet error a whole bunch of packets must be retransmitted.


In Selective Repeat, the sender sends multiple packets of data in sequence, and the receiver acknowledges receipt of each packet. However, unlike Go-Back-N, if the receiver receives a packet out of order, it will buffer it and request a retransmission of only the missing packets. This allows the receiver to continue processing the correctly received packets, reducing the delay caused by retransmitting all packets.
![[Pasted image 20240121160550.png]]
![[Pasted image 20240121160711.png]]
## Link layer
### IP
![[Pasted image 20240121163424.png]]
An IP address is considered hierarchical because it is divided into different fields that represent different levels of the network hierarchy. The most common format of an IP address is IPv4, which is a 32-bit address divided into four octets. Each octet represents a different level of the network hierarchy:

An octet is a unit of digital information that consists of eight bits. In the context of IP addresses, an octet refers to one of the four 8-bit fields that make up an IPv4 address. Each octet is represented by a decimal number between 0 and 255, and is separated by a period. In IPv6 addresses, an octet is represented by a 16-bit field (2 bytes) instead of 8-bit field.

- The first octet represents the network address, also known as the "class" of the IP address
- The second and third octets represent the subnet address
- The fourth octet represents the host address
This hierarchical structure allows for efficient routing and 
management of IP addresses.

The hierarchical structure of IP addresses solves several problems:

**Routing scalability:** The hierarchical structure of IP addresses allows routers to make forwarding decisions based on the network address rather than the entire IP address. This improves
routing scalability and reduces the amount of memory and processing power required for routers.

**Address aggregation:** The hierarchical structure of IP addresses allows for address aggregation, which is the process of combining multiple subnets into a single routing entry.

**Hierarchical addressing:** The hierarchical structure of IP addresses allows for a hierarchical addressing scheme, which is a way of allocating IP addresses that reflects the topological structure of the network. This allows for efficient routing and management of IP addresses, and makes it easier to add and remove devices from
the network.

**IPv6 :**
A prime motivation for this effort was the realization
that the 32-bit IPv4 address space was beginning to be used up

The approach to IPv4-to-IPv6 transition that has been most widely adopted inpractice involves tunneling
### Dynamic Host Configuration Protocol (DHCP)
DHCP allows a host to obtain (be allocated) an IP address automatically. A network administrator can configure DHCP so that a given host receives the same IP address each time it connects to the network, or a host may be assigned a temporary IP address that will be different each time the host connects to the network. In addition to host IP address assignment, DHCP also allows a host to learn additional information, such as its subnet mask, the address of its first-hop router (often called the default gateway), and the address of its local DNS server.  

DHCP is a client-server protocol.
![[Pasted image 20240121165327.png]]

Often referred to as a plug-and-play or zeroconf(zero-configuration) protocol. This capability makes it very attractive to the network administrator who would otherwise have to perform these tasks manually!

the student who carries a laptop from a dormitory room to
a library to a classroom. It is likely that in each location, the student will be connecting into a new subnet and hence will need a new IP address at each location. DHCP is ideally suited to this situation, as there are many users coming and going, and addresses are needed for only a limited amount of time.
### DNS (Domain Name System)
The DNS protocol runs over UDP and uses port 53.

It is a hierarchical, decentralized system for resolving domain names, such as www.example.com, into IP addresses. The IP address is the numerical label assigned to each device connected to a computer network that uses the Internet Protocol for communication. DNS allows users to access websites and other resources by typing domain names instead of IP addresses. DNS servers are responsible for resolving domain names to IP-addresses and caching the results for a certain period of time.

DNS information is not stored in one location, but a collection of servers worldwide. These exist at different abstraction layers with root servers at the top serving all below. Top-level domains server specific domain names (eg. .com, .dk). Individual organisations have their own DNS servers at the bottom. This makes the system more robust by removing a central failure point, and quicker to respond by having servers closer to worldwide requests.

Iterative DNS and Recursive DNS are two different methods of resolving domain names to IP addresses.

Iterative DNS is a method in which the client queries a DNS server, and the server gives referrals if it does not have the answer, whereas Recursive DNS is a method in which the DNS server takes the responsibility of finding the answer for the client and don't
give referrals. The recursive DNS is more efficient in terms of network and client resources, but the iterative DNS is more secure because it does not rely on a single DNS server.
### Network Address Translation (NAT)
here are hundreds of thousands of home networks, many using the same address space, 10.0.0.0/24. Devices within a given home network can send packets to each other using 10.0.0.0/24 addressing. However, packets forwarded beyond the home
network into the larger global Internet clearly cannot use these addresses (as either a source or a destination address) because there are hundreds of thousands of networks using this block of addresses. That is, the 10.0.0.0/24 addresses can only have meaning within the given home network. But if private addresses only have meaning within a given network, how is addressing handled when packets are sent to or received from the global Internet, where addresses are necessarily unique? The
answer lies in understanding NAT.

The NAT-enabled router does not look like a router to the outside world. Instead the NAT router behaves to the outside world as a single device with a single IP address. In Figure 4.25, all traffic leaving the home router for the larger Internet has a source IP address of 138.76.29.7, and all traffic entering the home router must have a destination address of 138.76.29.7. In essence, the NAT-enabled router is hiding the details of the home network from the outside world.

the home network computers get their addresses and the router gets its single IP address: the answer is the same—DHCP! The router gets its address from the ISP’s DHCP server, and the router runs a DHCP server to provide addresses to computers within the NAT-DHCP-router-controlled home network’s address space.

If all datagrams arriving at the NAT router from the WAN have the same destination IP address (specifically, that of the WAN-side interface of the NAT router), then how does the router know the internal host to which it should forward a given datagram? The trick is to use a NAT translation table at the NAT router, and to
include port numbers as well as IP addresses in the table entries.

There are some detractors. First, one might argue that, port numbers are meant to be used for addressing processes, not for addressing hosts. This cause problems for servers running on the home network, since, server processes wait for incoming requests at well-known port numbers and peers in a P2P protocol need to accept incoming connections when acting as servers. How can one peer connect to another peer that is behind a NAT server, and has a DHCP-provided NAT address? Technical solutions to these problems include NAT traversal tools.
### Fowarding table
When a source end system wants to send a packet to a destination end system, the source includes the destination’s IP address in the packet’s header. As with postal addresses, this address has a hierarchical structure. When a packet arrives at a router
in the network, the router examines a portion of the packet’s destination address and forwards the packet to an adjacent router. More specifically, each router has a forwarding table that maps destination addresses
#### KR chap 4 p8
11100001 01111111 11111111 111

| Destination Address Range           | Link Interface |
| ----------------------------------- | -------------- |
| 11100000 00000000 00000000 00000000 |                |
| through                             | 0              |
| 11100000 00111111 11111111 11111111 |                |
|                                     |                |
| 11100000 01000000 00000000 00000000 |                |
| through                             | 1              |
| 11100000 01000000 11111111 11111111 |                |
|                                     |                |
| 11100000 01000001 00000000 00000000 |                |
| through                             | 2              |
| 11100001 01111111 11111111 11111111 |                |
| otherwise                                    | 3               |
- a) Provide a forwarding table that has five entries, uses longest prefix match-ing, and forwards packets to the correct link interfaces.
Her kigger jeg på de adresses der skal gå iggennem 0 matcher på 10 bits
*11100000 00***000000 00000000** 
*11100000 00***111111 11111111 11111111**
her kan man se at de matcher op til 10 bit derfor kan vi bruge de 10 bits som et prefix : 11100000 . 00, hvis vi har en adresse der har et match med det prefix skal er den i range mellem de 2 adresser den har en value der ligger imellem de 2 og skal derfor igennem 0.

11100000 01000000 og 
11100000 01000001 matcher, derfor er man nødt til at medtage de 16 bits i prefix tabellen

specielt er
*1110000*0 01000001 00000000 
*1110000*1 01111111 11111111 11111111
de matcher op til 7. bit, men efter det i *1110000*1 0111... kan 0'tallet godt være 1 og det ville faktisk gøre tallet større end den range vi vil have derfor er vi nødt til at have flere cases, der er et tilfælde hvor prefixet matcher og efterfulgt er 10 og det ville være inde for range derfor skal det mappe til 2, men hvis det er 11 vil det være ude for rangen og derfor skal det linke til 3, 01 ville være inde for range, det behøver vi ikke speciel case til

| Prefix match  | Interface |
| ------------- | --------- |
| 11100000 . 00 | 0         |
| 11100000 01000000 | 1         |
| 1110000       | 2         |
| 11100001 1    | 3         |
| otherwise              | 3          |
man kunne også tilføje flere cases for otherwise

- b) Describe how your forwarding table determines the appropriate link inter-face for datagrams with destination addresses:
		11001000 10010001 01010001 01010101 <- 5th entry : link 3 
		11100001 01000000 11000011 00111100 <- 3rd entry : link 2
		11100001 10000000 00010001 01110111 <- 4th entry : link 3
den kigger på om der er match med nogle prefixes: 11001000 matcher ikke med nogle prefixes og bliver derfor linket til 3 
### Mac
MAC (Media Access Control) addresses are unique identifiers assigned to network interfaces, such as Ethernet cards, Wi-Fi adapters, and so on. They are used to identify devices at the Data Link Layer of the OSI model, which is responsible for providing a reliable link between devices on a local area network (LAN).

The main purpose of MAC addresses is to provide a unique identifier for each device on a LAN, so that data can be properly delivered to the correct device. When a device on a LAN
wants to send data to another device, it uses the destination device's MAC address to identify it. The data is then transmitted over the LAN in a special format called an Ethernet frame, which includes both the source and destination MAC addresses. 

MAC addresses are not hierarchical because they are not divided into fields that represent different levels of the network hierarchy. Instead, they are fixed-length identifiers that are assigned to devices by their manufacturers. This makes them unique on the LAN, but they are not unique globally, as there's no concept of "network" or "subnet" on the MAC address. 

MAC addresses are also not hierarchical because they are not used for routing purposes. Unlike IP addresses, which are used to route data between networks, MAC addresses are used only for identifying devices on a single LAN. The data is then delivered to the correct device based on the MAC address, but it is not used for routing the data between different networks.

In summary, the purpose of MAC addresses is to identify devices on a LAN and to ensure that data is delivered to the correct device. They are not hierarchical in nature and are not used for routing purposes.
## Routing algoritms
### Link state
Dijkstra's algorithm is a graph search algorithm that solves the single-source shortest path problem for a graph with non-negative edge weights, producing a shortest path tree. This means that the algorithm finds the shortest path from one particular source
node to all other nodes in the graph. The algorithm repeatedly selects the node with the lowest distance, calculates the distance through it to each unvisited neighbor, and updates the neighbor's distance if smaller.
#### Table

### Distant vector
Distance vector routing is a method used by routers in a computer network to determine the best path for forwarding packets. In distance vector routing, each router maintains a table of the shortest distances to every other network, as well as the next hop on the path to that network. The basic function of distance vector routing is for each router to share its table of distances with its neighbors, and for each router to update its own table based on the
information received from its neighbors. 

This process is known as distance vector algorithm or Bellman-Ford algorithm. The algorithm is iterative and each router continues to update its distance vector until the values in the vector stabilize and no further updates are made.
#### Table

#### Count to infinity problem
The count-to-infinity problem is a problem that can occur in distributed systems, particularly in distance-vector routing algorithms. It is a problem that can happen when two or more
nodes in a network are trying to determine the best path to a destination. 

The problem arises when two nodes, A and B, both have an incorrect distance to a destination, C. Each node assumes that the other node has the correct distance and starts incrementing its own distance in an attempt to converge on the correct value. However, since both nodes have incorrect distances, they will continue to increment their distances indefinitely, causing their distance values to grow larger and larger. This is referred to as
"counting to infinity." 

The problem can be mitigated by using a metric such as Bellman-Ford or Dijkstra algorithm, which incorporate a mechanism such as a maximum hop count or a timeout to prevent the distance values from growing indefinitely. The idea behind these algorithms is to prevent the nodes from counting to infinity by introducing a maximum value for the distance, when this maximum value is reached the node will consider that the information is incorrect and
discard it.

**Summary:**
The count-to-infinity problem is a problem that can occur in distance-vector routing algorithms when two or more nodes in a network are trying to determine the best
path to a destination, and the nodes keep incrementing the distance values indefinitely, leading them to become larger and larger, referred to as counting to infinity. This problem
can be mitigated by using a different routing algorithm that incorporates a mechanism to prevent the distance values from growing indefinitely.
## Security 
### Salting

### Playback attack 
A playback attack is a type of network attack in which an attacker intercepts and records a valid authentication or encryption message, such as an authentication token or a session ID and then replays it at a later time to gain unauthorized access to a system.

A nonce (short for "number used once") is a unique value that is generated for each authentication or encryption message, and is included in the message as part of the authentication or encryption process. Because the nonce is generated anew for each
message, it can only be used once, making it difficult for an attacker to replay a previously intercepted message.

When a message is received, the nonce is checked against a database of previously used nonces. If the nonce has already been used, the message is rejected, thus preventing a replay attack.

In summary, a nonce is a solution to a playback attack by ensuring that the message can only be used once, and that the message is coming from the expected sender, thus making it difficult for an attacker to replay a recorded message.

### Nonce:
A nonce is a number that is used only once. In cryptography, a nonce is a random or unique number that is generated for each encryption operation. The nonce is included as part of the
input to the encryption algorithm, along with the plaintext and a key. The nonce provides an extra level of security by ensuring that the same plaintext and key will not produce the same ciphertext even if the same encryption algorithm is used. In some cases, the nonce is used to make sure that the data that is exchanged between the sender and receiver is unique and has not been tampered with. The nonce is sent along with the message and the recipient can check if it is unique or not, if the nonce is not unique then the message is dropped.

Nonces are widely used in various cryptographic protocols like in the WPA2 wireless security protocol and in the AES-GCM encryption algorithm.
### Replay attack
A replay attack is a type of network security attack in which an attacker intercepts and records a legitimate network packet and then retransmits it at a later time. The goal of a replay attack is to gain unauthorized access to a network or system by replaying a previously captured packet that contains valid authentication or session information. 

Replay attacks can occur at different layers of the OSI model, but most commonly occur at the transport layer, where they can exploit the stateless nature of the User Datagram
Protocol (UDP) and the Transmission Control Protocol (TCP).

For example, an attacker could intercept a packet that contains a valid username and password during an authentication process, and then replay that packet at a later time to gain unauthorized access to a network or system

**Replay attacks can be prevented by using methods such as:**
- Timestamps: adding a timestamp to the packet to ensure that it can only be used for a limited time.
- Sequence numbers: assigning a unique number to each packet to prevent the replaying of a previously used packet.
- Cryptographic techniques: encrypting the packet to prevent the attacker from reading and replaying it.
### A man-in-the-middle (MITM) attack 
A man-in-the-middle (MITM) attack  is a type of cyber attack in which an attacker intercepts and alters communications between two parties without their knowledge or consent. by intercepting and manipulating the communication between the two parties, the attacker can steal sensitive information, inject malware, or perform other malicious actions. In a MITM attack, the attacker can intercept the communication by either physically accessing the network or by using various techniques such as IP spoofing, DNS spoofing. Remember that protocols such as IP is not secure, it's in the other layers the security is provided, like in the application layer where you would use a secure form of HTTP (HTTPS). 

Once the attacker has intercepted the communication, they can use various techniques to manipulate it, such as:
- Eavesdropping: the attacker can read and record the intercepted communication
- Modifying: the attacker can alter the intercepted communication to inject malware or steal sensitive information
- Injecting: the attacker can inject new communication into the intercepted communication to trick the parties into revealing sensitive information.

Packet sniffers like wireshark could be used and if the communication is on a non-encrypted channel (using HTTP instead of HTTPS) one could see all packets being send, which could contain all sorts of information, such as passwords. 

**MITM attacks can be prevented by using methods such as:**
- Encryption: encrypting the communication can prevent the attacker from reading and altering it
- Authentication: using strong authentication methods can prevent the attacker from impersonating one of the parties
- Network segmentation: segmenting the network and limiting the scope of the attack can prevent the attacker from accessing sensitive information.
### Encryption
Encryption is a technique that can be used to make a protocol more secure by protecting the confidentiality and integrity of the data being transmitted. There are several types of encryption that can be used, each with their own strengths and weaknesses. Some of the main types of encryption include:

*Symmetric encryption:* This type of encryption involves using a shared secret key to encrypt and decrypt the data. The same key is used to encrypt the data before it is transmitted and decrypt it upon receipt. Examples of symmetric encryption algorithms include AES, DES, and Blowfish.

*Asymmetric encryption:* This type of encryption involves using a public and private key pair to encrypt and decrypt the data. The public key is used to encrypt the data, while the private key is used to decrypt it. Examples of asymmetric encryption algorithms include RSA, Diffie-Hellman, and Elliptic Curve Cryptography (ECC).

*Hash functions:* This type of encryption is not used to encrypt the data but to ensure integrity of the data by creating a unique digital signature. When a message is hashed it produces a fixed-length output that will change if the original data is changed. Examples of hash functions are SHA-256, SHA-3 and MD5

*Stream ciphers:* This type of encryption uses a pseudorandom stream of data, also known as a keystream, to encrypt the data. Examples of stream ciphers are RC4 and Salsa20

**Summary:**
Encryption is a technique that can be used to make a protocol more secure by protecting the confidentiality and integrity of the data being transmitted. There are different types of encryption that can be used, such as symmetric encryption, asymmetric encryption, hash functions and stream ciphers each with their own strengths and weaknesses. It's important to choose the right encryption algorithm and its implementation to ensure the best security for the specific use case.
### Keys in networking
There are several different types of keys that can be used in a network, and their specific functions can vary depending on the context and the type of network being used. However,
some common types of keys used in networks include:

*Encryption keys:* These keys are used to encrypt and decrypt data as it is transmitted over a network. They can be used to secure data from unauthorized access, such as by encrypting login credentials or other sensitive information.

*Authentication keys:* These keys are used to authenticate devices or users on a network. They can be used to ensure that only authorized devices or users can access the network or
specific resources on the network.

*Session keys:* These keys are used to establish and maintain a secure session between devices or users on a network. They can be used to encrypt and decrypt data for a specific session, and are typically discarded or changed after the session is completed.

*Key management keys:* These keys are used to manage and distribute other types of keys on a network. They can be used to encrypt and decrypt keys for distribution, or to authenticate devices or users that are requesting keys.

*Digital signature keys:* These keys are used to create and verify digital signatures. They can be used to ensure the authenticity and integrity of data transmitted over a network. 

It's worth noting that depending on the type of network, protocols, and security standards the keys may be used in different ways, and some may not be necessary in some cases.

### Cryptographic and non-cryptographic hash function
**Non-cryptographic hash function:**
If a hash function is non-cryptographic, it means that it is fairly simple to reverse engineer the hash. It can be used only to check integrity of a message, since we can send a hash of the contents along the message, so the receiver can check if the message is altered(by purpose or error) (checksum)
**Cryptographic hash function:**
Is very hard to be reverse engineered. And can then be used to send secret data.

A cryptographic hash function has several properties that are different or stronger than those of a regular hash function. These properties are needed to make the cryptographic hash function suitable for use in various cryptographic applications such as digital signature, message authentication code (MAC) and password hashing.

*Collision-Resistance:* It should be computationally infeasible to find two different input messages that produce the same output hash value, also known as a "collision".

*Preimage-Resistance:* Given an output hash value, it should be computationally infeasible to find any input message that would produce that output hash value, also known as a "preimage".

*Puzzle-friendliness:* It should be computationally hard to find any two input messages that have a difference of only one bit and produce very different output hash values.

*Hiding property:* It should be computationally infeasible to determine anything about the input message by looking at its output hash value.

*Avalanche effect:* A small change in the input message should cause a significant change in the output hash value.

*Second preimage resistance:* Given an input message, it should be
computationally infeasible to find a different input message that will produce the same output hash value.

*Computational efficiency:* The hash function should be computationally efficient, meaning it should be able to process large input messages quickly.

*Deterministic:* The output hash value should be deterministic, meaning that the same input message will always produce the same output hash value.

These properties are needed to protect the integrity and confidentiality of the data in various cryptographic applications, and to make it difficult for an attacker to find any weaknesses in
the hash function.