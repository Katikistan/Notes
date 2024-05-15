Udregn subproblem og gem svaret så det kan genbruges. det kan f.eks. være at man skal beregne fibonacci tal vil man gemme hver beregning af et fibonacci tal.
# Top-down 
Løs problemet "oppefra"ved rekursion. Gem hver løsning til et subproblem i fx en tabel/array, og benyt den
hvis det kommer igen.
# Bottom-up
Sorter delproblerme efter størrelse, og løs herefter problemerne efter størrelse først og gem dem i en tabel/array. Da de større problemer oftest kræver løsningerne til de små delproblemer, så kan de bare bruge detidligere svar. Dårlig løsning, hvis et problem ikke kræver alle mindre delproblemer løst, for så udregner den
"for mange"delproblemer.
![[Pasted image 20240408071439.png]]
# Rod cutting
Suppose we are given a rod $R$ of length $n$. 
- We want to cut $R$ up into pieces of certain lengths and sell these pieces.
- A piece of length $i$ earns us $p_i$ kr., where $i \in\{1, \ldots, n\}$.
- There is no cost in cutting $R$.
- What is the maximum revenue $r_n$ that we can obtain?
- finding optimal soultions requires soultions on several subproblems
![[Pasted image 20240408065757.png]]
**Naiv løsning:**
prøv alle cuts, se hvilke der giver højst problem

**Dynamisk programmering:**
![[Pasted image 20240408070820.png]]
Restricting OPT to $R_1$ must give an optimal solution to $R_1$. Because we assume we have the OPT soultion for R. 
![[Pasted image 20240408070020.png]]
![[Pasted image 20240408070027.png]]
P[i] er prisen
![[Pasted image 20240408071334.png]]
Hvordan finder man snit
![[Pasted image 20240408074459.png]]
## Eksempel 
Vi skærer stangen der er 9 lang på 1 
![[Pasted image 20240408071821.png]]
Vi skærer nu i stangen der er tilbage som er 8 lang
![[Pasted image 20240408071924.png]]
Der er 6 tilbage
![[Pasted image 20240408071945.png]]
## Eksempel
Hvis man har følgende stangværdier, for en stang med en længde på 4, og hvad vil den maksimale indtægt så være? Hvis længden af stængerne og priserne er som følger:
$$
\begin{array}{|c|c|}
\hline \text { Længde } & \text { Prise } \\
\hline 1 & 1 \\
\hline 2 & 5 \\
\hline 3 & 8 \\
\hline 4 & 9 \\
\hline 5 & 10 \\
\hline 6 & 17 \\
\hline 7 & 17 \\
\hline 8 & 20 \\
\hline
\end{array}
$$
Hvis der beregnes alle de mulige måder, hvor på man kan lave opdelingerne for at have en længde på 4, så
er de give som givet:
$$
\begin{array}{|l|l|}
\hline \text { Cut længde } & \text { samlede værdi } \\
\hline 4 \text { (i.e., no cuts) } & 9 \\
\hline \hline 1,3 & 1+8=9 \\
\hline 2,2 & 5+5=10 \\
\hline 3,1 & 8+1=9 \\
\hline 1,1,2 & 1+1+5=7 \\
\hline 1,2,1 & 1+5+1=7 \\
\hline 2,1,1 & 5+1+1=7 \\
\hline 1,1,1,1 & 1+1+1+1=4 \\
\hline
\end{array}
$$
Det kan ses at det bedste valg, for at få en længde på 4 med den højeste værdi, vil være 2 stykker af længden 2, hvilket giver: $p2 + p2 = 5 + 5 = 10$

Det vil sige at der kan skæres efter længde. Det betyder derfor at stangen kan skæres på 2n − 1 måder, da hver længde kan have et snit eller intet snit. Det kan afbilledes som:
$$
\begin{array}{|l|l|l|}
\hline 123 & \text { Cut Lengths } & \text { Value } \\
\hline 000 & 4 \text { (i.e., no cuts) } & 9 \\
\hline 100 & 1,3 & 1+8=9 \\
\hline 010 & 2,2 & 5+5=10 \\
\hline 001 & 3,1 & 8+1=9 \\
\hline 110 & 1,1,2 & 1+1+5=7 \\
\hline 101 & 1,2,1 & 1+5+1=7 \\
\hline 011 & 2,1,1 & 5+1+1=7 \\
\hline 111 & 1,1,1,1 & 1+1+1+1=4 \\
\hline
\end{array}
$$

	
# LCS 
$$
c[i, j]= \begin{cases}0 & \text { if } i=0 \text { or } j=0 \\ c[i-1, j-1]+w[x_i] & \text { if } i, j>0 \text { and } x_i=y_j \nwarrow\\ \max \{c[i-1, j], c[i, j-1]\} & \text { if } i, j>0 \text { and } x_i \neq y_{j} \\
~~~~~~~~~~~~~~~\leftarrow~~~~~~~~~\text{if }\leq then\uparrow\end{cases}

$$
Start i højre hjørne. Følg pilene indtil du rammer ud til en af de yderste med 0 og ingen pile. Derefter går du fra toppen og skriver det bogstav der er på udfra de skrå pile. Så"her er det N og A så NA er længeste fælles delsekvens  
![|350](https://i.imgur.com/cVrPGhO.png)
