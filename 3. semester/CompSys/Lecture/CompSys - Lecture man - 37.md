---
date: 11-09-23
day: man
week: 37
year: 2023
type: Lecture
course: CompSys
status: 
semester: 2
tags:
Summary: ""
---
##### Weekly note
[[Uge 37 - 2023]]

# Jal & Jalr
Jump-and-Link jumps to an address and stores the call site address in the link register xi . 

Jump-and-Link-Register takes address from register value. 
- Used to return from procedure
# The stack 
rows from high address to low address. 
**To pop**: increment ``sp``.
**To push:** decrement ``sp``
# Leaf procedure that call no other procedures 
![|300](https://i.imgur.com/Jx82jPw.png)
![|300](https://i.imgur.com/04r2SB7.png)
# Writing to files in C
![|300](https://i.imgur.com/eGkD9mH.png)
![|300](https://i.imgur.com/EUBROAC.png)
![|300](https://i.imgur.com/b3KgpSL.png)
we depend on the endian of the byte values,  just rely on strings
![|350](https://i.imgur.com/bWu2ZkL.png)

# Reading shit in  >:C
![|300](https://i.imgur.com/iWkLUeo.png)
	![|300]( 
![|300](https://i.imgur.com/TxcMy32.png)
To the system there is no difference between text files and binary files! All files are just byte sequences. 

Colloquially: a text file is a filele that is understandable when the bytes are interpreted as characters (in ASCII or some other character set).

# Takeaways
- Use printf() for text output. (And scanf() for text input.) 
- Use fwrite() to write raw data. 
- Use fread() to read raw data. 
- Raw data files are more compact and faster to read/write