---
date: 08-05-23
day: man
week: 19
year: 2023
type: Reading
course: LinAlgDat
status: undefined
semester: 2
tags:
Summary: "span, vector space og baser, vektorligninger"
---
##### Weekly note
[[Uge 19 - 2023]]

# Vektorer
3.2
$$
\left[\begin{array}{r}
x_1+2 x_2 \\
3 x_1-x_2 \\
4 x_1+5 x_2
\end{array}\right]=\left[\begin{array}{l}
3 \\
2 \\
9
\end{array}\right],
$$
3.3:
$$
\left[\begin{array}{r}
x_1+2 x_2 \\
3 x_1-x_2 \\
4 x_1+5 x_2
\end{array}\right]=\left[\begin{array}{r}
x_1 \\
3 x_1 \\
4 x_1
\end{array}\right]+\left[\begin{array}{r}
2 x_2 \\
-x_2 \\
5 x_2
\end{array}\right]=x_1\left[\begin{array}{l}
1 \\
3 \\
4
\end{array}\right]+x_2\left[\begin{array}{r}
2 \\
-1 \\
5
\end{array}\right] \text {. }
$$
Combining (3.2) and (3.3) gives a single vector equation
3.4
$$
x_1\left[\begin{array}{l}
1 \\
3 \\
4
\end{array}\right]+x_2\left[\begin{array}{r}
2 \\
-1 \\
5
\end{array}\right]=\left[\begin{array}{l}
3 \\
2 \\
9
\end{array}\right]
$$
or in more compact form,
3.5
$$
x_1 \mathbf{v}_1+x_2 \mathbf{v}_2=\mathbf{b} \text {, }
$$
where
$$
\mathbf{v}_1=\left[\begin{array}{l}
1 \\
3 \\
4
\end{array}\right], \quad \mathbf{v}_2=\left[\begin{array}{r}
2 \\
-1 \\
5
\end{array}\right], \quad \mathbf{b}=\left[\begin{array}{l}
3 \\
2 \\
9
\end{array}\right]
$$
We call (3.4), or (3.5), the vector form of the linear system $(S)$ in (3
# linære systemer på vektor form
the product $Y=(\mathbf{A x})$, we have
$$
\mathbf{A x}=\left[\begin{array}{rr}
1 & 2 \\
3 & -1 \\
4 & 5
\end{array}\right]\left[\begin{array}{l}
x_1 \\
x_2
\end{array}\right]=\left[\begin{array}{c}
x_1+2 x_2 \\
3 x_1-x_2 \\
4 x_1+5 x_2
\end{array}\right]=\left[\begin{array}{l}
y_1 \\
y_2 \\
y_3
\end{array}\right]=\mathbf{y}
$$
the transformation $\mathbf{A x}$ maps $R^2$ onto the plane in $R^3$

Consistent if one 2-vector $x$ in $R^2$ that is mapped by $A$ onto $R^3$ 
# Vector spaces
$R^2$, et plan hvori alle 2d vektor ligger. 

alle vektorer er ankeret til origo. 

en vektor er en $n \times 1$ vektor der befinder sig i $R^n$

i hvert space er der en vektor der har alle dens components værende 0.  det er nulvektoren.
### algebraiske regneregler for vektorer
**Vector Addition**
(A1) $\mathbf{u}+\mathbf{v}=\mathbf{v}+\mathbf{u} \quad$ 
(A2) $(\mathbf{u}+\mathbf{v})+\mathbf{w}=\mathbf{u}+(\mathbf{v}+\mathbf{w})$
(A3) $\mathbf{v}+\mathbf{0}=\mathbf{v}$
(A4) $\mathbf{v}+(-\mathbf{v})=0$
**Scalar Multiplication**
(A5) $s(\mathbf{u}+\mathbf{v})=s \mathbf{u}+s \mathbf{v}$
(A6)$(s+t) \mathbf{v}=s \mathbf{v}+t \mathbf{v}$
(A7) $s(t \mathbf{v})=t(s \mathbf{v})=(s t) \mathbf{v}$
(A8) $1 \mathbf{v}=\mathbf{v}$
## Subspaces, underrum
subsets der indeholder vektorer i $R^n$
$6x_1-x_2+2x_3=0$ definerer et plan P der passerer igennem (0,0) i $R^3$

ved at løse ligningen i forhold til $x_2$ viser at alle 3-vektorer hvis terminal punkter (enden af vektoren) der ligger i P gives ved:
3.8:
$$\begin{bmatrix}x_1 \\ 6x_1+2x_3 \\ x_3\end{bmatrix}$$

Her ville et supspace $U$ af $R^3$ kunne indeholde alle vektorer der bliver defineret af matricen foroven. 

$U$ har følgende egenskaber S1 og S2: 
**S1: enhver vektor $u,v\in U$ summen $u+v$ er også i $U$.** 
*eksempel:* $u=\begin{bmatrix}0 & 2 & 1\end{bmatrix},v\begin{bmatrix}-1 & 0 & 3\end{bmatrix}$, her er $u+v=\begin{bmatrix}-1 & 2 & 3\end{bmatrix}$ også i $U$, det kan tjekkes ved at sætte $x_1$ og $x_4$ i 3.8:
$$\begin{bmatrix}-1 \\ -6+6 \\ 3\end{bmatrix}$$
$6x_1-x_2+2x_3=0\rightarrow -6-0+2\cdot3=0$ . matricen giver $x_1,x_2,x_3$ der kan sættes ind i ligningen. 
**S2: Hvis $u\in U$ og $s$ er en skalar så er $su\in U$** 
$U$ er lukket med respekt til vektor addition og scalar mutliplikation. 
derfor $0u\in U$ fordi 0 er en skalar.
$a_1,a_2,a_{3}... a_{k-1},a_k,a_{k+1}...a_n$
hvis man skulle visse at $a_k$ er i $U$ kunne man gøre følgende 
$0a_1+0a_2+0a_{3}... 0a_{k-1}+a_k+0a_{k+1}...0a_n$
fordi de bliver skaleret med 0 og lagt sammen. 

alle subspaces af $R^n$ indeholder nulvektoren:
hvis $U$ indeholdeder alle vektorer med terminal punkter i ($u_1,u_2$) og $u_1-u_2=1$ er $U$ en linje der ikke passerer igennem (0,0), derfor er nulvektoren ikke i $U$ og $U$ kan derfor ikke være et subspace af $R^n$

**specielle subspaces:** $O$ indeholder kun 0, altså kun nulvektoren, det overholder stadig S1 og S2.

$U=R^n$ overholder S1 og S2 og er derfor også et supspace af $R^n$. $U$ er et ordenligt supspace hvis det ikke er O eller $R^n$.
# Linære kombinationer, span
![](https://i.imgur.com/peYJytW.png)
ved at sætte $x_1=1$ og $x_1=0$ for $2 \leq i \leq k$ i 3.9 viser at $v_1$ er i span $S$. samme argument viser for alle vektorer i $S$ er i span $S$. $S$ er et subset af span $S$.
$$
-2 \mathbf{v}_1+0.5 \mathbf{v}_2=-2\left[\begin{array}{l}
1 \\
1
\end{array}\right]+0.5\left[\begin{array}{r}
-1 \\
2
\end{array}\right]=\left[\begin{array}{c}
-2.5 \\
-1
\end{array}\right]=\mathbf{b}
$$
$b$ er en linær kombination af $v_1$ og $v_2$ der bruger skalarer $x_1$ og $x_2$.

i en enkelt homgen ligning $2x+6y-4z=0$ der danner et plan i $R^3$, i et supspace $U$ med vektoer $v_1$ og $v_2$ vil $1 \times 3$ matricen lavet af ligningen være *null space*.
## vektor ligninger 
hvis man har et set af vektorer $S={v_1,v_2,...v_k}$ i $R^n$ og har en vektor $b$. Hvis man ønsker at finde ud af om $b$ er en linær kombination af vektorene i $S$ (om $b\in S$), kan man bruge vektor ligninger. 
$$
x_1 \mathbf{v}_1+x_2 \mathbf{v}_2+\cdots+x_k \mathbf{v}_k=\mathbf{b}
$$
det kan laves om til et linært system. hvis systemet er inkonsitent er $b$ ikke en linær kombination af $S$, $b$ er ikke i span $S$.

hvis systemet har en unik løsning er $b$ i span $S$ og vil være en linær kombination af vektorer fra $S$ på en enkelt måde.

hvis systemet har uendelige løsninger er $b$ i span $S$  og vil være en linær kombination af vektorer fra $S$ på uendelige måder.
### eksempel - Solving a Vector Equation
Let $v_1, v_2, v_3$, and $b$ be the following vectors in $\mathbb{R}^2$.
$$
\mathbf{v}_1=\left[\begin{array}{l}
1 \\
2
\end{array}\right], \quad \mathbf{v}_2=\left[\begin{array}{l}
3 \\
4
\end{array}\right], \quad \mathbf{v}_3=\left[\begin{array}{l}
5 \\
6
\end{array}\right], \quad \mathbf{b}=\left[\begin{array}{l}
2 \\
2
\end{array}\right]
$$
Then $b$ is a linear combination of $\mathrm{v}_1, \mathrm{v}_2, \mathrm{v}_3$ if there are scalars $x_1, x_2, x_3$ such that $x_1 \mathbf{v}_1+x_2 \mathbf{v}_2+x_3 \mathbf{v}_3=\mathbf{b}$ (this is equation (3.12) with $k=3$ ). Using the laws of vector algebra, we have
$$
x_1\left[\begin{array}{l}
1 \\
2
\end{array}\right]+x_2\left[\begin{array}{l}
3 \\
4
\end{array}\right]+x_3\left[\begin{array}{l}
5 \\
6
\end{array}\right]=\left[\begin{array}{r}
x_1+3 x_2+5 x_3 \\
2 x_1+4 x_2+6 x_3
\end{array}\right]=\left[\begin{array}{l}
2 \\
2
\end{array}\right]
$$
From the last equality in (3.13) we see that $b$ is a linear combination of $\mathbf{v}_1, \mathbf{v}_2$, $v_3$ if and only if the $2 \times 3$ linear system
(S) $\left\{\begin{array}{r}x_1+3 x_2+5 x_3=2 \\ 2 x_1+4 x_2+6 x_3=2\end{array}\right.$
is consistent. Reducing the augmented matrix $\mathbf{M}$ for $(S)$ to its reduced form $\mathbf{M}^*$, we have
$$
\mathbf{M}=\left[\begin{array}{lll|l}
1 & 3 & 5 & 2 \\
2 & 4 & 6 & 2
\end{array}\right] \sim\left[\begin{array}{rrr|r}
1 & 0 & -1 & -1 \\
0 & 1 & 2 & 1
\end{array}\right]=\mathbf{M}^* .
$$
Hence, $r=\operatorname{rank} \mathbf{A}=\operatorname{rank} \mathbf{M}=2<3=k$ and so $(S)$ is consistent with $k-r=3-2=1$ free variable in the solution set. Let $x_3=t$, where $t$ is a real parameter. The solution set for $(S)$ is $\left(x_1, x_2, x_3\right)=(-1+t, 1-2 t, t)$ and so, for any real $t$, we have
$$
(-1+t) \mathbf{v}_1+(1-2 t) \mathbf{v}_2+t \mathbf{v}_3=\mathbf{b}
$$
There are infinitely many ways of writing $\mathbf{b}$ as a linear combination of $\mathbf{v}_1$. $\mathbf{v}_2, \mathbf{v}_3$. Choosing $t=2$ and $t=0$, for example, gives particular representations of $\mathbf{b}$, namely $\mathbf{v}_1-3 \mathbf{v}_2+2 \mathbf{v}_3=\mathbf{b}$ and $-\mathbf{v}_1+\mathbf{v}_2+0 \mathbf{v}_3=\mathbf{b}$ (or $\mathbf{v}_2-\mathbf{v}_1=\mathbf{b}$ ), respectively. Hence, $\mathbf{b}$ is in $\operatorname{span}\left\{\mathbf{v}_1, \mathbf{v}_2, \mathbf{v}_3\right\}$ and in fact $\mathbf{b}$ is in $\operatorname{span}\left\{\mathbf{v}_1, \mathbf{v}_2\right\}$, the point being that $\mathbf{b}$ can be represented in terms of $\mathbf{v}_1$ and $\mathbf{v}_2$ only. Can you see why $\mathbf{b}$ is also in $\operatorname{span}\left\{\mathbf{v}_1, \mathbf{v}_3\right\}$ and in $\operatorname{span}\left\{\mathbf{v}_2, \mathbf{v}_3\right\}$ ?

hvis U er et subspace af $R^n$ og S er et finitivt subset af U. hvis S=U er S kaldt det spanning set af U og man kan sige at **S generer U**.
# Linær afhængighed 
linær afhængihed det samme som antal af løsninger, hvis der er en løsning er kolonerne linært uafhængig 

fordi følgende statments er ens for en $n \times k$ matrice:
- kolonerne i A er linært uafhængige
- Rank A = k
# Baser
