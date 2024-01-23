
def info(x):
    if(isinstance(x,int)):
        is_allocated = bool(x & 1)
        previous_allocated = bool((x & 2) >> 1)
        block_size = x & 0xFFFFFFF8
        print("current block is allocated:", is_allocated)
        print("previous block is allocated:", previous_allocated)
        print("current block size:", block_size)
        print("block uses this amount of rows:", block_size // 4)
    else:
        print("non int type provided")



