---
date: 29-04-23
day: lør
week: 17
year: 2023
type: Wiki
course: LinAlgDat
status: open
semester: 2
tags:
Summary: ""
---
##### Weekly note
[[Uge 17 - 2023]]
# Linær funktion
En linær funktion er en funktion der kan skrives op på følgende måde:
$a_{1}x_1+a_{2}x_2+...a_{n}x_n=b$
ingen fancy med med $x_{1}\cdot x_{2}$
# Linære systemer
$2x_{1}+3x_2=7$
$5x_1+2x_2=1$ 
for at løse dette set af  ligninger kunne man bruge subsitutions metoden, men istedet kan man bruge lige store koefficenters metode. 
i overstående ligningsystem kan man gange med 5 i øverste ligning og 2 i nederste. så bliver koeficenten foran $x_1$ 10 i begge ligninger. Dernæst kan jeg trække øverste ligning fra nederste og få en ligning uden $x_1$. det kan bruges til at få et udtryk for $x_2$ som så kan sættes ind i første ligning og på den måde kan man få $x_{1}$ også:
#### Fremgangsmåde: 
ganger med 5 og 2:
$10x_{1}+15x_2=45$
$10x_1+4x_2=2$ 
Trække øverste ligning fra nederste:
$10x_{1}+15x_2=45$
$0x_1-11x_2=-33$ 
dividere nederste ligning med -11
$10x_{1}+15x_2=45$
$0x_1+1x_2=3$ 
$x_2=3$
nu trækker jeg nederste ligning 15 gange fra øverste ligning og dividere med 10 og på den måde får jeg et svar
$1x_{1}+0x_2=-1$
$0x_1+1x_2=3$ 
x1 = -1, x2 = 3.
## total matrix
skrive det op som en koefficent matrice og en total matrix. (eng: adjacency matrix): 
$\begin{bmatrix}2 & 3 & 7 \\ 5 & 2 & 1\end{bmatrix}$
her er kolone 1 og 2 koefficenter og kolone 3 er resultatet fra ligningen. udfører samme operationer som foroven. 

Et linært system kan enten have 1 løsning, uendligt mange løsninger eller ingen løsninger. hvis der er ingen løsninger er systemet inkonsitent, hvis der er 1 eller flere løsninger det konsistent. 
# Løsning af ligningsystemer
For at løse et ligningsystem vil man finde ud af om systemet  er inkonsitent. Det er gør man ved at bringe det på række eachelon form
## Rækkeoperationer
### foward elemination (replacement)
### back substitution (replacement)
### Interchange
### scaling
## Pivot 
## frie variabaler
## inconsistente ligningsystemer
## Gauss og Gauss jordan
### backward elemination
## nul rækker
## rank
## column space
## linearly ()dependent
## Homogent
# Elementære række operationer 
# Eachelon form, række eachalon og rank
flere måder at komme frem til eachlon form
# Applikationer 
## Linære modeller
## Generelle netværk
# 3brow1blue intution
# Opsummering
