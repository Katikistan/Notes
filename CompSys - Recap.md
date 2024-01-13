# OS
**Processes**
- duplicate of parent, but with own address space (changes are not reflected)
- Child processes must be reaped, adopted but init process if termination of parent. 
- Processes that never terminates are “zombie children”
**Threads**
- run in same address as the calling process (changes are reflected)
- have own thread context: ID, SP, PC, general purpose registers, condition codes
- can access “critical memory” must be handled with semaphores (mutexes) and / or condition variables
## Virtual memory  
- split the address in its components VPO, VPN, and then split the VPN in index and tag
- bits of the VPO = log2(pageSize)
- bits of VPN = bit streng uden offset, så index og tag
- bits of set = log2(#sets) bits of VPN
- bits of Tag = rest of vpn

- look up in TLB with index and set
- if the tag exists AND the valid bit is set it is a hit, otherwise a miss.
- if no hit in TLB look in page table , with VPN
- if VPN exits AND the valid bit is set hit, otherwise page fault and a new page must be brought from memory
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
![[CompSys - Recap 12-01-24 21.28.04.excalidraw]]
Each row has a size of 4 

exam2022-23: "The minimum block size is 8"(all blocks most contain header and footer, therefore block size is at least $header\_size+footer\_size=4+4=8$), blocks must therefore be multiples of 8. Unless other is stated such as  "The minimum block size is 4" which would mean each row has a size of 2 (this will probably never occur).

A block is a collection of rows that have a header and footer and can also have some payload, that is between the header and footer row.

sometimes it will specified that a block must not be empty and must have some payload, which means a block must be bigger than 8.

Each row is tied to an address and has some hexadecimal value.

The header and footer contain information about the block they form and the block before it. the header and footer value will be the same. 

blocks are directly next to each other: when you find a footer of a block you know that the next row will be the header for the next block. 

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
![[CompSys - Recap 12-01-24 22.44.01.excalidraw]]
4. after you have mapped out the different blocks you can begin to perform some operations and fill out how these will affect the rows of the heap, you are supposed to fill out the new headers and footers of the heap. use the adress to find out which block is being affected by the operation. Using malloc, free or realloc will affect the whole block an the headers of the adjacent blocks. 

**Immediate coallesing:** 2 adjacent blocks will be merged into 1 block when one is free and the other either also becomes free or is allocated and overlap into the free block, that means if block 1 (bottom up) and block 2 both become free (maybe block 1 is already free and block 2 becomes free or otherway) block 1's new footer will be where block 2's footer was. and block 1's footer and block 2's header will stay the same and become part of the block payload, meaning they are junk that will be overwritten when the block is allocated. The new Header  (same location as block's 1 before) and footer (same location as block 2's footer before) must change it's value to account for the new size of the block and the fact that the block is free and take into account whether the previous block is free. 
![[CompSys - Recap 12-01-24 23.09.59.excalidraw]]
Sometimes things done line up so nicely, as metioned all blocks must be multiples of 8, what if we want to malloc or realloc 12 bytes: then we have to round up the nearest multiple of 8 which is 16, we wanted to alloc 12, but end up allocing 16 instead, we end up using 16+8=24 bytes in the heap because we also need 4+4 bytes for the header and footer. this is what is known as internal fragmentation. 

example from exam 20/21
we want have freed some memory (blue) and want to realloc 12 bytes (red)
![[Pasted image 20240112234806.png]]
We have to take 16(realloc) + 4(header) + 4(footer) = 24 bytes, which is 6 rows (each row has size 4). the black is the remaning free space, but since there is a block above the free space, it would mean we would get a block with size 2 * 4 = 8, however the exam test specifies that "we must never create blocks with 0 payload", this means we must not have a block thats only a header and footer, therefore we also need to take the remaing free space when realloc
![[Pasted image 20240112235041.png]]Therefore:
![[Pasted image 20240112235706.png]]
Therefore we get a block that is 16 + 16 big, we remember that the old footer (0x13) and header (0x12) dont change since the 2 blocks merge into 1 due to immediate coalesing
![[Pasted image 20240112235808.png]]

###  Example walktrough