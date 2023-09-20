---
date: 05-09-23
day: tir
week: 36
year: 2023
type: Wiki
course: CompSys
status: open
semester: 2
tags:
Summary: ""
---
##### Weekly note
[[Uge 36 - 2023]]

The following sequence of instructions adds the four variables: 
add a, b, c // The sum of b and c is placed in a 
add a, a, d // The sum of b, c, and d is now in a 
add a, a, e // The sum of b, c, d, and e is now in a


![](https://i.imgur.com/U4Ouhlz.png)


A byte is eight bits, a word is **2 bytes (16 bits)**, a doubleword is 4 bytes (32 bits)

Unsigned Integers (often called "uints") are **just like integers (whole numbers) but have the property that they don't have a + or - sign associated with them**. Thus they are always non-negative (zero or positive).

![](https://i.imgur.com/7B1kse1.png)

![](https://i.imgur.com/5jlUR7T.png)

The changed addresses are highlighted to contrast with Figure 2.2. Since RISC-V addresses each byte, doubleword addresses are multiples of 8: there are 8 bytes in a doubleword.

![](https://i.imgur.com/JxJRuYJ.png)

Computers divide into those that use the address of the leftmost or “big end” byte as the doubleword address versus those that use the rightmost or “little end” byte. RISC-V belongs to the latter camp, referred to as little-endian. Since the order matters only if you access the identical data both as a doubleword and as eight individual bytes, few need to be aware of the “endianness.” Byte addressing also affects the array index. To get the proper byte address in the code above, the offset to be added to the base register x22 must be 8×8, or 64, so that the load address will select A[8] and not A[8/8].

least significant bit: The rightmost bit in an RISC-V doubleword.

most significant bit: The leftmost bit in an RISC-V doubleword.
![](https://i.imgur.com/zOle0Vr.png)
![](https://i.imgur.com/Tl1p4Va.png)

## Conditionals
![|200](https://i.imgur.com/KhUt3JN.png)
branch if x1 is less than x2 and goto branch L0
else it will not jump and continue, then it will jump to L1 else it would go into branch L0
![|200](https://i.imgur.com/wr4z8ws.png)
blt : branch less than 


![](https://i.imgur.com/ARf3k5k.png)
PC is program counter
## Loop
![](https://i.imgur.com/h9Z4B24.png)

![](https://i.imgur.com/PQ0tdis.png)

- **Branch/jump instructions move the instruction pointer**
- **Instructions operate on data stored in registers.**
- **Load/store instructions ferry data between registers and byte-addressed memory**