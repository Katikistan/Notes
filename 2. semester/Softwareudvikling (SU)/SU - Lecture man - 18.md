---
date: 01-05-23
day: man
week: 18
year: 2023
type: Lecture
course: SU
status: 
semester: 2
tags:
Summary: "COCOMO, software metrics, white box and black box metrics, Complexity, Function Points, coupling"
---
##### Weekly note
[[Uge 18 - 2023]]

#  Code complexity
S/W project planning consists of two primary tasks:
- analysis 
- estimation (how long will this take, cost etc.)
its important to plan s/w dev failure is often due to poor planning(being to optimistic), like triple A game studios that fail to deliver a good game beacuse they think it can be done quick.
## Software metrics
Black box, you cant look at the code, you use specification to create tests. like if youre were to use a libary an verify it works like the doc says.
Black Box Metrics  
	• Function Points  
	• COCOMO
	used for cost estimation (take you cost estimation, multiply by 4 or 8)

White Box Metrics  
	• Lines of Code (LOC)  
	• Halstead’s Software Science (skipped)  
	• McCabe’s Cyclomatic Complexity  
	• Information Flow Metric  
	• Syntactic Interconnection  
	• Structural Coupling  
	• Semantic Coupling  
	• Object-oriented metrics  
	used for testing effort  and maintainability effort

Complete testing generally *impossible* => **set priorities.**
Focus on particularly **error-prone** parts of the software! identify in breakout

**How to efficiently identify these parts ?**
- Determine the complexity of the software components with metrics
- Abnormal values can  indicate quality problems  => test more intensively.
![](https://i.imgur.com/tMLYRcG.png)
Risks in estimation can be illustrated as:
![|300](https://i.imgur.com/edLafM6.png)

essential complexity is complexity that come using algorithms that have a certain time complexity and is unavoidable, accedental complexity is complexity coming form using unoptimized soultions, using inefficent frameworks such as DIKUArcade. 
![](https://i.imgur.com/tCFexiM.png)
or using a bad paradigm or program language can at accedential compexity, like using a functional language for matrix multiplication, this is inefficent, a language like python would be more efficient
## Forms of software complexity
![](https://i.imgur.com/jbUZZ4R.png)
Textual complextity : how hard it is to write the code, like using a program like C to program a program that object oriented would add huge textual complexity 
## Black Box Metrics
We examine the following metrics and their potential  
use in software testing and maintenance.  
- Function Oriented Metrics  
	• Feature Points  
	• Function Points  
- [[#COCOMO]]
## Function Oriented Metrics
![](https://i.imgur.com/yst4aLI.png)
## Function Points
![](https://i.imgur.com/3xQcDiw.png)
The following relationship is used to compute function points:
$$
F P=\text { total } \_ \text {weight } \times\left[0.65+0.01 \times \operatorname{SUM}\left(F_i\right)\right]
$$
$F_1$ , det complexiteten af en funktion, man vurderer selv complexiteten, summen af alle disse  bruges så til at beregne FP(FUNCTION POINT). man vælger $F_1$ til at være et tal mellem 1 og 14. i store virksomheder kan det være op på 500.
### eksempel
![](https://i.imgur.com/wlT9pUP.png)
![](https://i.imgur.com/HvNR4Xt.png)
![Uploading file...rqufz]()
## COCOMO -  Computability and Complexity modelling
![](https://i.imgur.com/YHy01Hx.png)
**It is:**
![](https://i.imgur.com/m61UfMH.png)
### eksempel
Model : basic, you estimate KDSI by looking at similar project, exclude holidays, places such as denmark have more holiday. TDEV is the development time. 
![](https://i.imgur.com/rAGELai.png)
![|300](https://i.imgur.com/8bWGQGN.png)

![|350](https://i.imgur.com/goXscXI.png)
**Model 2 : intermediate, simple intermediate is usaly sufficient**
![](https://i.imgur.com/qoKt3Ck.png)
[](https://i.imgur.com/hpQWlrV.png)
![](https://i.imgur.com/6vgouGm.png)
![](https://i.imgur.com/HSBRSNc.png)
We dont say anything about real complexity in basic, but we do in the intermediate. 
These estimate can help determine if it would be worthwhile to continue with a costumer to develop a system. 
# COCOMO - Four attributes
det kan bruges til at vurdere din egen DIKUArcade implementation
![](https://i.imgur.com/i5SP4ZT.png)
# White box metrics - vigtigt til eksamen
![](https://i.imgur.com/OZJARcn.png)
![](https://i.imgur.com/iISxmOA.png)
## Linguistic Metrics
![](https://i.imgur.com/m9kVyxa.png)
### LOC
![|300](https://i.imgur.com/csmKfnO.png)
![](https://i.imgur.com/k0AoJk9.png)
#### LOC vs Functionpoints
## Structural Metrics
![](https://i.imgur.com/z2NcWie.png)
### Cyclomatic Complexity
![](https://i.imgur.com/RcOIAbR.png)
![](https://i.imgur.com/qI785l9.png)
![](https://i.imgur.com/vdz2NEH.png)
![](https://i.imgur.com/ktrMNMg.png)
![](https://i.imgur.com/ZGFy4d2.png)
partly measured complexity that is high and acceptable could be due to essential complexity.

how do you determine you did enough tests: i Assesed the cyclomatic complexity (exam)
![](https://i.imgur.com/ZlKyK87.png)
![](https://i.imgur.com/3PDfbh0.png)
### Information Flow Metric
![](https://i.imgur.com/G9qUOwX.png)
![](https://i.imgur.com/MpJjabE.png)
how many modules gives something in and how many modules take something out
for example a function: a function could take 2 int parameters (2 fan in) and give a single in output (1 fan out)
why is it squared, how many edges can a full graph have? $n \cdot n-1$ those are the connections that can be drawn between edges thats why squared. $C_p$ is the worst case
# Code shape: degree of coupling
Coupling in DIKUArcade
![](https://i.imgur.com/WxW9X3h.png)
![](https://i.imgur.com/ZUzFl3D.png)
![](https://i.imgur.com/zU4ivJr.png)
## Semantic coupling
![](https://i.imgur.com/8bobLZl.png)
## Object oriented metrics
![](https://i.imgur.com/r001DLV.png)
![](https://i.imgur.com/Ry9qwJk.png)
![](https://i.imgur.com/9pzkly7.png)

# Keypoints
![](https://i.imgur.com/Whbxp3t.png)
