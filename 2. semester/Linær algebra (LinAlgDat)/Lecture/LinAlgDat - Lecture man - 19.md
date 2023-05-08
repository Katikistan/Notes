---
date: 08-05-23
day: man
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
# Underrum
**Definition 3.2 (Underrum)**
En delmængde $\mathcal{U} \subseteq \mathbb{R}^n$ kaldes et underrum såfremt:
- $\mathbf{0} \in \mathcal{U}$
- For alle $\mathbf{u}, \mathbf{v} \in \mathcal{U}$ gælder $\mathbf{u}+\mathbf{v} \in \mathcal{U}$
- For alle $s \in \mathbb{R}$ og $\mathbf{u} \in \mathcal{U}$ gælder $s \mathbf{u} \in \mathcal{U}$
![](https://i.imgur.com/5XmZ0Pg.png)
### eksempel 
Eksempel (Et underrum af $\mathbb{R}^4$ )
Følgende delmængde af $\mathbb{R}^4$ er et underrum:
$$
\mathcal{U}=\left\{\left(x_1, x_2, x_3, x_4\right) \in \mathbb{R}^4 \mid x_1+x_2=0 \text { og } x_2+x_3+x_4=0\right\}
$$
En måde at indse dette på er ved at bemærke, at
$$
\mathbf{x}=\left(\begin{array}{l}
x_1 \\
x_2 \\
x_3 \\
x_4
\end{array}\right) \in \mathcal{U} \Longleftrightarrow\left(\begin{array}{llll}
1 & 1 & 0 & 0 \\
0 & 1 & 1 & 1
\end{array}\right)\left(\begin{array}{l}
x_1 \\
x_2 \\
x_3 \\
x_4
\end{array}\right)=\left(\begin{array}{l}
0 \\
0
\end{array}\right) \Longleftrightarrow \mathbf{A x}=\mathbf{0}
$$
- Da $\mathbf{A} \mathbf{0}=\mathbf{0}$ gælder $\mathbf{0} \in \mathcal{U}$.
- Hvis $\mathbf{u}, \mathbf{v} \in \mathcal{U}$ gælder $\mathbf{A u}=\mathbf{0}$ og $\mathbf{A v}=\mathbf{0}$. Matrixregning giver
$$
\mathbf{A}(\mathbf{u}+\mathbf{v})=\mathbf{A u}+\mathbf{A} \mathbf{v}=\mathbf{0}+\mathbf{0}=\mathbf{0}
$$
og dermed gælder $\mathbf{u}+\mathbf{v} \in \mathcal{U}$.
- Lad $s \in \mathbb{R}$. Hvis $\mathbf{u} \in \mathcal{U}$ gælder $\mathbf{A u}=\mathbf{0}$. Matrixregning giver
$$
\mathrm{A}(s \mathbf{u})=s \mathbf{A u}=s \mathbf{0}=0,
$$
og dermed gælder su $\in \mathcal{U}$.
# Span
**Definition 3.3 (Span af vektorer)**
Lad $\mathcal{S}=\left\{\mathbf{v}_1, \ldots, \mathbf{v}_k\right\}$ være en mængde af vektorer i $\mathbb{R}^n$. Sæt $\operatorname{span} \mathcal{S}=\operatorname{span}\left\{\mathbf{v}_1, \ldots, \mathbf{v}_k\right\}:=\left\{x_1 \mathbf{v}_1+\cdots+x_k \mathbf{v}_k \mid x_1, \ldots, x_k \in \mathbb{R}\right\}$,
dvs. span $\mathcal{S}$ er mængden af alle linearkombinationer af $\mathbf{v}_1, \ldots, \mathbf{v}_k$. Man definerer $\operatorname{span} \emptyset=\{\mathbf{0}\}$.

Metode til at afgøre om en vektor tilhører et span
Lad $\mathbf{v}_1, \ldots, \mathbf{v}_k \in \mathbb{R}^n$ og sæt $\mathbf{A}=\left(\mathbf{v}_1|\cdots| \mathbf{v}_k\right)$. For en vektor $\mathbf{u} \in \mathbb{R}^n$ er følgende betingelser ækvivalente:
(i) $\mathbf{u}$ tilhører $\operatorname{span}\left\{\mathbf{v}_1, \ldots, \mathbf{v}_k\right\}$.
(ii) Ligningssystemet $\mathbf{A x}=\mathbf{u}$ har (mindst) en løsning.

**Theorem 3.2 (Span er et underrum)**
Lad $\mathcal{S}=\left\{\mathbf{v}_1, \ldots, \mathbf{v}_k\right\}$ være en mængde af vektorer i $\mathbb{R}^n$. Mængden $\operatorname{span} \mathcal{S}=\operatorname{span}\left\{\mathbf{v}_1, \ldots, \mathbf{v}_k\right\}$ er et underrrum af $\mathbb{R}^n$.
Definition 3.4
Lad $\mathcal{U}$ være et underrum af $\mathbb{R}^n$ og lad $\mathcal{S} \subseteq \mathcal{U}$ være en endelig delmængde. Man siger, at $\mathcal{S}$ udspænder $\mathcal{U}$ hvis span $\mathcal{S}=\mathcal{U}$.
# Linær uafhængig
**Definition 3.5 (Lineær (u)afhængighed)**
Et sæt $\mathcal{S}=\left\{\mathbf{v}_1, \ldots, \mathbf{v}_k\right\}$ af vektorer $\mathrm{i} \mathbb{R}^n$ kaldes lineært uafhængigt hvis den eneste løsning til ligningen
$$
x_1 \mathbf{v}_1+\cdots+x_k \mathbf{v}_k=\mathbf{0}
$$
er $x_1=\cdots=x_k=0$. I modsat fald kaldes $\mathcal{S}$ for lineært afhængigt.
![](https://i.imgur.com/DovvdvR.png)
![](https://i.imgur.com/vmhPV3b.png)
Metode til at afgøre linear (u)afhængighed
Lad $\mathbf{v}_1, \ldots, \mathbf{v}_k \in \mathbb{R}^n$ og sæt $\mathbf{A}=\left(\mathbf{v}_1|\cdots| \mathbf{v}_k\right.$ ) (en $n \times k$ matrix).
Da er følgende betingelser ækvivalente:
(i) Vektorerne $\mathbf{v}_1, \ldots, \mathbf{v}_k$ er lineært uafhængige.
(ii) Ligningssystemet $\mathbf{A x}=\mathbf{0}$ har kun løsningen $\mathbf{x}=\mathbf{0}$.

hvis alle variabler er bunde er den linært uafhængig.

hvis matricen er kvadratisk og den er linært uafænig betyder det at den kan gøres til enhedsmatricen, hvis den kan det er den også invertibel. 

**Theorem 3.4 (Linear uafhangighed og rank)**
Lad $\mathbf{v}_1, \ldots, \mathbf{v}_k \in \mathbb{R}^n$ og sæt $\mathbf{A}=\left(\mathbf{v}_1|\cdots| \mathbf{v}_k\right)$ (en $n \times k$ matrix). Da er følgende betingelser ækvivalente:
(i) Vektorerne $\mathbf{v}_1, \ldots, \mathbf{v}_k$ er lineært uafhængige.
(ii) $\operatorname{rank} \mathbf{A}=k$.

**Theorem 3.5 (Lineær uafhængighed og invertibilitet)**
Lad $n \times n$ matrix er invertibel hvis og kun hvis søjlerne (eller rækkerne) er lineært uafhængige.

**Theorem 3.6 (Antallet af lineært uafhængige vektorer)**
Hvis $\mathbf{v}_1, \ldots, \mathbf{v}_k \in \mathbb{R}^n$ er lineært uafhængige, da er $k \leqslant n$.
# Baser
**Definition 3.6 (Basis for underrum)**
Lad $\mathcal{U}$ være et underrum af $\mathbb{R}^n$. En endelig delmængde af $\mathcal{B} \subseteq \mathcal{U}$ kaldes en basis for $\mathcal{U}$ hvis:
$\mathcal{B}$ er lineært uafhængig og $\operatorname{span} \mathcal{B}=\mathcal{U}$.

**Standard basen**
![](https://i.imgur.com/UbMxx8M.png)
Definition (Standardbasen for $\mathbb{R}^n$ )
Standardbasen (som er en basis!) for $\mathbb{R}^n$ er $\mathcal{B}=\left\{\mathbf{e}_1, \mathbf{e}_2, \ldots, \mathbf{e}_n\right\}$ hvor
$$
\mathbf{e}_1=\left(\begin{array}{c}
1 \\
0 \\
\vdots \\
0
\end{array}\right), \quad \mathbf{e}_2=\left(\begin{array}{c}
0 \\
1 \\
\vdots \\
0
\end{array}\right), \ldots, \mathbf{e}_n=\left(\begin{array}{c}
0 \\
0 \\
\vdots \\
1
\end{array}\right)
$$
man laver et subset af U der kun indeholder linært uafhængige vektorer. 
![](https://i.imgur.com/aNCvryS.png)
spanner B hele det grå plan U. 
man skal kunne svare på de 2 spørgsmål for at det kan være en basis for U.
# Dimension

# Opgaver 
![[LinAlgDat - Lecture man - 19 08-05-23 13.19.36.excalidraw]]
![[LinAlgDat - Lecture man - 19 08-05-23 13.51.32.excalidraw]]
![[LinAlgDat - Lecture man - 19 08-05-23 14.19.27.excalidraw]]
