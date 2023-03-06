# Logical propositions 
A proposition or statement is a declarative sentence that is either true or false. examples: 25|5 is true. GCD(24,18) = 4 is false

Non examples: math is beautiful(subjective), is it your birthday?(a question) or have some cake(not a declaration).

p,q og r bliver brugt som propositional variables, til at repræsenter propositions

We can combine propositions using logical  operations $(∧, ∨, ~, \Rightarrow,  \Leftrightarrow, etc.)$ to get new ones

$\equiv$ betyder logical equivalence, det betyder at to statements har samme logical truth values. hvis man skrev de 2 statements ud på et truth table skal alle truth værdier være ens.  
# Logical operations 
![[Four-Venn-Diagrams-of-Boolean-Logic.png|200]]
## AND OR NOT
AND: Både p og q skal være sand for at statement bliver true, p ∧ q er det samme som p and q. 
OR: Bare en af dem skal være sand, p eller q, eller begge p ∨ q
NOT: Giver den modsatte truth value af et logical statement, hvis p er sand så er ~p falsk.
### Regler 
#### Properties involving AND, OR, NOT [thm 2.2.1 KBR]
$p \vee q \equiv q \vee p$
$p \wedge q \equiv q \wedge p$
$p \vee(q \vee r) \equiv(p \vee q) \vee r$
$p \wedge(q \wedge r) \equiv(p \wedge q) \wedge r$
$p \vee p \equiv p$
$p \wedge p \equiv p$
$\sim(\sim p) \equiv p$
##### De Morgans law:
$\sim(p \vee q) \equiv(\sim p) \wedge(\sim q)$
$\sim(p \wedge q) \equiv(\sim p) \vee(\sim q)$
##### Identity laws:
$p \vee c \equiv p$
$p \wedge t \equiv p$
##### universal bound laws:
$p \vee t \equiv t$
$p \wedge c \equiv c$

c = contradiction 
t = tautology
### Eksempel
Her bruges de forskellige regler til at omskrive et logical statement
$(\sim(p \vee \sim q)) \wedge t$
$\equiv(\sim p \wedge \sim(\sim q)) \wedge  t$
Via Demorgan's 
$\equiv(\sim p \wedge q)) \wedge t$
Via double negative
$\equiv \, \sim p \wedge q$
Via Identity
## XOR
EXCLUSIVE OR, kun 1 må være sand. P XOR Q er kun sand hvis p er sand og q er falsk eller omvendt 
![|200](https://i.imgur.com/q4kyCqU.png)

## Implication 
$\Rightarrow$: if then, p $\Rightarrow$ q: if p then q
$\Leftrightarrow$: if an only if, p $\Leftrightarrow$ q: if p and only if q
![|300](https://i.imgur.com/hjQ6Jc7.png)
#### Properties invloving $\Rightarrow$ and $\Leftrightarrow$ [Thm. 2.2.2]
$(p \Rightarrow q) \equiv((\sim p) \vee q)$
$(p \Rightarrow q) \equiv((\sim q) \Rightarrow(\sim p))$
$(p \Leftrightarrow q) \equiv(p \Rightarrow q) \wedge(q \Rightarrow p)$
$\sim(p \Rightarrow q) \equiv(p \wedge(\sim q))$
$\sim(p \Leftrightarrow q) \equiv(p \wedge(\sim q)) \vee(q \wedge(\sim p))$
# Predicates
Det er et deklarativt  udsagn hvis sandhed afhænger af Variablerne P(x), her er P en predicate hvis sandhed afhænger af x 
$S' = \{x\in S |P(x)\}$, S' alle x der i S hvor p(x) er sand.

$\{x\in \mathbb{Z}|P(x)\}=\{x\in \mathbb{Z} |x>0\}=\{1,2,3,4,...\} = \mathbb{Z}^+$
Her er det deklartive udsagn $p(x)=x>0$

x is in integers and is bigger than 0, therefore x is the set of positive integers.
# Truth tables 
En måde at tjekke truth values for logical statements
![|300](https://i.imgur.com/hjQ6Jc7.png)
Tautology: A statement that is true for all possible values of its propositional variables [[Rule of inference]] bruger tautology 

Contradiction: A statement that is false for all possible values of its propositional variables

Circle dot: Et sæt af truthvalues som man selv bestemmer, så jeg kunne vælge cirkledot til at have samme truth values som implication, xor eller noget helt andet. 

![Truth table depicting relationships between Boolean values.](https://content.codecademy.com/courses/updated_images/Boolean%2Boperators%2Bdk_Updated_1-01.svg)