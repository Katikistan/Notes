---
date: 12-02-24
day: man
week: 7
year: 2024
type: Wiki
course: AD
status: open
semester: 4
tags: 
Summary: ""
---
##### Weekly note
[[Uge 7 - 2024]]

Describes the overall running time on a problem of size n in terms of the running time of the same algorithm on smaller inputs

Let $T(n)$ be the worst-case running time on a problem of
size $n$. If the problem size is small enough, say $n < n_0$ for some constant $n_0 > 0$, the straightforward solution takes constant time.

division of the problem yields a subproblems, each with size $n/b$, that is, $1/b$ the size of the original.

It takes $T (n/b)$ time to solve one subproblem of size £, and so it takes $aT (n/b)$ time to solve all $a$ of them.

If it takes D(n) time to divide the problem into subproblems and C(n) time to combine the solutions to the subproblems into the solution to the original problem, we get the recurrence:
$$
T(n)= \begin{cases}\Theta(1) & \text { if } n<n_0 \\ D(n)+a T(n / b)+C(n) & \text { otherwise }\end{cases}
$$
 ignoring floors and ceilings does not generally affect the order of growth of a solution to a divide-and-conquer recurrence.

We omit a statement of the base cases of the recurrence (base case is almost alway $\Theta(1)$)
# 4.3  The substitution method 
Guess the form of the solution using symbolic constants.  

	Use mathematical induction to show that the solution works, and find the constants.
#  4.5 The master method
k = hvor mange n'er du har 
p = hvor mange p'er du har
![](https://i.imgur.com/MOpU35f.png)

![](https://i.imgur.com/NzUEpZQ.png)
# Rekursionstræ
![](https://i.imgur.com/nEni58b.png)

T(n)= 3T(n-1)+1 
splitter op i 3 subproblemer. Der er $3^k$ noder i lag k. 
Det koster 1 at løse hver knude. Base case T(1) = 1.
![](https://i.imgur.com/hq2ISBi.png)


## Rekursionsligninger på formen $T(n)=T(n-1)+f(n)$

En anden simpel måde at løse denne slags rekursionsligning er når du får en rekursionsligning på formen $T(n)=1 T(n-1)+f(n)$, hvor $f(n)$ er en eller anden funktion af $\mathrm{n}$ f.eks. $n^2$ eller $\log n$, kan man skrive en sum op:
$$
\sum_{i=1}^n f(i)
$$

Skriv ligningen for summen op og får din køretid.
Hvad er køretiden af $T(n)=T(n-1)+\log n$ :
$$
\sum_{i=1}^n \log i=\log 1+\log 2+\cdots \log (n-1)+\log n
$$

Bruger logaritme regneregel $\log a+\log b=\log (a \times b)$ :
$$
\log 1+\log 2+\cdots \log (n-1)+\log n=\log (1 \times 2 \times \cdots \times(n-1) \times n)
$$

Der gælder at $1 \times 2 \times \cdots \times n-1 \times n=n$ !:
$$
\log (1 \times 2 \times \cdots \times(n-1) \times n)=\log n !=n \log n
$$

Derfor får vi en køretid for $T(n)=T(n-1)+\log n$ er $O(n \log n)$