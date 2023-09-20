---
date: 10-09-23
day: søn
week: 37
year: 2023
type: Reading
course: CompSys
status: 
semester: 2
tags:
Summary: ""
---
##### Weekly note
[[Uge 37 - 2023]]

# Procedures (functions)
Similarly, in the execution of a procedure, the program must follow these six steps: 
1. Put parameters in a place where the procedure can access them. 
2. Transfer control to the procedure. 
3. Acquire the storage resources needed for the procedure. 
4. Perform the desired task. 
5. Put the result value in a place where the calling program can access it. 
6. Return control to the point of origin, since a procedure can be called from several points in a program. 

Registers are the fastest place to hold data in a computer, so we want to use them as much as possible. RISC-V software follows the following convention for procedure calling in allocating its 32 registers: x10–x17: eight parameter registers in which to pass parameters or return values. x1: one return address register to return to the point of origin.

```ad-note
title: jump-and-link instruction (jal)
An instruction that branches to an address and simultaneously saves the address of the following instruction in a register (usually x1 in RISC-V).

`jal x1, ProcedureAddress // jump to ProcedureAddress and write return address to x1`
```
This “link,” stored in register x1, is called the return address. The return address is needed because the same procedure could be called from several parts of the program

The jump-and-link register instruction branches to the address stored in register x1—which is just what we want. Thus, the calling program, or caller, puts the parameter values in x10–x17 and uses jal x1, X to branch to procedure X (sometimes named the callee). The callee then performs the calculations, places the results in the same parameter registers, and returns control to the caller using jalr x0, 0(x1).

Implicit in the stored-program idea is the need to have a register to hold the address of the current instruction being executed. For historical reasons, this register is almost always called the program counter, abbreviated PC in the RISC-V architecture, although a more sensible name would have been instruction address register


any registers needed by the caller must be restored to the values that they contained before the procedure was invoked. This situation is an example in which we need to spill registers to memory

The ideal data structure for spilling registers is a stack—a last-in first-out queue. A stack needs a pointer to the most recently allocated address in the stack to show where the next procedure should place the registers to be spilled or where old register values are found. In RISC-V, the stack pointer is register x2, also known by the name `sp`. The stack pointer is adjusted by one doubleword for each register that is saved or restored.
![|300](https://i.imgur.com/k3opmLU.png)
![|300](https://i.imgur.com/JJZ3yjd.png)
![|300](https://i.imgur.com/DxKbqoW.png)
RISC-V software separates 19 of the registers into two groups: x5−x7 and x28−x31: temporary registers that are not preserved by the callee (called procedure) on a procedure call x8−x9 and x18−x27: saved registers that must be preserved on a procedure call (if used, the callee saves and restores them) This simple convention reduces register spilling. In the example above, since the caller does not expect registers x5 and x6 to be preserved across a procedure call, we can drop two stores and two loads from the code. We still must save and restore x20, since the callee must assume that the caller needs its value.

![](https://i.imgur.com/630Ux4W.png)

The frame pointer (fp or x8) points to the first doubleword of the frame, often a saved argument register, and the stack pointer (sp) points to the top of the stack. The stack is adjusted to make room for all the saved registers and any memory-resident local variables. Since the stack pointer may change during program execution, it’s easier for programmers to reference variables via the stable frame pointer, although it could be done just with the stack pointer and a little address arithmetic. If there are no local variables on the stack within a procedure, the compiler will save time by not setting and restoring the frame pointer. When a frame pointer is used, it is initialized using the address in sp on a call, and sp is restored using fp.
![](https://i.imgur.com/eso2aQ6.png)


![](https://i.imgur.com/qMyq3YL.png)

# Arithmetic for Computers
## Addition 
hvert tal bliver lagt sammen, bit by bit, hvis der er 2 1'ere bliver det carried over til næste bit
![|200](https://i.imgur.com/9dkeH1I.png)

## Subtraktion
![|300](https://i.imgur.com/iRrlRe7.png)

### overflow
![|300](https://i.imgur.com/WoBkJP5.png)

# C
The length of an array A is (sizeof A)/(sizeof A[0])

Don’t use the sizeof operator on array parameters to functions