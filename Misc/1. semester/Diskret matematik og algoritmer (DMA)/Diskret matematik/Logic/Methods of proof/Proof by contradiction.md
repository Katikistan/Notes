En indirekte måde at bevise noget det benytter følgende tautology
(( p ⇒ q) ∧ (∼q)) ⇒ (∼ p)
Fordi dette er en tautologi ved man også at the rule of inference holder:
p ⇒ q  
∼q  
-----.
∴ ∼ p

Her ønsker man f.eks. at vise at p er sandt, men istedet for at bevise det direkte kan vi vise at ~p er falsk og derved må p være sandt skridtene er derved følgende når man beviser med contradiction: 

1. Antag at ~p holder 
2. Man forsøger så at komme frem til noget komplet nonsens som 0=1 og på den måde viser man at ~p må være falsk og det medfører derfor at p må være sand. Man ønsker finde et counterexample til ~p som gør ~p false da p derfor må være true. 

## Eksempler:
### vis at $\sqrt 2$ er irrationalt
Vis at $\sqrt 2$  er irrationalt, noget er rationalt når det kan skrives som en fraktion $\frac{a}{b}$
hvor a og b er integers. 

claim 1: hvis a er positiv må a^2 også være positivt. 

assume that $\sqrt 2$ = $\frac{a}{b}$, (we want to end up with a contradiction)

we can choose a,b so that GCD(a,b) why?

squaring both sides gives $2 = \frac{a^2}{b^2}$ and so $2b^2 = a^2$ . hence $a^2$ is even by claim 1, this means that a is even . so a^2 is a multiple of 4. since $2b^2 = a^2$ we see that 2b^2 is a multiple of 4, but then b^2 is a multiple of 2. we have shown that b^2 is even. by claim 1 we get that b is even. both a and b is even: the contradiction, if both are even that means that the two of them must me divisible by 2 but we see that GCD of a and b is 1 

therefore sqrt 2 cannot be rational and must be irrational. Q.E.D
### Asymptotic show that g is not O(f(x))
Ved brug af modstrid føres der bevis for at $2^{2n}$ **ikke** er O($n^2$). Jeg vil forsøge at bevise $2^{2n}$ er O($n^2$) og komme frem til et modstrid:

Hvis $2^{2n}$ er O($n^2$) gælder $\exists c>0 ~~ n_o ~~ \forall n \geq n_0 ~~ 2^{2n} \leq c \cdot2^n$ Her kan uligheden skrives om:
$2^{n} \cdot 2^{n} \leq c \cdot2^n$ 
Der divideres med $2^n$:
$2^{n} \leq c$ 
Tager log2 til $2^n$ og c og får 
$n \leq c'$ 
Eftersom $c'$ er konstant og $n$ er uendeligt voksende kan der ikke eksistere et $c'$ der altid er større end $n$, $n$ ville altid kunne være $c+1$. For at $2^{2n}$ kan være O($n^2$) skal $n \leq c'$, det er et modstrid og derfor er det ikke sandt at $2^{2n}$ kan være O($n^2$), derfor må det være sandt at $2^{2n}$ ikke er O($n^2$) og det er blevet bevist indirekte med modstrid. Q.E.D
### There are infinitely many prime numbers


__________
#### Ordbog
Tautology: I logik er en tautologi et logisk udsagn, der er sandt for alle tildelinger af værdier til udtrykket. Det modsatte af en tautologi er en kontradiktion.

Kontradiktion(ell. absurdity):  I logik er en kontradiktion et logisk udsagn, der er falskt for alle tildelinger af værdier til udtrykket. Det modsatte af en kontradiktion er en  tautologi.
Tags: #dma_uge5  

