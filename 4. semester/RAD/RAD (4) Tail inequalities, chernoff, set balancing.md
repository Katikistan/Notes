# Fremlæggelse 
# Poisson trials & Poisson Binomial Distribution
Let $0 \leq p_{1}, \ldots, p_{n} \leq 1$, let $X_{1}, \ldots, X_{n}$ be independent indicator variables with $\operatorname{Pr}\left[X_{i}=1\right]=p_{i}$, and let $X=\sum_{i=1}^{n} X_{i}$. We call $X_{1}, \ldots X_{n}$ Poisson Trials, and say that $X$ has the Poisson Binomial Distribution.

Der er $X_n$ uafhængige variabler der hver har forskellig sandsynlighed, X er summen af alle $X_i$. X har en Poisson Binomial fordeling

# First Chernoff Bound 
Given a random variable $X$ with the Poisson Binomial  Distribution: 
- For $\delta>0$, find small $\epsilon>0$ so that
$$
\operatorname{Pr}[X>(1+\delta) \mu]<\epsilon
$$
$\mu \geq \mathbb{E}[X]=\sum_{i=1}^{n} p_{i}$. For any $\delta>0$,
$$
\operatorname{Pr}[X>(1+\delta) \mu]<\left(\frac{e^{\delta}}{(1+\delta)^{(1+\delta)}}\right)^{\mu}
$$
$<e^{-\frac{\delta^{2}}{3} \mu}$
## Proof
Given a random variable $X$ with the Poisson Binomial  Distribution: 
For $\delta>0$, find small $\epsilon>0$ so that
$$
\operatorname{Pr}[X>(1+\delta) \mu]<\epsilon
$$
Let $X_{1}, \ldots, X_{n}$ be *independent* Poisson trials such that for $1 \leq i \leq n, \operatorname{Pr}\left[X_{i}=1\right]=p_{i}$, where $0<p_{i}<1$. Let $X=\sum_{i=1}^{n} X_{i}$ and $\mu \geq \mathbb{E}[X]=\sum_{i=1}^{n} p_{i}$. For any $\delta>0$,

Analyser $(1+\delta)^{X}$ istedet for $X$.

vi gør basen til en potens og vælger $1+\delta$ til at være en ny base.
vi kan f.eks. omskrive $5>2$ til $3^5>3^2$ og så holder det stadig. det er det samme vi gør.
$$
\operatorname{Pr}[X>(1+\delta) \mu]=\operatorname{Pr}\left[(1+\delta)^{X}>(1+\delta)^{(1+\delta) \mu}\right]
$$
Markov's første ulighed med stærke uligheder fordi x > 0. Her er $X=(1+\delta)^{x}$, $t=(1+\delta)^{(1+\delta) \mu}$. 
$$
<\frac{\mathbb{E}\left[(1+\delta)^{x}\right]}{(1+\delta)^{(1+\delta) \mu}}
$$
Vi ganger $1+\delta$ med sig selv X gange, derfor kan vi bruge product af expectation når de er uafhængige. $\mathbb{E}\left[(1+\delta)^{X}\right]=\mathbb{E}\left[(1+\delta)^{\sum_{i=1}^{n} x_{i}}\right]=\mathbb{E}\left[\prod_{i=1}^{n}(1+\delta)^{x_{i}}\right]=\prod_{i=1}^{n} \mathbb{E}\left[(1+\delta)^{x_{i}}\right]$ 
$$=\frac{\prod_{i=1}^{n} \mathbb{E}\left[(1+\delta)^{x_{i}}\right]}{(1+\delta)^{(1+\delta) \mu}}$$
X er en indikator variabel så den kan kun være 0 eller 1.
$\mathbb{E}\left[(1+\delta)^{x_{i}}\right]=\left(1-p_{i}\right)(1+\delta)^{0}+p_{i}(1+\delta)^{1}=1+p_{i} \delta$
der gælder at forventningen af en indikatorvariabel er sansyndligheden for at den forekommer. 
$$=\frac{\prod_{i=1}^{n}\left(1+p_{i} \delta\right)}{(1+\delta)^{(1+\delta) \mu}}$$
bruger at $1 + x \leq e^x$. 
$$\leq \frac{\prod_{i=1}^{n} e^{p_i \delta}}{(1+\delta)^{(1+\delta) \mu}}$$
potens regnereglen $x^{a} \cdot x^b=x^{a+b}$
$$=\frac{e^{\left(\sum_{i=1}^{n} p_{i} \delta\right)}}{(1+\delta)^{(1+\delta) \mu}}$$
$e^{(\sum_{i=1}^{n} p_{i} \delta)}\leq e^{\delta\mu}$ $\mu \geq E[X]=\sum^n_{i=1} p_i$, vi kan tage delta ud af sum. worst case er  men s
$$
\begin{aligned}
\leq \frac{e^{\delta \mu}}{(1+\delta)^{(1+\delta) \mu}}=\left(\frac{e^{\delta}}{(1+\delta)^{(1+\delta)}}\right)^{\mu}
\end{aligned}
$$
trækker $\mu$ ud.

Derved har vi $\operatorname{Pr}[X>(1+\delta) \mu]<\left(\frac{e^{\delta}}{(1+\delta)^{(1+\delta)}}\right)^{\mu}$
# Second Chernoff Bound
For $0<\delta<1$, find small $\epsilon>0$ so that
$$
\operatorname{Pr}[X<(1-\delta) \mu]<\epsilon
$$
Let $X_{1}, \ldots, X_{n}$ be independent Poisson trials such that, for $1 \leq i \leq n, \operatorname{Pr}\left[X_{i}=1\right]=p_{i}$, where $0<p_{i}<1$. Let $X=\sum_{i=1}^{n} X_{i}$ and $\mu \leq \mathbb{E}[X]=\sum_{i=1}^{n} p_{i}$. For any $0<\delta<1$,
$$
\begin{aligned}
\operatorname{Pr}[X<(1-\delta) \mu] & <\left(\frac{e^{-\delta}}{(1-\delta)^{(1-\delta)}}\right)^{\mu}
\end{aligned}
$$
### Proof
beviset er identisk men det er $1-\delta$ istedet og uligheden er vendt i $\operatorname{Pr}[X<(1-\delta) \mu]$ ellers er alle skridt ens. 
# Set balancing 
en algoritme der finder en B vektor der kan ganges på A for at minimere max normen. Det kan blandt andet bruges til udvælgelse af forsøgs personer i kliniske forsøg.
$$\underbrace{\begin{bmatrix}   1 & 0 & 0\\   1 & 1 & 0   \\ 1 & 0 & 0  \\ \end{bmatrix}}_A\underbrace{\begin{bmatrix}\pm1 \\ \pm1\\ \pm1\end{bmatrix}}_{B}=AB$$
$$|AB|_\infty$$
Ved at bruge Chernoff kan vi opnå en øvre grænse for fejl sandsynligheden. Det betyder altså at vi ikke behøver at sandsynligheden for  algoritmen fejler er meget lav. Vi behøver i fleste tilfælde ikke at køre 
$$<2\sqrt{2n\ln(n)}$$
