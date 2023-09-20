---
date: 13-09-23
day: ons
week: 37
year: 2023
type: Wiki
course: CompSys
status: open
semester: 2
tags:
Summary: ""
---
##### Weekly note
[[Uge 37 - 2023]]

# Long division algorithm
kan omregne floats til binært:
ex: 63,25
deler tallet op 63 og 25
dernæst tager jeg heltallet og skriver i tabellen og udregner (r er remainder)

| x   | x/2 | r   |
| --- | --- | --- |
| 63  | 31  | 1   |
| 31  | 15  | 1   |
| 15  | 7   | 1   |
| 7   | 3   | 1   |
| 3   | 1   | 1   |
| 1   | 0   | 1   |

vi stopper når x/2=0

hvis $x \cdot 2  >= 1$, så sæt 1 i r 
og så bliver $x = x_{-1}  \cdot 2 - 1$

| x   | x * 2 | r   |
| --- | --- | --- |
| 0,25  | 0,5  | 1   |
| 0,5  | 1  | 1   |
| 0 | 0   | 0  |

