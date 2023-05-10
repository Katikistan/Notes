---
date: 10-05-23
day: ons
week: 19
year: 2023
type: Lecture
course: LinAlgDat
status: undefined
semester: 2
tags:
Summary: ""
---
##### Weekly note
[[Uge 19 - 2023]]

# Koordinater 
**Definition $3.7 \mathrm{og}$ Theorem 3.8 (Koordinater)**
Lad $\mathcal{B}=\left\{\mathbf{b}_1, \ldots, \mathbf{b}_k\right\}$ være en (ordnet) basis for et underrum $\mathcal{U} \subseteq \mathbb{R}^n$ Til hvert $\mathbf{v} \in \mathcal{U}$ findes entydigt bestemte tal $x_1, \ldots, x_k \in \mathbb{R}$ så
$$
\mathbf{v}=x_1 \mathbf{b}_1+\cdots+x_k \mathbf{b}_k .
$$
Vektoren med disse tal kaldes koordinaterne for $\mathbf{v}$ mht. basen $\mathcal{B}$ :
$$
[\mathbf{v}]_{\mathcal{B}}=\left(\begin{array}{c}
x_1 \\
\vdots \\
x_k
\end{array}\right)
$$
hvis jeg vil tjekke om det er en base, kan man nøjes at tjekke om basis vektorer er linært uafhængig, hvis man kender dimensionen. Her kan man tjekke at der ikke er fri variabler ved gauss jordan. 
![](https://i.imgur.com/6AcIa85.png)
## Basisskift
(dimensionen er antal af vektor i en base, hvis dimensionen er 2, så vil alle baser have 2 vektorer: den basis jeg har og skifter til har samme mængde af basis vektorer)

**§3.2.5 (Basisskift matricen)**
Lad der være givet to forskellige (ordnede) baser,
$$
\mathcal{B}=\left\{\mathbf{b}_1, \ldots, \mathbf{b}_k\right\} \quad \text { og } \mathcal{C}=\left\{\mathbf{c}_1, \ldots, \mathbf{c}_k\right\}
$$
for et og samme underrum $\mathcal{U} \subseteq \mathbb{R}^n$. Basisskift matricen fra $\mathcal{C}$ til $\mathcal{B}$ er, med notation fra (7.32), defineret ved
$$
\mathbf{P}_{\mathcal{B} \leftarrow \mathcal{C}}:=\left(\left[\mathbf{c}_1\right]_{\mathcal{B}}|\cdots|\left[\mathbf{c}_k\right]_{\mathcal{B}}\right)
$$
og den opfylder (oversætter matrix oversætter fra C koordianter til B koordianter):
$$
[\mathbf{v}]_{\mathcal{B}}=\mathbf{P}_{\mathcal{B} \leftarrow \mathcal{C}}[\mathbf{v}]_{\mathcal{C}} \quad \text { for alle } \quad \mathbf{v} \in \mathcal{U} .
$$
![|300](https://i.imgur.com/HgttDo7.png)
![|300](https://i.imgur.com/6xYJbsI.png)
Her er b2erne på anden række i P(oversætter matricen), se at ligningsystemets 2. kolone er p matricens 2. række. 
![|300](https://i.imgur.com/Hl0zjZD.png)
**Den inverse til basisskift matricen**
Lad der være givet to forskellige (ordnede) baser,
$$
\mathcal{B}=\left\{\mathbf{b}_1, \ldots, \mathbf{b}_k\right\} \quad \text { og } \mathcal{C}=\left\{\mathbf{c}_1, \ldots, \mathbf{c}_k\right\}
$$
for et og samme underrum $\mathcal{U} \subseteq \mathbb{R}^n$. Basisskift matricen $\mathbf{P}_{\mathcal{B} \leftarrow \mathcal{C}}$ er invertibel og om dens inverse gælder
$$
\left(\mathbf{P}_{\mathcal{B} \leftarrow \mathcal{C}}\right)^{-1}=\mathbf{P}_{\mathcal{C} \leftarrow \mathcal{B}}
$$
![](https://i.imgur.com/95neZwh.png)
i en 2x2 matrix kan man hurtigt finde inverse med [[determinant]], man vender 1,1 og 2,2 og skifter fortegn på 2,1 og 1,2 
# Nulrum
**Definition 3.9 (Nulrum)**
Lad $\mathbf{A}$ være en $m \times n$ matrix. Nulrummet (null space) af $\mathbf{A}$ er
$$
\text { null } \mathbf{A}=\left\{\mathbf{x} \in \mathbb{R}^n \mid \mathbf{A x}=\mathbf{0}\right\} .
$$
Faktum. For en $m \times n$ matrix $\mathbf{A}$ er null $\mathbf{A}$ er et underrum af $\mathbb{R}^n$ idet
- $0 \in$ null $\mathbf{A}$ idet $\mathbf{A 0}=\mathbf{0}$.
- Hvis $\mathbf{x}, \mathbf{y} \in$ null $\mathbf{A}$ da er $\mathbf{x}+\mathbf{y} \in$ null $\mathbf{A}$ idet $\mathbf{A}(\mathbf{x}+\mathbf{y})=\mathbf{A x}+\mathbf{A} \mathbf{y}$.
- Hvis $s \in \mathbb{R}$ og $\mathbf{x} \in$ null $\mathbf{A}$ da er $s \mathbf{x} \in$ null $\mathbf{A}$ idet $\mathbf{A}(s \mathbf{x})=s \mathbf{A} \mathbf{x}$.

hvor mange ligninger giver 0
# Søjlerum
# Rækkerum
# Linære transformationer 
# Opgaver
![[LinAlgDat - Lecture ons - 19 10-05-23 09.17.53.excalidraw]]
![[LinAlgDat - Lecture ons - 19 10-05-23 09.51.12.excalidraw]]