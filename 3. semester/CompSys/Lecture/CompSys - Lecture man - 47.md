---
date: 20-11-23
day: man
week: 47
year: 2023
type: Lecture
course: CompSys
status: 
semester: 2
tags:
  - Networking
Summary: Avoiding deadlocks and raise conditions
---
##### Weekly note
[[Uge 47 - 2023]]

# 
![](https://i.imgur.com/0MvgbSy.png)
![](https://i.imgur.com/bHnt1u5.png)
![](https://i.imgur.com/lp1ba8a.png)
![](https://i.imgur.com/E4pFssZ.png)
![](https://i.imgur.com/tump3ct.png)

**Easy to draw! (mostly).** Most applications are ‘symetrical’, and if they aren’t they probably should be.

**We can ignore any non-blocking code.** Anything that completes in a finite time can be ignored.

**We only need to plot two axis’ (mostly).** It doesn’t matter if we have 2 processes or 2 million. The same logical dependency exists between them.

**When in doubt, draw a diagram!** We often can’t prove that we have avoided deadlock, but a diagram can be a short-hand for showing how its impossible, _if our diagram reflect our code_.