---
date: 19-02-24
day: man
week: 8
year: 2024
type: Wiki
course: AD
status: open
semester: 4
tags:
Summary: ""
---
##### Weekly note
[[Uge 8 - 2024]]

# LSM-træer
- Alternative søgetræer, meget brugt i praksis
- Idé (simpleste udgave):
- Sorterede lister $L_i$ for $i=0,1,2, \ldots$
- Liste $L_i$ indeholder 0 eller $2^i$ elementer
- Største liste indeholder $N \leq n$ elementer
- $\operatorname{search}(x)$ : Binær søgning i alle lister, tid
$$
\sum_{i=1}^{\lg N} \log \left(2^i\right)=\sum_{i=1}^{\lg N} i=O\left((\lg n)^2\right)
$$