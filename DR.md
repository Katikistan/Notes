**1. Understanding the Heap Structure:**

- Rows in the heap can be headers, footers, or payload, with each row having a size of 4, each row has an address.
- Blocks are collections of rows with a header, footer, and optional payload (sometimes blocks must have payload meaning they must be bigger than 8, which is the size of a block with only a header and footer).
- The heap grows from bottom up.
- Block sizes must be multiples of 8.
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
- Ensure that the new block's header and footer are adjusted for the combined size, if 2 blocks have size 16, new size will be 32. alternatively count the amount of rows in each block (each row is 4 in size).
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