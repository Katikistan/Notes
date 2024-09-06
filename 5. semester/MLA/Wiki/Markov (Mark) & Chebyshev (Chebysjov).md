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
## Proof
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
## Proof
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
\operatorname{Pr}\left[\left|X-\mu_{X}\right| \geq t\right] \leq \frac{\sigma_{X}^{2}}{t^{2}}=\frac{\operatorname{Var}[X]}{t^{2}}
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