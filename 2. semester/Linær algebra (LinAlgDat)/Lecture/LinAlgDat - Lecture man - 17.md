---
date: 24-04-23
day: man
week: 17
year: 2023
type: Lecture
course: LinAlgDat
status: undefined
semester: 2
tags:
Summary: ""
---
##### Weekly note
[[Uge 17 - 2023]]
# Link matrice
![[Pasted image 20230424130800.png]]
![](https://i.imgur.com/FSdY1Oh.png)
i a er 1/3 hvor mange links der udgår fra 1
der udgår 2 links fra 2, det er i 2. række
# TotalMatrix 
En koeffecient matrix plus højre siden af ligningerne. A er en koeficent matrix, [A|b] er en totalmatrix
![](https://i.imgur.com/YpllWjZ.png)

## Løsning af ligningsystem (har uendeligt mange)

![](https://i.imgur.com/NfRsOx2.png)
# Elementære rækkeoperationer
![](https://i.imgur.com/vGMfcyv.png)
![](https://i.imgur.com/WKkq1Ny.png)
## Find skæring mellem 2 linjer 
![](https://i.imgur.com/uADq382.png)
## Skæring mellem to planer
![](https://i.imgur.com/QvJ10cG.png)

# Forward reduction
![](https://i.imgur.com/5w8U6rL.png)
![](https://i.imgur.com/45ip29m.png)
# Rækkeechelonform
![](https://i.imgur.com/Qum25zb.png)
$\begin{bmatrix}1 & 2 & 3 & 4 \\ 0 & 2 & 3 & 4 \\ 0  & 0 & 3 & 4 \\ 0 & 0 & 0 & 4 \\ 0 & 0 & 0 & 0\end{bmatrix}$
Her er nul rækken i bunden, det første element forskelligt fra nul i række 1 er i kolone 1.  i række 2 er det første ikke nul element til højre for første ikke nul element i række 1. man ender man at få en upper triangular form
![](https://i.imgur.com/jzPBlOO.png)
Første ikke nul element gøres til 1 med scaling. 
![](https://i.imgur.com/WGllYH1.png)

alle tal nedenunder et pivot element er 0  og pivot element er = 1
![](https://i.imgur.com/Jc00Ek3.png)
bemærk at her at pivot element i række 2 er i kolone 2, men række 3 kolone 3 er også nul selvom tallet over ikke er et pivotelement. 
![](https://i.imgur.com/MkRqaKv.png)
