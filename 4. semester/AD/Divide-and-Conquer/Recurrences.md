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
# 4.4  The recursion-tree method 
#  4.5 The master method
