![](https://i.imgur.com/JXeZYLG.png)

	with repetitions and unordered: multisets
Counting multisets: proof of Thm 3.2.2
Proof idea: Correspondence between multisets with elements from $A=\left\{a_1, a_2, \ldots, a_n\right\}$ and strings.
For a multiset $B=[\overbrace{a_1, \ldots, a_1}^{k_1}, \overbrace{a_2, \ldots, a_2}^{k_2}, \ldots, \overbrace{a_n, \ldots, a_n}^{k_n}]$ the corresponding string is $s_B=\overbrace{1 \ldots 1}^{k_1} 0 \overbrace{1 \ldots 1}^{k_2} 0 \ldots 0 \overbrace{1 \ldots 1}^{k_n}$
Q: Suppose multiset B has size $r$.
- How many $1 s$ does the string $s_B$ contain?
- How many 0s does the string $s_B$ contain?


\section{Correspondence between subsets and n-bit strings}

Let $A=\left\{a_1, a_2, \ldots, a_n\right\}$. To a subset $B \subseteq A$ associate the $\mathrm{n}$-bit string
$b_1 b_2 \ldots b_n \quad$ where $b_i= \begin{cases}1 & \text { if } a_i \in B \\ 0 & \text { otherwise }\end{cases}$
Example. $A=\{1,2,3,4,5\}$

$\begin{tabular}{c|c|c|c|c} 
Subset & $\{2,3\}$ & $\varnothing$ & $\{4\}$ & $\{1,2,3,4,5\}$ \\
\hline String & 01100 & 00000 & 00010 & 11111
\end{tabular}$

Corollary.
$\left(\begin{array}{c}\text { The number of } n \text {-bit } \\ \text { strings with exactly } k \text { ones }\end{array}\right)=\left(\begin{array}{c}\text { The number of } \\ \text { size-k subsets of } A\end{array}\right)={ }_n C_k$



\section{Permutations with indistinguishable objects}
Q1: How many "words" can be made from the letters of "BOK"?
Ans1: 3! $=6$
Q2: How about "BOOO"? Is it $4 !=24$ ?
Ans2: $\frac{4 !}{3 !}=4 \quad$ BrgO,BrOg,BgrO, BgOr, BOrg, BOgr
r = red O
g = green O

Thm. The number of distinguishable permutations that can be formed from $n$ objects where the $1^{\text {st }}$ object appears $k_1$ times, the $2^{\text {nd }}$ object $k_2$ times and so on, is
$\frac{n !}{k_{1} ! k_{2} ! \ldots k_{t} !} \quad$ where $k_1+\ldots+k_t=n$
- Q3: How many "words" can be formed from the letters of "BOOKKEEPER"? Ans3: $\frac{10 !}{2 ! 2 ! 3 !}$


\section{Exercise}
An urn contains 8 red and 7 black balls. How many ways are there to choose 5 balls so that at least 2 are red.
Solution 1
- $X_i=\#$ of ways to choose 5 balls so that exactly $i$ are red.
- By Multiplication Principle, $X_i={ }_8 C_i \times{ }_7 C_{5-i}$
- The answer to the exercise is
$$
{ }_{15} C_5-X_1-X_0={ }_{15} C_5-{ }_8 C_1 \times{ }_7 C_4-{ }_8 C_0 \times{ }_7 C_5=2702
$$
Solution 2
Task 1: Choose 2 red balls $\left({ }_8 \mathrm{C}_2=28\right.$ ways $)$
Task 2: Choose 3 balls from the remaining 13 balls $\left({ }_{13} C_3=286\right.$ ways)
- By Multiplication Principle, we have $28 \cdot 286=8008$ ways

$$ \binom{500 + n - 1}{n - 1} $$
--- 
Tags: #open
check uge 16 fredag 