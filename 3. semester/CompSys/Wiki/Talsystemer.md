---
date: 07-08-23
day: man
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
# Baser til base 10
$$d_n\cdot b^n+d_{n-1}\cdot b^{n-1}+...d_0\cdot b^{0}=base10~~num$$
her er d digit, b er basen. 

Her er d1 = 2, d0 = 1. tallet er 24601. 
Basen er 10, så b = 10.
$$2 \cdot 10^4 + 4 \cdot 10^3 + 6 \cdot 10^2 + 0 \cdot 10^1 + 1 * 10^0$$

## Binært til base 10 
$$
\sum_{i=0}^{n-1}\left(d_i\right) * 2^i
$$
0b100 i base 10:
$$1\cdot 2^{2}+0\cdot2^{1}+0\cdot2^0=4$$
$0b100=4$
`in binary, an odd number always ends with a one`
# Division method - base 10 til base 2
Bruger division method til at gøre 536 til binært

|Division by 2|Remainder|
|---|---|
|536 / 2 = 268|0|
|268 / 2 = 134|0|
|134 / 2 = 67|0|
|67 / 2 = 33|1|
|33 / 2 = 16|1|
|16 / 2 = 8|0|
|8 / 2 = 4|0|
|4 / 2 = 2|0|
|2 / 2 = 1|0|
|1 / 2 = 0|1|
536 = _0b1000011000_.
	# Notation
- Binary (Base 2): leading 0b
- Octal (Base 8): leading 0o
- Decimal (Base 10): leading nothing (this is what we use in everyday life!)
- Hexadecimal (Base 16): leading 0x
# Hexadecimal
0x A 9 F C = 0b 1010 1001 1111 1100
## Hex til decimal
0xFF
her er F = 15
$$15\cdot 16^{1}+15\cdot 16^{0}=15\cdot16+15=240+15=255$$
## Dec til hex
brug divisions metode
4156 i hex: 

| Division by 16  | Remainder | Hex |
| --------------- | --------- | --- |
| 4156 / 16 = 259 | 12        | C   |
| 259 / 16 = 16   | 3         | 3   |
| 16 / 16 = 1     | 0         | 0   |
| 1 / 16 = 0      | 1         | 1   |
0x103C


![[Pasted image 20220915102133.png]]

# Addition med binære tal
- `1 + 0 = 1`
- `1 + 1 = 10`
- `1 + 1 + 1 = 11`

![|300](https://i.imgur.com/BCvSPIs.png)
# Subtraktion
- `1 - 0 = 1`
- `10 - 1 = 1`
- `11 - 1 = 10`

|Decimal|Binary|
|---|---|
|8 - 1 = 7|1000 - 1 = 111|
|7 - 1 = 6|111 - 1 = 110|
|6 - 1 = 5|110 - 1 = 101|
|5 - 1 = 4|101 - 1 = 100|
![|200](https://i.imgur.com/YCiyl4u.png)
`1000110100`
   `11010111`
