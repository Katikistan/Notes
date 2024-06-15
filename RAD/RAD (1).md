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
fordel er at den ikke har svaghed overfor input
![|400](https://i.imgur.com/UNqorIu.png)
**What is the expected number of comparisons?**
Lad være et sorteret array: $[S(1) , . . . , S(n) ]$ := RandQS(S). 
Det er efter man har kaldt randomized quicksort.

For $i < j$ lad $X_{ij}$ være antallet af gange $S_{(i)}$
og $S_{(j)}$ er blevet sammenlignet.  $X_{ij} \in \{0, 1\}$ den er en indikator variabel fordi 2 elementer bliver kun sammenlignet når det ene element er pivot element og når vi så laver et rekursivt kald vil der blive lavet 2 del-lister fordi vi laver partition, ingen af del-listererne kommer til at indeholde pivot elementet.

Number of comparisons = $X=\sum_{i<j}X_{ij}$ 
hver $X_{ij}$ er en indikator variabel 
$$X=\sum_{i<j}X_{ij}=\sum_{1<i<j<n'}X_{ij}=\sum^{n-1}_{i=1}\sum^n_{j=i+1}X_{ij}$$
Vi kigger på alle j der er større end i dvs vi kigger på $j=i+1$ op til n. vi summer til n-1 i den anden sum ellers ville der ikke være nogen j'er der er større end i. 


Linearity of expectation
$\mathbb{E}[\#Comparisons]=\mathbb{E}[X]=\mathbb{E}[\sum_{i<j}X_{ij}]=\sum_{i<j}\mathbb{E}[X_{ij}]$

lad $p_{ij}$ være sandsynligheden for at $S_{(i)}$ og $S_{(j)}$ bliver sammenlignet, i.e., $p_{ij} = Pr[X_{ij} = 1]$. så gælder der
$$\mathbb{E}[X_{ij}]=\sum_xxPr[X_{ij}=x]=$$
Det er en indikator variabel! forventningen er sandsynligheden for den er 1. 
$$0\cdot Pr[X_{ij}=0]+1\cdot Pr[X_{ij}=1]=p_{ij}$$
Derved gælder der
$\mathbb{E}[\#Comparisons]=\mathbb{E}[X]=\mathbb{E}[\sum_{i<j}X_{ij}]=\sum_{i<j}\mathbb{E}[X_{ij}]=\sum_{i<j}p_{ij}$
## Bevis 
Hvert rekursive kald til RQS returnerer en sorteret liste 
$[S_{(a)} , . . . , S_{(b)}]$. lad $x = S_{(c)}$ være pivot i det rekursive kald.

Formod at i og j er i blandt en af indexerne, her har vi en sorteret rækkefølge: $a \leq i < j \leq b$.
![|300](https://i.imgur.com/MJ7GPty.png)

Hvordan kan vi vælge pivot element c: 

**Case 1:** $c < i ~eller~ c > j:$ $S_{(i)}$ og $S_{(j)}$ ikke sammenlignet nu, men
sammen i rekursions kald. de kan bliver sammenlignet i undertræ

**Case 2:** $i < c < j$: $S_{(i)}$ og $S_{(j)}$ aldrig sammenlignet. pivot ligger i mellem i og j. så ryger i og j ned i hvert sit undertræ. derfor kan de aldrig sammenlignes. 

**Case 3:** $c = i ~eller~ c = j:$ $S_{(i)}$ og $S_{(j)}$ sammenlignet en gang.

derved, er $p_{ij}$ den betinget sandsynlighed for at vælge $S_{(i)}$
eller $S_{(j)}$ som pivot, givet at pivotet bliver valgt uniformt tillfældigt i
{$S_{(i)}$ , $S_{(i+1)}$ , . . . , $S_{(j)}$ }: altså som vi ser i case 3

sandsynligheden for at vi vælger pivot til at være $S_{(i)}$ eller $S_{(j)}$ givet vi har valgt vores pivot i blandt {$S_{(i)}$ , $S_{(i+1)}$ , . . . , $S_{(j)}$ }, hvis vi vælger udfra den liste ved vi at de ikke bliver sammenlignet i den nuværende rekursion:
$$p_{ij} = Pr[c \in {i,j}|c \in {i, i + 1, \cdots , j}]=$$
$$\frac{|\{i,j\}|}{|\{i,i+1,\cdots,j\}|}=$$
Der er 2 muligheder for c og vi skal dividere med antallet af muligheder for c i denne mængde $\{i,i+1,\cdots,j\}$ 
$$\frac{2}{j-i+1}$$
Det følger at 
$\mathbb{E}[\#Comparisons]=\sum_{i<j}p_{ij}=\sum_{i<j}\frac{2}{j-i+1}$

$$\mathbb{E}[X]=\sum_{i<j}\frac{2}{j-i+1}=\sum^{n-1}_{i=1}\sum^n_{j=i+1}\frac{2}{j-i+1}=$$
$$\sum^{n-1}_{i=1}(\frac{2}{2}+\frac{2}{3}+\frac{2}{4}+\cdots+\frac{2}{n-i+1})<$$
Da vi er intresseret i en øvregrænse på køretiden lader vi brøken starte på 1 og lader den gå op til n. derved får vi flere brøker med da vi både har 2/1 med og $n>n-i+1$
$$\sum^n_{i=1}(\frac{2}{1}+\frac{2}{2}+\frac{2}{3}+\cdots+\frac{2}{n})=$$
Den inderste sum kan forsimples. 
$$2\sum^n_{i=1}\sum^n_{j=1}1/j=$$
$H_n=\sum^n_{k=1}\frac{1}{k}$ kaldes det n'te harmoniske nummer. 
$$2\sum^n_{i=1}H_n=$$
Proposition B.4: $H_{n}=\ln n +\Theta(1) \in O(\log n)$
Derved får vi 
$$2nH_n\in O(n\log n)$$

Når $|S| = n$, det forventet antal af sammenligninger i  RandQS(S) højst O(n log n) for ethvert input. 
# Min-cut
Problem: Given a connected graph $G = (V, E)$
Find smallest C ⊆ E that splits G. C is called a min-cut, and λ(G ) := |C| is the min-cut size (also called the edge connectivity of G ).
![[Pasted image 20240614160453.png]]

den trækker en edge sammen, dvs at vertexes der er forbundet med en edge bliver trukket sammen.

RandMinCut(G ) may return any cut. In particular, it may return a cut of size > λ(G).

A specific min-cut C is returned iff no edge from C
was contracted.
## Bevis
For any min-cut C , the probability that 
RandMinCut(G ) returns C is $\geq \frac{2}{n(n−1)}$ 

Let $e_1 , \cdots , e_{n−2}$ be the contracted edges, let 
$G_0 = G~and~ G_i = G_{i−1} /e_i$

C is returned iff we have the event E1 ∩ . . . ∩ En−2 .
Let $\mathcal{E}_{i}$ be the event that $e_{i} \notin C$.
$C$ is returned iff we have the event $\mathcal{E}_{1} \cap \ldots \cap \mathcal{E}_{n-2}$.
 $\mathcal{E}_{1} \cap \ldots \mathcal{E}_{n-2}$ is thus the event that $C$ is not destroyed in any step of the algorithm.
 
$$
\begin{aligned}
& \operatorname{Pr} {[C \text { returned }] } \\
& \quad=\operatorname{Pr}\left[\mathcal{E}_{1} \cap \cdots \cap \mathcal{E}_{n-2}\right] \\
& \quad=\prod_{i=1}^{n-2} \operatorname{Pr}\left[\mathcal{E}_{i} \mid \cap_{j=1}^{i-1} \mathcal{E}_{j}\right] \\
&=\prod_{i=1}^{n-2} p_{i} \quad \text { where } p_{i}=\operatorname{Pr}\left[\mathcal{E}_{i} \mid \cap_{j=1}^{i-1} \mathcal{E}_{j}\right]
\end{aligned}
$$
Because any cut in the contracted graph is also a cut in the  original graph.


- Note that the edges incident to a vertex $v$ form a cut and so $d_{i}(v) \geq \lambda\left(G_{i}\right) \geq|C|$. 
- Note that the edges incident to a vertex $v$ form a cut and so $d_{i}(v) \geq \lambda\left(G_{i}\right) \geq|C|$.
- We use that each edge is counted twice in the sum $\sum_{v \in V_{i}} d_{i}(v)$.


Let $i \in\{0,1, \ldots, n-2\}$.
$G_{i}=\left(V_{i}, E_{i}\right)$ has $n_{i}=n-i$ vertices.
Since contractions cannot decrease the min-cut size,
 $\lambda\left(G_{i}\right) \geq|C|$.
 It follows that the degree $d_{i}(v)$ of each vertex $v$ in $G_{i}$ is at least $|C|$.
 Summing up all degrees of $G_{i}$,
 $$
\left|E_{i}\right|=\frac{1}{2} \sum_{v \in V_{i}} d_{i}(v) \geq \frac{1}{2} n_{i}|C| .
$$

We have shown. 
$$
1-p_{i} \leq \frac{2}{n-i+1}
$$
We have shown that for each $i \in\{0,1, \ldots, n-2\}$, $G_{i}=\left(V_{i}, E_{i}\right)$ has $n_{i}=n-i$ vertices and that $\left|E_{i}\right| \geq \frac{1}{2} n_{i}|C|$ The probability of the bad event of picking an edge of $C$ in the ith iteration, given that no edge of $C$ has been picked in a previous iteration, is

$1-p_{i}=\operatorname{Pr}\left[\right.$ uniformly random $e \in E_{i-1}$ is in $\left.C \mid \cap_{j=1}^{i-1} \mathcal{E}_{j}\right]$
$$
=\frac{|C|}{\left|E_{i-1}\right|} \leq \frac{|C|}{\frac{1}{2} n_{i-1}|C|}=\frac{2}{n_{i-1}}=\frac{2}{n-(i-1)}
$$
$\Rightarrow p_{i} \geq 1-\frac{2}{n-i+1}=\frac{n-i-1}{n-i+1}$




$$
\begin{aligned}
& \operatorname{Pr}[C \text { returned] } \\
& =\prod_{i=1}^{n-2} p_{i} \text { where } p_{i}=\operatorname{Pr}\left[\mathcal{E}_{i} \mid \mathcal{E}_{1}\right. \\
& \geq \prod_{i=1}^{n-2} \frac{-i-1}{n-i+1} \\
& =\frac{n-2}{n} \cdot \frac{n-3}{n-1} \cdot \frac{n-4}{n-2} \cdots \frac{3}{5} \\
& =\frac{2}{n(n-1)}
\end{aligned}
$$

$$
\begin{aligned}
& \text { So for min-cut } C, \operatorname{Pr}[C \text { is returned }] \geq \frac{2}{n(n-1)} \text {. } \\
& \text { Hence, } \\
& \operatorname{Pr}[\text { some min-cut is returned }] \geq \operatorname{Pr}[C \text { is returned }] \geq \frac{2}{n(n-1)} \text {. }
\end{aligned}
$$

Imagine calling RAndMinCut(G) $t \frac{n(n-1)}{2}$ times
 and taking the smallest cut returned.
 $$
\begin{aligned}
\operatorname{Pr}[\text { not a min-cut }] & \leq\left(1-\frac{2}{n(n-1)}\right)^{t \frac{n(n-1)}{2}} \\
& \leq\left(e^{-\frac{2}{n(n-1)}}\right)^{t \frac{n(n-1)}{2}} \\
& =e^{-t}
\end{aligned}
$$
This uses that $1+x \leq e^{x}$ for all $x \in \mathbb{R}$


In each call to RandMinCut( $G$ ), the probability that a min-cut is not returned is at most $1-\frac{2}{n(n-1)}$. Since the calls to RandMinCut( $G$ ) are independent of each other, the probability that no min-cut is among the cuts returned is the product. Choosing e.g. $t=21$ we reduce the error probability to around one in a billion. Choosing $t=c \ln n$ for constant $c \geq 1$, the algorithm is correct with high probability, namely probability at least  $1-e^{-c \ln n}=1-1 / n^{c} \geq 1-1 / n$. We thus get a tradeoff between running time and probability of sucess