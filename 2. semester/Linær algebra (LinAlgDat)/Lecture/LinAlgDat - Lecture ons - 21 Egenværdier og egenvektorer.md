---
date: 24-05-23
day: ons
week: 21
year: 2023
type: Lecture
course: LinAlgDat
status: undefined
semester: 2
tags:
Summary: "Egenværdier og egenvektorer og diagonalisering"
---
##### Weekly note
[[Uge 21 - 2023]]

# 
med determinater er den række og søjle linær
det betyder hvis at en søjle eller række er ganget med et tal må man trække det ud af matricen og det vil kun blive ganget på den søjle eller række:
$$
\begin{aligned}
& =\operatorname{det}\left(\begin{array}{ccc}
\lambda-1 & 1 & 2 \\
0 & \lambda+2 & \lambda+2 \\
1 & 1 & \lambda
\end{array}\right) \\
& =(\lambda+2) \operatorname{det}\left(\begin{array}{ccc}
\lambda-1 & 1 & 2 \\
0 & 1 & 1 \\
1 & 1 & \lambda
\end{array}\right)
\end{aligned}
$$
her kan man trække $\lambda$ + 2 ud af ligningen og den vil kun blive ganget ind på 2. række.
$$det\begin{bmatrix}5 & 0 & 0 \\ 0 & 7 & 0 \\ 0 & 0 & 9\end{bmatrix}$$
$$5\cdot det\begin{bmatrix}1 & 0 & 0 \\ 0 & 7 & 0 \\ 0 & 0 & 9\end{bmatrix}$$
$$7 \cdot 5\cdot det\begin{bmatrix}1 & 0 & 0 \\ 0 & 1 & 0 \\ 0 & 0 & 9\end{bmatrix}$$
$$9 \cdot 7 \cdot 5\cdot det\begin{bmatrix}1 & 0 & 0 \\ 0 & 1 & 0 \\ 0 & 0 & 1\end{bmatrix}$$
her bliver tal trukket ud og det er derfor determinaten på en diagonal matrice er produktet af diagonalen.