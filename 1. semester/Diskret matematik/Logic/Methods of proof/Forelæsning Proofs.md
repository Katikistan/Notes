Exhaustive at alle tillfælde er dækket 
prove that in every set S 6 people there are:
1. at least 3 mutual strangers OR
2. at leas 3 mutal friends 
3. 
contradiction assume that neither 1 or 2 holds.  

so P has at most 2 friends an p is strangers to at least two people in A. this ammounts to 5 people but A contains 6 people. therefore there is a contradiction and therefore this is exhaustive and 1 or 2 most hold

Case1: 
assume that P has at least 3 friends f1, f2, f3 in A
if there is a pair of friends F''i, F'' in {F1, F2, F3} then P, F', F'' are 3 mutual friends

if there are no friends among F1, F2, F3, then they represent 3 mutual strangers. 

Case 1: assume that P is stranger to S1, S2, S3 in A

if we can find a pair of strangers S', S'' in {S1,S2,S3} then P,S',S'' are 3 mutual strangers. 
otherwise {S1,S2,S3} are mutual friends. 

Since we have analized all case we are done with the proof **QED** 
[[Friends and strangers]]

## Proving vs disproving
An x which invalidates “$\forall x \in S \, P(x)$” is called a counterexample.  
To disprove a “for all”-type statement, we only need one counterexample 

For at bevise at dette er sandt er vi nødt til at bevise at det er sandt for hver x, men hvis vi vil disprove skal vi kun finde et x som invalidater altså et counterexample. 

![[Pasted image 20221025134247.png|300]]
fordi man kan sætte y til at være negativ og så har begge sider ikke samme logiske værdi. 

![[Pasted image 20221025134558.png|350]]
find counterexample: a=2,b=3,d=6


## axomatic method
	Postulate a number of axioms.  
	Prove new statements from axioms and previously proven statements.  
Proof is a sequence of logical deductions (valid arguments).

hvis dette er sandt:
p ⇒ q
er p så sandt: Nej det kunne også være tillfældet de begge er false og derved bliver true fordi false implies false er true. 

hvis vi ved at p ⇒ q er sandt, men at p er falsk så må det være at q må være true. 
hvis vi ved at  p ⇒ q sandt og p er sandt så må vi have at q også er sandt fordi man kun har p ⇒ q er sandt hvis 


proving a tautology: draw a truth table. 


# Asymptotic 
informally we can think of  f is O(g) as f <= g
Formal definition F is O(g):
they take positive reals and gives reals 
![[Pasted image 20221025142825.png|400]]
![[Pasted image 20221025142958.png|250]]

$x^3+12x-3 \leq c \cdot (x^3)$
$0 \leq c \cdot (x^3) - (x^3+12x-3)$

det er en thought process ikke a proof 
show that f is O(g) using the definiton of bg O
rewrite as polynomial. find the roots. for at finde x 

plot the roots and we have a root at zero and some where in the positive side beacuse we have said that c wil be bigger than 0. 

idea try c = 1. and x0 = 2


---
hvis jeg ønsker at disprove noget hvordan vælger jeg et n så jeg kan disprove det
$n^2+41n+41$
her kan man bruge 41 fordi man ved at
$41^2+41 \cdot 41 +41=3403$
det kan divideres med 41 og giver 


----
### code block
	why this
	typografi 
ee

how  to make tables 
how to quick math
tags og links: 
håndter de mange billeder.
obsidian : <c
			  w

