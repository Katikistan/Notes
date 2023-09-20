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

# MIPS
```
MULT $3, $2
multiplying the value stored in register `$2` by the value in register `$3`
```

Opcode: the term used for the first part of an Assembly instruction.
$: the symbol used in MIPs to address registers.
operand: the part of the Assembly instruction that gets operated on.

## Add
The addition calculation for example can be called using the `ADD` opcode which then takes three registers as operands, two registers to add together and another to store the answer in.

The addition function also has an `ADDI` command, which takes a register address and a constant to operate on and a register to store the answer in.

In the `ADD` function, the value in $5 is added to the value in $4 and stored in $6.
```
ADD $4, $5, $6
```
In the `ADDI` function, the constant 7 is added to the value in $4 and stored in $6

```
ADDI $4, $6, 7
```

Other common arithmetic operations include: `SUB`, `SUBI`, `MULT`, `MULTI`, `DIV`, and `DIVI`.