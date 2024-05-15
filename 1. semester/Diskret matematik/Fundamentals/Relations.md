An ordered pair is a set where the order matters , (a,b) is an ordered pair where a is first and then b. Ordered pairs have a length of 2.

A relation $R$ on set $A$ is a collection of ordered pairs ($a$, $\left.a^{\prime}\right) \in A \times A$. 

Def. Let $R$ be a relation from $A$ to $B$, i.e., $R \subseteq A \times B$. 
The domain of $R$ is $\operatorname{Dom}(R)=\{a \in A \mid \exists b \in B: a R b\}$ 
The range of $R$ is $\operatorname{Ran}(R)=\{b \in B \mid \exists a \in A: a R b\}$

Relations are sets, so we can apply [[Sets og set operationer|set operations]]

Def. Let $R \subseteq A \times B$ be a relation.
- The complementary relation
$$
\overline{\mathrm{R}}=\{(\mathrm{a}, \mathrm{b}) \in \mathrm{A} \times \mathrm{B} \mid(\mathrm{a}, \mathrm{b}) \notin \mathrm{R}\}
$$
is a relation from $A$ to $B$.
- The inverse relation
$$
\mathrm{R}^{-1}=\{(\mathrm{b}, \mathrm{a}) \in \mathrm{B} \times \mathrm{A} \mid(\mathrm{a}, \mathrm{b}) \in \mathrm{R}\}
$$
is a relation from $B$ to $A$.
The complementary relation of “$\geq$” is "<”.  
The inverse relation of “$\geq$” is “$\leq$”.
### Paths 
Let $R$ be a relation on $A$.
Def. For $n \in \mathbb{Z}^{+}$, the relation $R^n$ on $A$ is given by $a R^n b \Leftrightarrow$ there exists a path of length $n$ in $R$ from $a$ to $b$.
![|500](https://i.imgur.com/rMMWZmC.png)
![|500](https://i.imgur.com/0ct2t8D.png)
![|500](https://i.imgur.com/8nv2WsB.png)

### Relative set 
Def. Let $R$ be a relation from $A$ to $B$. Also, let $a \in A$ and $A_1 \subseteq A$.
- The R-relative set of $a$ is $R(a)=\{b \in B \mid a R b\}$.
- The R-relative set of $A_1$ is
$$
R\left(A_1\right)=\left\{b \in B \mid \exists a \in A_1: a R b\right\}=\bigcup_{a \in A_1} R(a)
$$
### Example 
x ∈ A and y ∈ B
x F y: x is relates to y through f. 

A is the set of living men og B set of living women.
F is the relation dad. 
If x is y's dad then x F y. 

**Example**: $A=\{2,3,4,5,6,15\}$
Divisibility relation: $\quad a R b \Leftrightarrow a \mid b$ $R=\{(2,2),(2,4),(2,6),(3,3),(3,6),(3,15)$, $(4,4),(5,5),(6,6)(5,15),(15,15)\}$
This relation is **reflexive**, but not **symmetric**.

### Cartesian product
Def. The (Cartesian) product of sets $A_{1}, \ldots, A_{n}$ is
$$
A_{1} \times A_{2} \times \cdots \times A_{n}=\left\{\left(a_{1}, \ldots, a_{n}\right) \mid a_{i} \in A_{i}\right\}
$$
Thm. Given $n$ finite sets $A_{1}, \ldots, A_{n}$, we have
$$
\left|A_{1} \times A_{2} \times \cdots \times A_{n}\right|=\left|A_{1}\right|\left|A_{2}\right| \cdots\left|A_{n}\right|
$$

A x B is a set of all ordered pairs(a,b) $A \times B,~~a \in A,~~b \in B$

![[Pasted image 20221204180350.png|100]]
Here is the cartesian product of A=(1,2) og B = (r,s).

Note that the order in which you take the cartesian product matters:
$A \times B=\{(1, r),(1, s),(2, r),(2, s),(3, r),(3, s)\}$
$B \times A=\{(r, 1),(s, 1),(r, 2),(s, 2),(r, 3),(s, 3)\}$

A relation from A to B is simply a subset of A × B (giving the related pairs), and, conversely, any subset of A × B can be considered a relation

![](https://i.imgur.com/KVwMln4.png)

Dom(R): Domain, set of all element from A that relates to an element in B.

Ran(R): Range, set of all elements from B that relates to an element in A.

R-relative set of x:
R : A relation between A & B
x ∈ A
R(x) = {y ∈ B | x R y}.

Let $A=\{a, b, c, d\}$ and let $R=\{(a, a),(a, b),(b, c),(c, a),(d, c),(c, b)\}$. Then $R(a)=\{a, b\}, R(b)=\{c\}$, and if $A_1=\{c, d\}$, then $R\left(A_1\right)=\{a, b, c\}$ QED

Let $R$ be a relation from $A$ to $B$, and let $A_1$ and $A_2$ be subsets of $A$. Then:
(a) If $A_1 \subseteq A_2$, then $R\left(A_1\right) \subseteq R\left(A_2\right)$.
(b) $R\left(A_1 \cup A_2\right)=R\left(A_1\right) \cup R\left(A_2\right)$.
(c) $R\left(A_1 \cap A_2\right) \subseteq R\left(A_1\right) \cap R\left(A_2\right)$.
# Classifications of relations
- **Transitive** if relation $R$ on a set $A$ whenever $(a, b) \in R$ and $(b, c) \in R$, we also have that $(a, c) \in R$ Example. Let $R \subseteq \mathbb{Z}^{+} \times \mathbb{Z}^{+}$be given by
$$
\mathrm{aRb} \Leftrightarrow \mathrm{a} \mid \mathrm{b} \quad(\mathrm{a} \text { divides } \mathrm{b})
$$if $a \mid b$ and $b \mid c$ then $a \mid c$. Thus, $R$ is transitive.
Thm. $R$ is transitive if and only if $R^2 \subseteq R$.Def. 

- **Reflexive** if relation $R$ on a set $A$ is $(a, a) \in R$ $\forall$ $a \in A$. 
- We say that $R$ is **irreflexive**, if $(a, a) \notin R$ $\forall$ $a \in A$.
## Symmetric relations
- **symmetric** if $(a, b) \in R$ implies that $(b, a) \in R$
- **asymmetric** if $(a, b) \in R$ implies that $(b, a) \notin R$
- **antisymmetric** if $(a, b) \in R$ and $(b, a) \in R$ then $a=b$.

if the relation holds between a and b, then it cannot hold between b and a.

example of an antisymmetric relation is the relation "is greater than" between elements in a set of real numbers. For any two real numbers a and b, if a is greater than b, then b cannot be greater than a.

# Equivalence relation
A relation is an equivalence relation if it is **symmetric**, **transitive**, and **reflexive**.
- a R b if and only if a = b.
- a R b if and only if a divides b.

# Partial order relations
< > $\leq$ $\geq$ = er relationer 
x er relateret til y, x < y

Def. A relation R on a set A is a partial order, if it is 
- reflexive,  
- antisymmetric
- transitive 
The pair (A,R) is called a poset.

We often use $\leq$ to denote a partial order and write $(A,\leq)$ 
instead of $(A,R)$
Write $a < b$ to denote that  $a \leq b$ and $a \neq b$.

Man bør gøre det tydeligt om $\leq$ bruges til at beskrive et poset eller en sammenligning, det er et poset ikke altid. 

Def. Let $(A,\leq)$  be a poset. We say that elements $a, b \in A$ are  
comparable if $a \leq b$  or $b\leq a$ . Here $\leq$ is describing a poset. 

Def. Let $(A,\leq)$ be a poset. We say that relation $\leq$ is a total (or  
linear) order, if any two elements of A are comparable
Posets $(\mathbb{Z},\leq)$ and $(\mathbb{R},\leq)$ are totally ordered.

Def. Let $(A, \leqslant)$ be a poset. We say that $z \in A$ is
- a maximal element of $A$ if we cannot find $a \in A$ such that $z<a$
- a minimal element of $A$ if we cannot find $a \in A$ such that $a<z$
Thm. Any finite, nonempty poset $A$ has a maximal and a minimal element.

Def. Let $(A, \leqslant)$ be a poset and $B \subseteq A$. We say that $a \in A$ is
- an upper bound for $B$ if $b \leqslant a$ for all $b \in B$.
- a lower bound for $B$ if $a \leqslant b$ for all $b \in B$.

Def. Let $(A, \leqslant)$ be a poset. We say that $z \in A$ is
- the greatest element of $A$ if $a \leqslant z$ for all $a \in A$.
- the least element of $A$ if $z \leqslant a$ for all $a \in A$.
Note: The greatest element of $A$ is always maximal, but the converse doesn't hold.

Thm. (Uniqueness) A poset $(A, \leqslant)$ has at most one greatest element and at most one least element.

Def. Let $(A, \leqslant)$ be a poset and $B \subseteq A$. We say that $a \in A$ is
- the least upper bound (LUB) for $B$ if $a$ is an upper bound on $B$ and $a \leqslant a^{\prime}$ for any upper bound $a^{\prime}$ of $B$.
- the greatest lower bound (GLB) for B if $a$ is an lower bound on $B$ and $a^{\prime} \leqslant a$ for any lower bound $a^{\prime}$ of $B$.

Thm. (Uniqueness) Let $(A, \leqslant)$ be a poset. A subset $B \subseteq$ has at most one LUB and at most one GLB.

Posets can have incomparable elements.



# Functions as relations 
We can also see functions as relations where an element from A maps to an element from B. 

Def. Let $\mathrm{f}: \mathrm{A} \rightarrow \mathrm{B}$ be a function. We say that $\mathrm{f}$ is
- surjective (or “onto") if $\operatorname{Ran}(\mathrm{f})=\mathrm{B}$
- injective (or "one to one") if $f\left(x_1\right) \neq f\left(x_2\right)$ whenever $x_1 \neq x_2$
- everywhere defined if $\operatorname{Dom}(\mathrm{f})=A$
- bijective if it is surjective, injective, and everywhere defined.
Example. Let $A=\{a, b, c\}, B=\{1,2\}$ and consider
$$
\mathrm{f}=\{(\mathrm{a}, 1),(\mathrm{b}, 1)(\mathrm{c}, 2)\} \subseteq A \times B
$$
Exercise. Determine if $f$ is (a) injective, (b) surjective, (c) bijective.

Cant be symmetric and anti symmetric at the same time

g = {(a,1)(b,2)(c,2)(c,3)} this is not a function, c has both a relation to 3 and 2, so this x value has 2 y values.

f{(a,1)(b,1)} this is a function, it's only the first element in the tuple(x) that cant have 2 relations to y.
## Injective 
A function is said to be injective (or one-to-one) if it assigns a unique output to each input in its domain. In other words, if f(x) = f(y) then x = y.
## Surjective 
A function is said to be surjective (or onto) if every element in its codomain is an output of the function. For every y in the range (codomain) of the function, there exists an x in the domain of the function such that f(x) = y.
## Bijective 
A bijective function is a function with unique output for each unique input. The function is both injective and surjective 

A bijective function, also known as a bijection or one-to-one correspondence, is a function that maps each element in a set A to exactly one element in a set B, and each element in B to exactly one element in A. 

This means that the function is both injective (one-to-one) and surjective (onto). No two different elements in set A are mapped to the same element in set B, and every element in set B is the image of some element in set A. 
## Inverse

## specifying functions using tables
# Isomorphism
Two posets  are isomorphic if there is a bijective function between the elements of the two posets that preserves the partial order. 

An isomorphism is a function (f) that takes elements (a, b) from a set (A) and maps them to a different set (A') while preserving the relationship between them (≤). In other words, if two elements (a and b) in set A have a certain relationship (≤) to each other, after they are mapped to set A' through the function (f), they will still have the same relationship (≤') to each other. 
## Vertical line test
If x has 2 different y outputs it's not a function. 
# Partitions 
Vi deler et en mængde op i disjunkte mængder, alle elementer i A skal være delt ud i et subset og der må ikke være gentagelser i et subset. 

Def. A partition $\mathcal{P}$ of a set $A$ is a collection of mutually disjoint nonempty subsets $P_1, \ldots, P_k$ of $A$ such that
$$
A=\bigcup_{i=1}^k P_i
$$
Example. If $A=\{1,2,3,4,5,6,7\}$ then
$$
P_1=\{1,4,7\}, \quad P_2=\{2,5\}, \quad P_3=\{3,6\}
$$
form a partition of $A$.

Let $R$ be an equivalence relation on $A$.
Thm. 1 (Equivalence relation $\rightarrow$ Partition)
The collection $\mathcal{P}$ of all distinct $R$-relative sets, $R(a)$, where $a \in A$, form a partition of $A$.

Example. Recall equivalence relation on $\mathbb{Z}^{+}$given by $a R b \Leftrightarrow$ ( $a$ and $b$ have the same parity)
Q: How many distinct sets $R(a)$ are there? What are they?
Def. The sets, $R(a)$, are called equivalence classes of $R$.
# Digraphs(orienteret graf) and Hasse diagrams
## Digraph
![|250](https://i.imgur.com/80LFkhs.png)
![|250](https://i.imgur.com/JJZTWTj.png)
![|100](https://i.imgur.com/mW897hS.png)
digraph of R. Draw an edge from vertex $a_i$ to $a_j$ $\Leftrightarrow$ $a_i$ R $a_j$   
$$\begin{aligned}
& A=\{1,2,3,4\} \\
& R=\{(1,1),(1,2),(2,1),(2,2),(2,3),(2,4),(3,4),(4,1)\}
\end{aligned}$$
Relation matrix of diagraph above.
$$
\mathbf{M}_R=\left[\begin{array}{llll}
1 & 0 & 0 & 0 \\
0 & 1 & 0 & 0 \\
1 & 1 & 1 & 0 \\
0 & 1 & 0 & 1
\end{array}\right]
$$
![|150](https://i.imgur.com/5nNMR4K.png)
![|130](https://i.imgur.com/TCzY75R.png)
In and out degree of a vertex: 
	In: How many relates to the vertex
	Out: How many does it relate to

The matrix of $R$ is $\mathbf{M}_R=\left[m_{i j}\right]$ where
$$
m_{i j}= \begin{cases}1 & \text { if }\left(a_i, b_j\right) \in R \\ 0 & \text { if }\left(a_i, b_j\right) \notin R\end{cases}
$$
Take  $M_{R}\times M_R$, this will give a boolean matrix showing if there is a relation, however if you use normal matrix multiplication you get how many relations $m_{i j}$ has.

den komplimentære relation: tag cartesian product, alle dem som er relateret skal man trække fra cartesian product, det er den komplimentære relation. 
slide 11/17
## Hasse diagram
A Hasse diagram is a compact visual representation of a poset.  
How to draw a Hasse diagram of a poset $(A,\leq)$:

1 Start with the corresponding digraph.  
2 Remove all the loops.  
3 Remove all the edges (arrows) implied by transitivity.  
4 Make all the arrows point upwards and then replace them  
with lines.

# Topological sort
$\ldots$ is an ordering of its elements
$$
a_1, a_2, \ldots, a_n
$$
where $i>j \Rightarrow a_i \leqslant a_j$.
Equivalently:
$$
\begin{aligned}
i>1 & \Rightarrow a_i \leqslant a_1 \\
i>2 & \Rightarrow a_i \leqslant a_2 \\
i>3 & \Rightarrow a_i \leqslant a_3 \\
& \vdots \\
i>(n-1) & \Rightarrow a_i \leqslant a_{n-1}
\end{aligned}
$$

Sorting elements of a poset $(A, \leqslant)$
Goal: Given an n-element poset $(A, \leqslant)$, produce an ordering
$$
a_1, \ldots, a_n
$$
which is consistent with the "s" partial order:
$$
a_i \leqslant a_j \rightarrow i \leqslant j
$$
Def. We refer to the ordering in (1) as topological sorting of poset $(A, \leqslant)$.
- Contrapositive of (2): $\quad i>j \Rightarrow a_i \leqslant a_j$
- What does $a_i \leqslant a_j$ mean?
![|200](https://i.imgur.com/yEDr0lO.png)
1,3,5,15,2,10,6,30 could be a topological sort. Note: The ordering produced by topological sorting is not unique.

Informally speaking, a topological sorting of an acyclic digraph  
is an ordering of the vertices, where all the arrows “point to the  
right”.
![|400](https://i.imgur.com/HeXslBF.png)
---
#dma_uge12 #dma_uge13