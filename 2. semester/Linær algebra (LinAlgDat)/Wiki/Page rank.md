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

# Link matrice
Her ser man en lin matrice de repræsenter forbindelser mellem sider. Her kan man se på rækken (på langs) <-> at række 1(side 1) linker til 2 sider: side 2 og 4, a har 2 udegående links. Man kan se hvor mange indegående links (hvem linker til side 1) på kolone 1. Her kan man se at side 3 og 4 linker til 1. 
$$N= \begin{bmatrix}0 & 1 & 0 & 1 \\ 0 & 0 & 0 & 1 \\ 1 & 1 & 0 & 1 \\ 1 & 0 & 1 & 0\end{bmatrix}$$
denne matrice kan skrives på op som en linkmatrice: side 1 linker til 2 sider, vi skriver så på kolonen for side 1 at linket 2 udgør halvdelen af de sider side 1 linker til, link 4 også. I linkmatricen er rækken hvor mange der linker til en side og kolonen, hvilke side der linker til. I eksempel: første række, side 3 og 4 linker til side 1, linket til side 1 udgør 1/3 a links til fra side 3 og halvdelen af links fra side 4.
)
$$\begin{bmatrix}0 & 0 & 1/3 & 1/2  \\ 1/2 & 0 & 1/2 & 0 \\ 0 & 0 & 0 & 1 \\ 1/3 & 1/3 & 1/3 & 0 \end{bmatrix}$$
på diagonalen er der nul fordi siderne her ikke linker til sig selv. kun en side linker til 3 det er 4.

### repræsentation
man kunne også sætte det op som en orinteret graf