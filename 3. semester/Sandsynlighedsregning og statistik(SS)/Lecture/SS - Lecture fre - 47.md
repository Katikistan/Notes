---
date: 24-11-23
day: fre
week: 47
year: 2023
type: Lecture
course: SS
status: 
semester: 2
tags:
Summary: ""
---
##### Weekly note
[[Uge 47 - 2023]]

# Sandsynlighedsmål
![](https://i.imgur.com/XOK7xhd.png)
## Regneregler for sandsynlighedsmål
**Theorem 1.6.2: Regneregler for sandsynlighedsmål**
Lad $P$ være et sandsynlighedsmål på $S$, og lad $A, B, A_1, \ldots, A_n \subseteq S$ være hændelser. Så gælder
(1) $P\left(A^c\right)=1-P(A)$.
(2) Hvis $A \subseteq B$, så gælder $P(A) \leq P(B)$.
(3) $P(A \cup B)=P(A)+P(B)-P(A \cap B)$.
(4) Hvis $A_i \cap A_j=\emptyset$ for alle $i \neq j$, så gælder
$$
P\left(\bigcup_{i=1}^n A_i\right)=\sum_{i=1}^n P\left(A_i\right)
$$
Bevis:  
1 Tegn hændelserne.  
2 Find opdeling i disjunkte mængder.  
3 Brug egenskab (3) fra Definition 1.6.1.
![](https://i.imgur.com/WGs6fUR.png)
# Betinget sandsynlighed
**Definition 2.2.1: Betinget sandsynlighed**
Lad $A, B \subseteq S$ være to hændelser således at $P(B)>0$. Den betingede sandsynlighed $P(A \mid B)$ for $A$ givet $B$ er defineret ved
$$
P(A \mid B)=\frac{P(A \cap B)}{P(B)} .
$$
Fortolkning:
- $P(A \mid B)$ er sandsynligheder for at $A$ indtræffer hvis vi ved at $B$ er indtruffet.
- $P(B \mid B)=1$, hvilket svarer til at vi indskrænker udfaldsrummet fra $S$ til $B$.

**Theorem: Betinget sandsynlighed**
Lad $B \subseteq S$ være en hændelse med $P(B)>0$. Så er $P(\cdot \mid B)$ et sandsynlighedsmål på $B$.
## Eksempel
![](https://i.imgur.com/CpxgwIU.png)
tager den samlet sandsyndlighed 25/204 og dividere med P(B) dvs
A = kort 2 er rødt, B = kort 1 er en hjerter
$$P(A|B)\frac{\frac{25}{204}}{\frac{1}{4}}$$
A = kort 1 er en hjerter, B = kort 2 er rødt
$$\frac{\frac{25}{204}}{\frac{1}{2}}$$
# Law of total probability (LOFTP) - Loven om total sandsynlighed
# Bayes’ formel
# Uafhængighed
