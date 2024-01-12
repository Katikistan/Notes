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
WTF!!