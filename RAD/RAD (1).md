# Monte Carlo & Las Vegas
## Monte Carlo
Some probability of error. Running time may be  
random or not.  
**Two-sided error:** non-zero probability of failure  
when it outputs either true or false  

**One-sided error:** probability of failure is 0 for at  
least one of the two possible outputs (true/false)
## Las Vegas 
Always returns correct answer. 

Running time is a  random variable.

A Las Vegas algorithm is by definition a Monte Carlo algorithm with error probability 0.
# Random Quicksort 
![|400](https://i.imgur.com/UNqorIu.png)
**What is the expected number of comparisons?**
Lad være et sorteret array: $[S(1) , . . . , S(n) ]$ := RandQS(S).
For $i < j$ let $X_{ij}$ be the number of times that $S_{(i)}$
and $S_{(j)}$ are compared. Observe that $X_{ij} \in \{0, 1\}$.
Now,

Number of comparisons = $X=\sum_{i<j}X_{ij}$ 
hver $X_{ij}$ er en indikator variabel 
$$\sum_{i<j}=\sum_{1<i<j<n'}=\sum^{n-1}_{i=1}\sum^n_{j=i+1}$$ 


$\mathbb{E}[\#Comparisons]=\mathbb{E}[X]=\mathbb{E}[\sum_{i<j}X_{ij}]=\sum_{i<j}\mathbb{E}[X_{ij}]$

Linearity of expectation

Let $p_{ij}$ be the probability that $S_{(i)}$ and $S_{(j)}$ are compared, i.e., $p_{ij} = Pr[X_{ij} = 1]$. Then
$$\mathbb{E}[X_{ij}]=\sum_xxPr[X_{ij}=x]=$$
Det er en indikator variabel! forventningen er sandsynligheden for den er 1. 
$$0\cdot Pr[X_{ij}=0]+1\cdot Pr[X_{ij}=1]=p_{ij}$$
$\mathbb{E}[\#Comparisons]=\mathbb{E}[X]=\mathbb{E}[\sum_{i<j}X_{ij}]=\sum_{i<j}\mathbb{E}[X_{ij}]$
## Bevis 
Hvert rekursive kald til RQS returnerer en sorteret liste 
$[S_{(a)} , . . . , S_{(b)}]$. lad $x = S_{(c)}$ være pivot i det rekursive kald.

Suppose $a \leq i < j \leq b$.
![|300](https://i.imgur.com/MJ7GPty.png)

$c < i ~or~ c > j:$ $S_{(i)}$ og $S_{(j)}$ not compared now, but
together in recursion.
$i < c < j$: $S_{(i)}$ and $S_{(j)}$ never compared.

$c = i ~or~ c = j:$ $S_{(i)}$ and $S_{(j)}$ compared once.

Thus, $p_{ij}$ is the conditional probability of picking $S_{(i)}$
or $S_{(j)}$ given that the pivot is picked uniformly at
random in {$S_(i)$ , $S_(i+1)$ , . . . , $S_(j)$ }:

$$p_{ij} = Pr[c \in {i,j}|c \in {i, i + 1, \cdots , j}]=$$
$$\frac{|\{i,j\}|}{|\{i,i+1,\cdots,j\}|}=$$
$$\frac{2}{j-i+1}$$
Det følger at 
$\mathbb{E}[\#Comparisons]=\sum_{i<j}p_{ij}=\sum_{i<j}\frac{2}{j-i+1}$

$$\mathbb{E}[X]=\sum_{i<j}\frac{2}{j-i+1}=\sum^{n-1}_{i=1}\sum^n_{j=i+1}\frac{2}{j-i+1}=$$
$$\sum^{n-1}_{i=1}(\frac{2}{2}+\frac{2}{3}+\frac{2}{4}+\cdots+\frac{2}{n-i+1})<$$
$$\sum^n_{i=1}(\frac{2}{1}+\frac{2}{2}+\frac{2}{3}+\cdots+\frac{2}{n})=$$
$$2\sum^n_{i=1}\sum^n_{k=1}=$$
$H_n=\sum^n_{k=1}\frac{1}{k}$ kaldes det n'te harmoniske nummer. 
$$2\sum^n_{i=1}H_n=$$
Proposition B.4: $H_{n}=\ln n +\Theta(1) \in O(\log n)$
$$2nH_n\in O(n\log n)$$

When $|S| = n$, the expected number of comparisons
done by RandQS(S) is at most $2nH_{n} \in O(n log n)$
for any input.

Even stronger (see Problem 4.14), we can show that
the number of comparisons is O(n log n) with high
probability. High probability means probability at least 1 − 1/n.
# Min-cut
