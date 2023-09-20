---
date: 06-09-23
day: ons
week: 36
year: 2023
type: Wiki
course: MatIntro
status: open
semester: 2
tags: []
Summary:
---
##### Weekly note
[[Uge 36 - 2023]]

A function is a mathematical object that produces an output $y$ when given an input $x$.

A function is defined by:
1. A domain $\mathrm{D} m(f)$
2. An expression $f$ that connects any $x$ in $\mathrm{D} m(f)$ with one and only one $y=f(x)$

When $x$ passes through the domain, the function will give us the corresponding function values $f(x)$. We call the set of possible output values the codomain of $f$ and denote it $\operatorname{Vm}(f)$
![[Pasted image 20230825112822.png]]

Suppose $f$ and $g$ are functions, and $k$ is a constant.
Then the functions $k \cdot f$, $f+g$, $f-g, f \cdot g$, and $\frac{f}{g}$ are determined by: $$ \begin{aligned} (k \cdot f) (x) & =k \cdot f(x), \quad x \in \mathrm{D} m(f) \\ (f+g) (x) & =f(x)+g(x), \quad x \in \mathrm{D} m(f) \cap \mathrm{D} m(g) \\ (f-g) (x) & =f(x)-g(x), \quad x \in \mathrm{D} m(f) \cap \mathrm{D} m(g) \\ (f \cdot g) (x) & =f(x) \cdot g(x), \quad x \in \mathrm{D} m(f) \cap \mathrm{D} m(g) \\ \left(\frac{f}{g}\right)(x) & =\frac{f(x)}{g(x)}, \quad g(x) \neq 0, x \in \mathrm{D} m(f) \cap \mathrm{D} m(g) \\ (f \circ g) (x) & =f(g(x)) \quad x \in \mathrm{D} m(f) \cap \mathrm{V} m(g) \end{aligned} $$
# Function types
## Linear functions
$$ l(x)=a x+b $$
## Exponential functions
$$ e(x)=b \cdot a^x $$
## Power functions
$$ p(x)=b x^a $$
## $n$-th degree polynomials
$$ \mathrm{P}(x)=\sum_{i=0}^n a_i x^i=a_n x^n+a_{n-1} x^{n-1}+\cdots+a_0 \quad \text { where } a_n \neq 0 $$ 
## Logarithmic functions  $$ f(x)=\ln (x) $$ 
## Trigonometric functions 
$$ f(x)=a \sin(b x+c)+d $$

# Inverse functions
Given a function $f$ that when given an input $x$ produces $y$ such that $f(x)=y$, then the inverse function produces $x$ when given $y$, such that $f^{-1}(y)=x$.

The inverse to $f$ is written $f^{-1}$ and must meet $$ \left(f \circ f^{-1}\right)(x)=f\left(f^{-1}(x)\right)=x $$ and $$ \left(f^{-1} \circ f\right)(x)=f^{-1}(f(x))=x $$
If $f$ has an inverse then it's a well-defined expression.

# Factoring polynomials
If a polynomial of the n-th degree: $$ p(x)=\sum_{i=0}^n a_i \cdot x^i=a_0+a_1 \cdot x+a_2 \cdot x^2 \ldots+a_n \cdot x^n $$ If the roots have $\left\{\alpha_1, \cdots, \alpha_n\right\}$, the polynomial can be factorised: $$ p(x)=a_n \cdot \prod_{i=1}^n\left(x-\alpha_i\right)=a_n \cdot\left(x-\alpha_1\right) \cdot\left(x-\alpha_2\right) \cdot \ldots \cdot\left(x-\alpha_n\right)$$ Note that $a_n$ is the coefficient for the joint of the highest degree in the polynomial $p(x)$.