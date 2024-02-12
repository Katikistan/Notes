Before you start it's vital that you read the provided information in the question, furthermore here are some things that are important to remember before trying to solve this type of problem:

The assignment provides a Heap which individual rows, rows can be headers, footers or payload. The heap grows from bottom up (unless text says the upiside, it won't, but..), the first row of the heap is therefore at the bottom:
![[Pasted image 20240113142357.png|]]
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
![[Pasted image 20240113142314.png|]]
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
![[Pasted image 20240113142159.png|]]
Sometimes things dont line up so nicely, as metioned all blocks must be multiples of 8, what if we want to malloc or realloc 12 bytes: then we have to round up the nearest multiple of 8 which is 16, we wanted to alloc 12, but end up allocing 16 instead, we end up using 16+8=24 bytes in the heap because we also need 4+4 bytes for the header and footer. this is what is known as internal fragmentation. 

**example from exam 20/21**
we want have freed some memory (blue) and want to realloc 12 bytes (red)
![[Pasted image 20240112234806.png]]
We have to take 16(realloc) + 4(header) + 4(footer) = 24 bytes, which is 6 rows (each row has size 4). the black is the remaning free space, but since there is a block above the free space, it would mean we would get a block with size 2 * 4 = 8, however the exam test specifies that "we must never create blocks with 0 payload", this means we must not have a block thats only a header and footer, therefore we also need to take the remaing free space when realloc
![[Pasted image 20240112235041.png]]Therefore:
![[Pasted image 20240112235706.png]]
Therefore we get a block that is 16 + 16 big, we remember that the old footer (0x13) and header (0x12) dont change since the 2 blocks merge into 1 due to immediate coalesing
![[Pasted image 20240112235808.png]]
