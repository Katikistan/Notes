---
date: 10-08-23
day: tor
week: 32
year: 2023
type: Wiki
course: CompSys
status: open
semester: 2
tags:
Summary: ""
---
##### Weekly note
[[Uge 32 - 2023]]


Some ALU functions:
  - Addition & subtraction
  - Determining equality
  - AND/OR/XOR/NOR/NOT/NAND logic gates and more!
# OPCODE

| Mnemonic | OPCODE | Layman’s Definition                                                          | Formal Definition              |
| -------- | ------ | ---------------------------------------------------------------------------- | ------------------------------ |
| ADD      | 000001 | Loads two numbers from registers and  <br>saves result into another register | rs_reg <- op_reg_1 + op_reg_2  |
| LOAD     | 000010 | Loads a number from a memory address  <br>location into a register           | rs_reg <- mem[op_reg_1_addr]   |
| STORE    | 000011 | Copies data in a register to a  <br>memory address for long-term storage     | mem[op_reg_1_addr] <- op_reg_2 |
![|200](https://i.imgur.com/2AktrpH.png)
# Mips Instructions
Types of instructions in MIPS
- _R-Type_ or _Register_ MIPS instructions are used for most arithmetic and logic operations
- _I-Type_ or _Immediate_ instructions are used primarily for data transfer and immediate operations using constants
- _J-Type_ or _Jump_ instructions are used to jump the program to the specific instruction, such as in a loop

| Abbreviation | Definition                          |
| ------------ | ----------------------------------- |
| `op`         | OPCODE                              |
| `rs`         | first source register               |
| `rt`         | second source register              |
| `rd`         | destination register                |
| `shamt`      | bit shift amount                    |
| `func`       | extra bits for additional functions |
|              |                                     |

# R type instructions
All R-type instructions have an `op` of ‘000000’ which signifies to the processor to look at the `func` bits to determine which process to execute.

The three references to registers, (`rs`, `rt`, `rd`) directly call them by number. There are 32 registers in a MIPS system and the five bits will produce 32 numbers (0 as `00000` to 31 as `11111`). The first two (`rs` & `rt`) are the operands and the last (`rd) is where to store the result.

The shift amount is used to shift the number by the amount in the shift bits, for our purposes this will always be `00000`, meaning no shift. The last six bits are the function to be performed on the operands.

```
000000 00101 10010 00110 00000 100000  
op    rs    rt    rd   shamt  func
```
- op -> `000000` signifies an R-Type instruction
- rs -> `00101` gets contents in Register 5
- rt -> `10010` gets contents in Register 18
- rd -> `00110` sets the result in Register 6
- shamt -> `00000` means there is no shift
- func -> `100000` function signature for adding
Instruction sent from software (machine code) to hardware (CPU):
00000000101100100011000000100000

original numbers being added still remain in their location in the register. They will stay there until they are overwritten or power is turned off to the CPU. Registers are volatile memory.
