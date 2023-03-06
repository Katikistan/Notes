Stort set alle matematiske theorems er baseret på implikationer af denne type:
$( p_1 ∧ p_2 ∧ · · · ∧ p_n ) ⇒ q$
$p_i$'erne er premiser og q er konklusionen. 

Når vi ønsker at bevise et theorem forsøger vi at bevise overstående er tautologi. Man ønsker her ikke at vise en konklusion (q) er sandt, men istedet at q er sandt hvis alle $p_i$'erne er sande. 

Man ville kunne starte med  " antag at $p_1,p_2,· · · p_n$ er sandt" og ville konkluderer med "derfor er q sandt." Man viser her at hvis $p_1,p_2,· · · p_n$ er sandt så må q være sandt.

Argumenter der er baseret på tautologier fungerer overbevisende når det kommer til at bevise at noget er sandt og er universelt accepteret som en korrekt måde at argumentere på. "Their validity depends only on the form of the statements involved and not  
on the truth values of the variables they contain.(KBR 2.3)"

Disse argumenter der er baseret på tautologier bliver kaldt "rules of inference"

p ⇔ q. They are usually stated p if and only if q.

The symbol ∴ means therefore
## Modus ponens (MPP)
A very important rule of inference is  
p  
p ⇒ q  
-------.
∴ q

Reglen er, p er sand, og p ⇒ q er sand, så q er sand. det får man fra theorem 4(g): 
∃x (P(x) ∧ Q(x)) ⇒ ∃x P(x) ∧ ∃x Q(x) is a tautology.
Det ved man fordi hvis man kigger på et [[Basics of logic#Implication|Truth table for implikationer]], så kan man se at hvis p er true så afhænger truth værdien af implikationen på q. 

Nogle rules of inference fik endda navne og dette theorem blev også kaldt modus ponens af de gamle scholars. 

## Modus tollens.  (MTT)
"If P, then Q. Not Q. Therefore, not P." It is an application of the general truth that if a statement is true, then so is its [contrapositive](https://en.wikipedia.org/wiki/Contrapositive "Contrapositive").

p ⇒ q  
~q
-------.
∴ ~p

If the dog detects an intruder, the dog will bark.
The dog did not bark.
Therefore, no intruder was detected by the dog.
## Hypothetical syllogism (HS) 
p ⇒ q  
q ⇒ r
-------.
∴ p ⇒ r
Skip the middleman q and go straight to p then r. 
## Disjunctive syllogism (D)
$p \vee q$
$\sim p$
-------.
∴ q
Her siger vi p or q er sand, men vi har sagt at p er falsk, derfor må det være q der er sand
## Addition (OR introduction)
$~p$
-------.
∴ $p \vee q$
Hvis p er sand, må p eller noget andet (p) være sandt
## Conjunction (AND introduction)
p
q
-------.
∴ $p \wedge q$
Hvis vi har p og q og de begge er sande, kan vi adde et AND, det omvendte af simplifikation, også kan AND introduction 
## Simplification (AND elimination)
$p \wedge q$
-------.
∴ p
∴ q
Her fjerne man AND, omvendte af conjunction

--- 
Se kap: 2.3 KBR