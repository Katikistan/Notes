They quantify some properties of a predicate, for example that p is true for all x that is bigger than 0, so when x is bigger than 0 the predicate is true.

P(x) is also called a propositional function, because each choice of x produces a proposition P(x) that is
either true or false.

The universal (for all) quantifier: $\forall$ 
"for all element x of S P(x) is true": $\forall x \in S ~~ P(x)$

The existential quantifier: $\exists$ 
"there exists $x \in S$ such that P(x) is true": $\exists x \in S ~~ P(x)$

## Eksempel
S = levende og døde personer

1. $\forall p \in S ~~ \exists m \in S$ 
2. $\exists m \in S ~~ \forall p \in S$
m is the mother of p

**Order matters** These are different:
1. Every p has a mother
2. There is an m that is the mother for all p 
In general $\forall x\exists y$ is different from $\exists y \forall x$

# Negation 
Negation of universal quantifier turns it into existential quantifier 
$\sim(\forall x \in S ~~ P(x)) \equiv (\exists x \in S ~~ \sim P(x))$
$\sim(\exists x \in S ~~ P(x)) \equiv (\forall x \in S ~~ \sim P(x))$

## Negation of Big- $\Theta$ using quantifiers
Big- $\Theta:$ Let $f, g: \mathbb{R}^{+} \rightarrow \mathbb{R}$ be asymptotically positive. Then $f$ is $\Theta(g)$ if there exists $c_1, c_2, x_0>0$ such that $c_1 g(x) \leqslant f(x) \leqslant c_2 g(x)$ for all $x \geqslant x_0$.
With quantifiers:
$$
\exists c_1>0 \exists c_2>0 \exists x_0>0 \forall x \geqslant x_0 ~~~~~c_{1}g(x) \leqslant f(x) \leqslant c_2 g(x) \text {. }
$$
The negation:
$$
\begin{array}{r}
\sim\left[\exists c_1>0\left(\exists c_2>0 \exists x_0>0 \forall x \geqslant x_{0} ~~ ~~ c_1 g(x) \leqslant f(x) \leqslant c_2 g(x)\right)\right] \\
\equiv \forall c_1>0 \sim\left[\exists c_2>0\left(\exists x_0>0 \forall x \geqslant x_0 ~~~~c_1 g(x) \leqslant f(x) \leqslant c_2 g(x)\right)\right] \\
\equiv \forall c_1>0 \forall c_2>0 \sim\left[\exists x_0>0\left(\forall x \geqslant x_0 ~~~~c_1 g(x) \leqslant f(x) \leqslant c_2 g(x)\right)\right] \\
\equiv \forall c_1>0 \forall c_2>0 \forall x_0>0 \sim\left[\forall x \geqslant x_0\left(c_1 g(x) \leqslant f(x) \leqslant c_2 g(x)\right)\right] \\
\equiv \forall c_1>0 \forall c_2>0 \forall x_0>0 \exists x \geqslant x_0 \sim\left[c_1 g(x) \leqslant f(x) \leqslant c_2 g(x)\right] \\
\equiv \forall c_1>0 \forall c_2>0 \forall x_0>0 \exists x \geqslant x_0 \\
\\
\quad\left[c_1 g(x)>f(x) \vee f(x)>c_2 g(x)\right]
\end{array}
$$
Bemærk at $\leq$ bliver til >, og det sker kun inde i funktions leddet ikke ved de universelle quantifiers. altså kun til sidst.
(Se DMA opgave for et andet eksempel)


--- 
Kilder: https://www.youtube.com/watch?v=GJpezCUMOxA, KBR 2.1