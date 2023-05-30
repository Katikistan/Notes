---
date: 24-05-23
day: ons
week: 21
year: 2023
type: Wiki
course: LinAlgDat
status: open
semester: 2
tags:
Summary: ""
---
##### Weekly note
[[Uge 21 - 2023]]

# Determinant
![](https://i.imgur.com/ki5Em6u.png)
![](https://i.imgur.com/Q8sxxo6.png)
![](https://i.imgur.com/rnL9pao.png)

Det er det arealet af paralellogrammet der uspændes fra vektorne i matricen. 

hvis determinanten er 0 er der ingen invertibel fordi at transformation presser vektorne der bliver transformeret ned i en lavere dimension
# 2x2
![](https://i.imgur.com/rAXbFEm.png)
![](https://i.imgur.com/x5QkYvS.png)

**HUSK:**
$$det\begin{bmatrix}a & b \\ c & d\end{bmatrix}=ad-bc$$
# 3x3 og op
![](https://i.imgur.com/ILE1Dju.png)
udvikel determinant fra første søjle:

dæk første række og første søjle, det giver en 2x2 matrice, udregn determinanten og gang det med elementet i første række første søjle. 

Dæk første søjle og anden række, det giver en 2x2 matrice, udregn determinanten og gang med 2. række, 1. søjle element. 

Sidst dæk første søjle og 3. række, det giver 2x2 matrix, udregn determinant, gang med 3. række, 1 søjle elm. 
# Brug gauss
Når en matrice er på øvre trekantsform kan man gange diagonalen sammen og få determinanten
![](https://i.imgur.com/MVX4Zjc.png)
![](https://i.imgur.com/XoxC4gS.png)
# Cramers formel
![](https://i.imgur.com/EL3nk7j.png)
![|400](https://i.imgur.com/dvBU1Eo.png)
ja gange den inverse på begge sider for at isolerer x i ligningen Ax=b.

