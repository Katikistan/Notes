---
date: 30-04-23
day: søn
week: 18
year: 2023
type: Reading
course: LinAlgDat
status: undefined
semester: 2
tags:
Summary: ""
---
##### Weekly note
[[Uge 18 - 2023]]

# Inverse
En kvadratisk matrice $n \times n$ A kaldes invertibel:  hvis der findes en matrice der opfylde følgende $AX=I_n$ og $XA=I_n$. $X$ er en invers a A, hvis der ikke findes X der opfylder overstående er matricen singulær. 

A i har en invers $A^{-1}$ hvis den ikke er singulær 

**OBS:** Matrix multiplikation er ikke Kommutativt derfor er det ikke altid gældende at $AX=I$ og $XA=I$, hvis det er tilfældet er $X$ en to-sidet invers. Ellers gælder:
Højre-invers: $AX=I$
Venstre-invers: $XA=I$

En unik højre invers er også en venstre invers: hvis A er en $n \times n$ matrix og der er en unik matrix X så at $AX = I_n$ så $XA=I$ og derfor $X=A^{-1}$	

Der findes kun 1 invers til en matrix A : $A^{-1}$ , hvis  X og Y er inverse matrixer af A: $Y=YI=Y(AX)=(YA)X=IX=X \rightarrow Y=X$
## Find inverse matrice
### Find ud af om A har en invers
Hvis rang A = n er der en invers 

en matrice A med rang A = n har fuldt rang hvis hver kolone er en [[|pivotkolone]] 

Matricer med fuldt rang er invertible. Når rang A < n er der ingen invers. 
#### Rang Mangelfuld (Rank deficient)
$$\begin{bmatrix}1 & 2 & 3 \\ 0 & 0 & 0 \\ 0 & 0 & 0\end{bmatrix}\begin{bmatrix}1 & 0 & 0 \\ -1 & 1 & 0 \\ -2 & 0 & 1\end{bmatrix}$$ Her Ser man at A har Rank 1, men n = 3 derfor er der ingen invers. 

### Find invers: Opskriv som $[A|I]$ 
For at finde en højre invers matrix $n \times n$ A, tag $A$ , $I_{n}$ og den inverse X Her ved vi følgende $AX=I$. Opskriv $[A|I]$ ved at løse ligningsystemet (dvs at bringe af på reduceret rækkechealon form) fås  $[I|X]$ og på den måde har man fået $X$. Man kan regne efter ved at Tage $AX=I$ hvis man har den række matrice skal A og X give I. 

Ved at gange den inverse matrix kan man "fjerne en matrice" eftersom den bliver til en identitets matrice, som når man ganger med en matrice bare giver matricen selv, det svare til at gange et tal med 1, derfor kan vi unlade at skrive ledet efter AX. 
#### Eksempel:
her bringes en matrice på reduceret række eachlon, matricen til højre er den inverse 
![[Pasted image 20230501085814.png]]
### Find invers: determinant metode
I en 2x2 matrice gives det at $A^{{-1}}=\frac{1}{det(A)}\begin{bmatrix}d & -b \\ -c & a\end{bmatrix}$
for en 3x3 matrice kan det være smartere at bruge [[#Find invers: Opskriv som $[A I]$|AI metode]]
## Rank og invertibilitet 
Inverse af 2x2 matricer og [[determinant]]. I $A=\begin{bmatrix}a & b \\ c & d\end{bmatrix}$
Vil $det(A)=ad-bc$. A har kun en invers hvis $det(A)\neq 0$
## Identitets matrix
$I_{n=3}\begin{bmatrix}1 & 0 & 0 \\ 0 & 1 & 0 \\ 0 & 0 & 1\end{bmatrix}$$I_{n=2}=\begin{bmatrix}1 & 0 \\ 0 & 1\end{bmatrix}$
Den kan ganges med en matrice eller vektor og give vektoren eller matricen igen. $AI=A$ 
```ad-info
Enhedsmatricen kan betragtes som "‘matricernes 1-tal"’: Ligesom man ikke ændrer en skalar ved at gange den med 1, ændrer man ikke en matrix ved at lave matrixproduktet af matricen med enhedsmatricen af samme type.
```
## Elementær matricer
En elementær matrice E er en rækkeoperation skrevet op som en matrice den kan ganges med en Matrice A og på den måde udfører man en rækkeoperation på A

en $m \times m$ matrix $E$ er elementær hvis dens resultat af at udføre en enkelt elementær rækkeoperation (ERO) på identietsmatricen $I_m$
$E_1=\begin{bmatrix}0 & 1 \\ 1 & 0\end{bmatrix}$ er række operation $r_{1}\leftrightarrow r_2$ på identietsmatrixen $I_m$
$E_2=\begin{bmatrix}1 & 0 & 0 \\ 0 & -5 & 0 \\ 0 & 0 & 2\end{bmatrix}$ er $-r_{2}\rightarrow r_2$ på identietsmatricen. 
så for at lave en elementær matrice $m\times m$ kan man udfører en række operation ($ERO_1$) på en $m\times m$ identitetsmatrice. resultatet af det ($E$) kan ganges ind på en matrice A og det vil svare til at udføre $ERO_1$ på matricen A
### Enhedsmatricen 
Enhedsmatricen er et andet ord for [[#Identitets matrix|identitets matrixen]].
![](https://i.imgur.com/CB9sYUZ.png)
Det gælder at der må være 
#### Bevis
Man kan forestille sig en anden matrix $D$, hvor samme sammenhænge var gældende, altså at $AD = DA = A$ for en vilkårlig matrix A. Denne vilkårlige matrix kunne være enhedsmatricen, og sammenfatter man så de to ligninger får man: $D = ED = DE = E. Da E = D$, findes der altså ikke andre matricer end enhedsmatricen $E$, der er et neutralt element for matrixproduktet.
## Inverse matricer til at løse ligningsystemer 
$Ax=b$
ved at gange inverse til a på begge sider får jeg $XAx=bX=x=bX$
