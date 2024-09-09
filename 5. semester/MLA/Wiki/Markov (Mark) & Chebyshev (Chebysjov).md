---
date: 02-09-24
day: man
week: 36
year: 2024
type: Wiki
course: MLA
status: open
semester: 5
tags:
Summary: ""
---
##### Weekly note
[[Uge 36 - 2024]]

# Markov's  Inequality
Lad $Y$ være en stokastisk variabel som kun tager positive værdier. Så for alle $t > 0$:
$$Pr[Y\geq t]\leq \frac{E[Y]}{t}$$
På samme måde, for k > 0 og hvis $E[Y] > 0$:
$$Pr[Y\geq kE[Y]]\leq \frac{1}{k}$$
Y kunne være køretid, så sandsynligheden for at den er langsom den er højst forventingen divideret med t. 
## proof
$$\mathbb{E}[Y]=\sum_{y} y \operatorname{Pr}[Y=y] \geq $$
sum af subset af y, subset er mindre, y er positiv og t > 0, sum er derfor mindre nu. værdi vi ikke inkluderer kan ikke være negative. 
$$\sum_{y \geq t} y \operatorname{Pr}[Y=y] \geq$$
erstat y med t, vi ved at alle $y$ værdier er større end $t$ pga grænse i sum. 
$$\sum_{y \geq t} t \operatorname{Pr}[Y=y]=$$
$t$ er en konstant i den sum så tag den ud.  
$$t \sum_{y \geq t} \operatorname{Pr}[Y=y]=t \operatorname{Pr}[Y \geq t]$$
sum er sandsynlighed for at y >= t. 

Divider med t på begge sider:
$$\mathbb{E}[Y]\geq \sum_{y \geq t} t \operatorname{Pr}[Y=y]= t \operatorname{Pr}[Y \geq t] $$
derved, $\operatorname{Pr}[Y \geq t] \leq \frac{\mathbb{E}[Y]}{t}$.
## Anden ulighed
sæt $t=k \mathbb{E}[Y]>0$ i markov:
$$
\operatorname{Pr}[Y \geq k \mathbb{E}[Y]]=\operatorname{Pr}[Y \geq t] \leq \frac{\mathbb{E}[Y]}{t}=\frac{\mathbb{E}[Y]}{k\mathbb{E}[Y]}=\frac{1}{k}
$$
# Chebyshev's Inequality
Given a random variable $X$ with expectation  $\mathbb{E}[X]=\mu_{X}$, define its variance $\left(\operatorname{Var}[X]\right.$ or $\left.\sigma_{X}^{2}\right)$ as  $\sigma_{X}^{2}:=\mathbb{E}\left[\left(X-\mu_{X}\right)^{2}\right]$, and its standard deviation as  $\sigma_{X}:=\sqrt{\mathbb{E}\left[\left(X-\mu_{X}\right)^{2}\right]}$.
## Theorem
Let $X$ be a random variable with expectation $\mu_{X}$  and standard deviation $\sigma_{X}>0$. Then for all $t>0$ :
$$
\operatorname{Pr}\left[\left|X-\mu_{X}\right| \geq t \sigma_{X}\right] \leq \frac{1}{t^{2}}
$$
Sandsynligheden for X's afvigelse (forskellen) fra dens expectation er mindst t standard afvigelser væk fra expectation, er mindre eller lig $\frac{1}{t^2}$.
### Proof
*Here we use that $k>0$ and $\mathbb{E}[Y]=\sigma_{X}^{2}>0$ so that we can use the second version of Markov's inequality.*
$\text {Let } k=t^{2} \text{ and } Y=\left(X-\mu_{X}\right)^{2}.$
$\text{Then } \sigma_{X}^{2}=\mathbb{E}[Y]$

Since numerical signs are used we can take the power of 2 through the whole inequality and it's the same. This makes it positive. 
$$
\begin{aligned}
& \qquad \begin{aligned}
\operatorname{Pr}\left[\left|X-\mu_{X}\right| \geq t \sigma_{X}\right] & =\operatorname{Pr}\left[\left(X-\mu_{X}\right)^{2} \geq t^{2} \sigma_{X}^{2}\right] \\
& =\operatorname{Pr}[Y \geq k \mathbb{E}[Y]] \\
& \leq \frac{1}{k} \\
& =\frac{1}{t^{2}}
\end{aligned}
\end{aligned}
$$
## Theorem
Let $X$ be a random variable with expectation $\mu_{X}$ and standard  deviation $\sigma_{X}>0$. Then for all $t>0$ :
$$
\operatorname{Pr}\left[\left|X-\mu_{X}\right| \geq t \sigma_{X}\right] \leq \frac{1}{t^{2}}
$$
### Proof
Letting $Y=\left(X-\mu_{X}\right)^{2}$,
$$
\begin{aligned}
\operatorname{Pr}\left[\left|X-\mu_{X}\right| \geq t\right] & =\operatorname{Pr}\left[\left(X-\mu_{X}\right)^{2} \geq t^{2}\right] \\
& =\operatorname{Pr}\left[Y \geq t^{2}\right] \\
& \leq \frac{\mathbb{E}[Y]}{t^{2}}=\frac{\sigma_{X}^{2}}{t^{2}}
\end{aligned}
$$
where the inequality follows from the first version of Markov's  inequality.
## Theorem
Let $X$ be a random variable with expectation $\mu_{X}$ and standard  deviation $\sigma_{X}>0$. Then for all $t>0$ :
$$
\mathbb{P}(|X-\mathbb{E}[X]| \geq \varepsilon)=\mathbb{P}\left(|X-\mathbb{E}[X]|^{2} \geq \varepsilon^{2}\right) \leq \frac{\mathbb{E}\left[|X-\mathbb{E}[X]|^{2}\right]}{\varepsilon^{2}}=\frac{\operatorname{Var}(X)}{\varepsilon^{2}}
$$
**Theorem (Chebyshev's Inequality)**
Given a r.v. $X$, for all $\varepsilon>0$ :$$
\mathbb{P}(|X-\mathbb{E}[X]| \geq \varepsilon) \leq \frac{\operatorname{Var}(X)}{\varepsilon^{2}}
$$
**Theorem (Chebyshev's Inequality for I.I.D. Variables)**

Let $X_{1}, \ldots, X_{n}$ be i.i.d. with mean $\mu$. Then, for all $\varepsilon>0$,
$$
\mathbb{P}\left(\left|\widehat{\mu}_{n}-\mu\right| \geq \varepsilon\right) \leq \frac{\operatorname{Var}\left(X_{1}\right)}{n \varepsilon^{2}}
$$

Chebyshev's inequality provides a result that decays at a rate of $\frac{1}{n}$.

**RAD:**
$$
\operatorname{Pr}\left[\left|X-\mu_{X}\right| \geq t\right] \leq \frac{\sigma_{X}^{2}}{t^{2}}=\frac{\operatorname{Var}[X]}{t^{2}}
$$
# Hoeffding's Inequality
Let $X_{1}, \ldots, X_{n}$ be independent $r$.v.'s with support $[0,1]$, and $S_{n}=\sum_{i=1}^{n} X_{i}$. Then, for all $\varepsilon>0$,
$$
\begin{aligned}
& \text { (i) } \mathbb{P}\left(S_{n}-\mathbb{E}\left[S_{n}\right] \geq \varepsilon\right) \leq e^{-2 \varepsilon^{2} / n} \\
& \text { (ii) } \mathbb{P}\left(S_{n}-\mathbb{E}\left[S_{n}\right] \leq-\varepsilon\right) \leq e^{-2 \varepsilon^{2} / n}
\end{aligned}
$$
Further, using a union bound: $\mathbb{P}\left(\left|S_{n}-\mathbb{E}\left[S_{n}\right]\right| \geq \varepsilon\right) \leq 2 e^{-2 \varepsilon^{2} / n}$.
- Implication:
$$
\mathbb{P}\left(\left|\frac{S_{n}}{n}-\frac{\mathbb{E}\left[S_{n}\right]}{n}\right| \geq \varepsilon\right) \leq 2 e^{-2 n \varepsilon^{2}}
$$

- In particular, if $X_{i}$ 's are i.i.d. with mean $\mu$ :
$$
\mathbb{P}\left(\left|\widehat{\mu}_{n}-\mu\right| \leq \varepsilon\right) \geq 2 e^{-2 n \varepsilon^{2}}
$$
Hoeffding's bound decays exponentially fast in $n$.
### Fra chatten

## Hoeffding's Inequality: Alternative Form
Consider $X_{i}$ 's are i.i.d. (with $\mu=\mathbb{E}\left[X_{1}\right]$ ):
$$
\mathbb{P}\left(\widehat{\mu}_{n}-\mu \geq \varepsilon\right) \leq \underbrace{e^{-2 n \varepsilon^{2}}}_{=\delta}
$$
Solving $\delta=e^{-2 n \varepsilon^{2}}$ for $\varepsilon$ yields: $\varepsilon=\sqrt{\frac{1}{2 n} \log \left(\frac{1}{\delta}\right)}$. Hence,
$$
\mathbb{P}\left(\widehat{\mu}_{n}-\mu \geq \sqrt{\frac{1}{2 n} \log \left(\frac{1}{\delta}\right)}\right) \leq \delta
$$
Let $\delta \in(0,1)$. For $X_{1}, \ldots, X_{n}$ sampled i.i.d.,
$$
\left|\widehat{\mu}_{n}-\mu\right| \leq \sqrt{\frac{1}{2 n} \log \left(\frac{2}{\delta}\right)}, \quad \text { with probability at least } 1-\delta
$$
## Lemma (Hoeffding's Lemma)
Let $X$ be a r.v. supported on $[a, b]$. Then,
$$
\mathbb{E}\left[e^{\lambda(X-\mathbb{E}[X])}\right] \leq e^{\frac{\lambda^{2}(b-a)^{2}}{8}}, \quad \forall \lambda \in \mathbb{R}
$$
## Hoeffding's Inequality: Generic Ranges
**Theorem (Hoeffding's Inequality)**
Let $X_{1}, \ldots, X_{n}$ be independent $r . v$.'s such that $X_{i} \in\left[a_{i}, b_{i}\right]$ almost surely, that is  $\mathbb{P}\left(X_{i} \in\left[a_{i}, b_{i}\right]\right)=1$. Then, for all $\varepsilon>0$,
$$
\begin{aligned}
& \mathbb{P}\left(S_{n}-\mathbb{E}\left[S_{n}\right] \geq \varepsilon\right) \leq e^{-\frac{2 \varepsilon^{2}}{\left.\sum_{i=1}^{n} b_{i}-a_{i}\right)^{2}}} \\
& \mathbb{P}\left(S_{n}-\mathbb{E}\left[S_{n}\right] \leq-\varepsilon\right) \leq e^{-\frac{2 \varepsilon^{2}}{\sum_{i=1}^{n}\left(b_{i}-a_{i}\right)^{2}}}
\end{aligned}
$$
## Theorem (Hoeffding's Inequality: Sub-Gaussian Case)
Let $X_{1}, \ldots, X_{n}$ be i.i.d. $R$-sub-Gaussian r.v.'s with mean $\mu$. Then, for $\delta \in(0,1)$,
$$
\widehat{\mu}_{n}-\mu \leq R \sqrt{\frac{2}{n} \log \left(\frac{2}{\delta}\right)}, \quad \text { with probability at least } 1-\delta \text {. }
$$
# Ekstra
## Union bound 
![](https://i.imgur.com/hTwxtJs.png)
## Independent variables
A set of random variables $X_{1}, X_{2}, \ldots, X_{n}$ is (mutually) independent if for every subset $I \subseteq[1, n]$  and for any set of real values $\left\{x_{i}\right\}_{i \in 1}$,
$$
\operatorname{Pr}\left[\cap_{i \in I} X_{i}=x_{i}\right]=\prod_{i \in I} \operatorname{Pr}\left[X_{i}=x_{i}\right]
$$
This is similar to the definition on the previous examples
 for events $\left\{X_{i}=x_{i}\right\}$ but has to hold for all choices of the values $\left\{x_{i}\right\}_{i \in 1}$