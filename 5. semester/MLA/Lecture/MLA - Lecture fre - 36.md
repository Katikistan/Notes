---
date: 06-09-24
day: fre
week: 36
year: 2024
type: Lecture
course: MLA
status: 
semester: 5
tags: 
Summary: Hoeffding's Inequality, confidence intervals
---
##### Weekly note
[[Uge 36 - 2024]]

# Confidence intervals
Consider $X_{1}, \ldots, X_{n}$ be sampled from some distribution $\nu$, and let $\theta$ be a parameter of $\nu$.
**Def:**
A $(1-\delta)$-confidence interval for $\theta$ is a function $\operatorname{CI}\left(X_{1}, \ldots, X_{n}, \delta\right) \subset \mathbb{R}$ if$$
\mathbb{P}(\mu \in \mathrm{CI}) \geq 1-\delta
$$

- Examples of $\theta$ : mean, variance, ...
- $1-\delta$ is often called the confidence level.
- In words, CI traps the (unknown) parameter $\theta$ w.p. $\geq 1-\delta$.
- CI is a function of samples $X_{1}, \ldots, X_{n}$, hence a random interval.
- Confidence intervals act as certificate for some point estimate of $\theta$ (e.g., for point estimate $\widehat{\mu}_{n}$ of $\mu$ ).

**Example:** $X_{1}, \ldots, X_{n}$ are drawn from a Bernoulli with mean $\mu$.

- Sample mean $\widehat{\mu}_{n}=\frac{1}{n} \sum_{i=1}^{n} X_{i}$
- $\mathrm{A}(1-\delta)-\mathrm{Cl}$ for $\theta=\mu$ is:$$
\mathrm{CI}\left(X_{1}, \ldots, X_{n}, \delta\right)=\left[\widehat{\mu}_{n}-d, \widehat{\mu}_{n}+d\right]
$$for some $d$ determined by $X_{1}, \ldots, X_{n}$ and $\delta$ (and potentially some properties of $\nu$ ).
## Cl using Hoeffding's Inequality
How to construct confidence intervals?

Let $X_{1}, \ldots, X_{n}$ be i.i.d. samples from $\nu$ with mean $\mu$ and support $[0,1]$. Define
$$
\mathrm{CI}=\left[\widehat{\mu}_{n}-\sqrt{\frac{1}{2 n} \log \left(\frac{2}{\delta}\right)}, \widehat{\mu}_{n}+\sqrt{\frac{1}{2 n} \log \left(\frac{2}{\delta}\right)}\right]
$$
By Hoeffding's inequality, $\mathbb{P}(\mu \in \mathrm{CI}) \geq 1-\delta \Longrightarrow \mathrm{CI}$ is a $(1-\delta)$-CI for $\mu$.
- CI above is a certificate for the point estimate $\widehat{\mu}_{n}$ of $\mu$.
- Since $\mu \in[0,1]$,$$
\mathrm{CI}=\left[\max \left(\widehat{\mu}_{n}-\sqrt{\frac{1}{2 n} \log \left(\frac{2}{\delta}\right)}, 0\right), \min \left(\widehat{\mu}_{n}+\sqrt{\frac{1}{2 n} \log \left(\frac{2}{\delta}\right)}, 1\right)\right]
$$
**Example: Cl for Bernoulli**
Example: Consider samples collected in S1.csv. If they are independent samples from a Bernoulli with mean $\mu$, then:
(a) Sample mean: $\widehat{\mu}_{n}=0.43$

(b) A 0.99-CI for $\mu$ :
$$
\mathrm{CI}_{1}=[0.267,0.593]
$$

(c) A $0.9-\mathrm{CI}$ for $\mu$ :
$$
\mathrm{CI}_{2}=[0.307,0.553]
$$

(d) Repeat (a)-(c) with S2.csv and compare the results.
For example, $\mathrm{CI}_{1}$ tells us that $\mathbb{P}(0.267 \leq \mu \leq 0.593) \geq 0.99$. Can we obtain the exact value of $\mu$ using S1 or S2?

Let $X_{1}, \ldots, X_{n}$ be independent samples, admitting a common mean $\mu$ and range  $[a, b]$. Then, for any $\delta \in(0,1)$,
$$
\mathrm{CI}=\left[\max \left(\widehat{\mu}_{n}-(b-a) \sqrt{\frac{1}{2 n} \log \left(\frac{2}{\delta}\right)}, a\right), \min \left(\widehat{\mu}_{n}+(b-a) \sqrt{\frac{1}{2 n} \log \left(\frac{2}{\delta}\right)}, b\right)\right]
$$

is a $(1-\delta)$-CI for $\mu$.

- Note that samples could have different distributions.
- Result is valid for a fixed $n$ that does not depend on data (e.g., $n$ is not determined by a stopping rule).
- Extension beyond fixed $n$ using time-uniform confidence intervals.
### s1 and s2
found in MLA notes directory

# Hoeffding's
[[Markov (Mark) & Chebyshev (Chebysjov)#Hoeffding's Inequality|Hoeffding from wiki]]
