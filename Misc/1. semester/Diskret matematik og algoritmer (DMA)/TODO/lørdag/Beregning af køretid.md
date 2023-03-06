## Basics 
Max antal skridt per linje.
![[Pasted image 20221018163916.png|200]]
Til bestemmelse af køretid vil man tælle hver skridt pr linje og gange det med det max antal af gange som linjen bliver kørt igennem. 
På pseudokoden foroven ser vi linje 1 bruger 1 skridt, 1 til at gemme 0 i max. 

på linje 2 bruges der 7 skridt: for, læse i, udregne i+1, gemme i+1 som nyt i, læse n, udregne n-1 og til sidst sammenligne i med n-1. Fordi et for loop kun skal køre imens i != n-1.

på linje 3 bruges der 6: 1 til at køre if, 1 til at hente A, 1 til at hente A[i], 1 til at sammenligne, 1 til at hente A og 1 til at hente A[max].  

Disse skridt er vi typisk ligeglad med så derfor skriver vi dem som $c_1,c_2$ osv. Disse konstanter ser vi dog også tit bort fra til beregning af køretid. Hvis vi kigger på antal af gange vi kører hver linje bliver linje 1 kørt konstant tid altså 1 gang. linje 2 bliver i worst case kørt n gange, det samme med linje 3 og 4. linje 5 bliver kørt konstant tid. Derved får vi 

Dette ville være måde at skrive det op:
$c_1\cdot 1+ c_2\cdot (n+1) + c_2\cdot n + c_2\cdot n c_3\cdot 1$

Hvis man faktisk skal være helt rigtig ville man skrive 
$1 \cdot 1 + 7(n+1)+6n+2n+2 =15n+10=\Theta(n)$

![[Pasted image 20221018170014.png|400]]

når vi taler om køretid er det hurtigst voksende led det der afgører den asymptotisk køretid fordi ved et vilkårligt stort n vil det være det største led der kommer til at dominerer hvad køretiden er, derfor kan man på overstående eksempel sige at det linære led kommer til at betyde mere for køretiden end det konstante derfor bliver køretiden $\Theta(n)$. 

## Big O
### Big O som en relation
Recall: For asymptotically positive sequences $\left(a_n\right),\left(b_n\right)$, we say that $\left(a_n\right)$ is $\mathrm{O}\left(\left(b_n\right)\right)$ if $\exists C>0$ and $\exists k \geqslant 1$ such that $\forall n \geqslant k$
$$
a_n \leqslant C b_n
$$
$A=\left\{\right.$ all asymptotically positive sequences $\left(c_n\right)$ of numbers $\}$
$$
\left(a_n\right) \mathrm{O}\left(b_n\right) \Leftrightarrow \exists C>0 \exists k \geqslant 1\left(n \geqslant k \Rightarrow a_n \leqslant C b_n\right)
$$
Is $\mathrm{O}$ a partial order?
Reflexive, $\left(a_n\right) \mathrm{O}\left(a_n\right)$ ? $\checkmark$
For $C=1, k=n_0$ we have $\left(n \geqslant 1 \Rightarrow a_n \leqslant 1 \cdot a_n\right)$

Transitive, $\left(a_n\right) \mathrm{O}\left(b_n\right) \wedge\left(b_n\right) \mathrm{O}\left(c_n\right) \Rightarrow\left(a_n\right) \mathrm{O}\left(c_n\right) ? \checkmark$
- $\exists C>0 \exists k \geqslant 1\left(n \geqslant k \Rightarrow a_n \leqslant C b_n\right)$
- $\exists D>0 \exists \ell \geqslant 1\left(n \geqslant \ell \Rightarrow b_n \leqslant D c_n\right)$
- Let $E=C D, m=\max \{k, l\}$. Assume $n \geqslant m$. Then
$$
a_n \leqslant C b_n \leqslant C D c_n=E c_n
$$
So $n \geqslant m \Rightarrow a_n \leqslant E c_n$

Antisymmetric, $\left(a_n\right) \mathrm{O}\left(b_n\right) \wedge\left(b_n\right) \mathrm{O}\left(a_n\right) \Rightarrow\left(a_n\right)=\left(b_n\right) ?$   $\boldsymbol{x}$

$(n) \mathrm{O}(2 n)$ and $(2 n) \mathrm{O}(n)$, but $(n) \neq(2 n)$
## Small o
## Theta 
### Theta som en relation
Recall: We say that $\left(a_n\right)$ is $\Theta\left(\left(b_n\right)\right)$ if $\left(a_n\right)$ is $\mathrm{O}\left(\left(b_n\right)\right)$ and $\left(b_n\right)$ is $\mathrm{O}\left(\left(a_n\right)\right)$
- $A=\left\{\right.$ all asymptotically positive sequences $\left(c_n\right)$ of numbers $\}$
- $\left(a_n\right) \Theta\left(b_n\right) \Leftrightarrow\left(a_n\right) O\left(b_n\right)$ and $\left(b_n\right) O\left(a_n\right)$
- So $\Theta=O \cap O^{-1}$

O is reflexive and transitive.
- **Thm**. If R is reflexive/transitive then $R^{-1}$ is also
- reflexive/transitive.
- So $O^{-1}$ is reflexive and transitive.
## Upper bound, lower bounding
### Tight bound 
## Analyse af køretid
## Bevis for køretid
## Asymptotically positive 
# asymptotic growth
It means that the function is positive after a cutoff point x_0
f is O(g) means that g will grow faster or equal than f after a cutoff point x_0
To anwser this question: no this is because we cant know when x_0 is. Just because the value is large doesnt mean that x_0 is before your value

Ex.
f(x) = x
g(x) = x^2-x

Show that f is O(g) using the defination of big-O.

thought process!! (not a proof)
	We need to find c > 0 and x_0 > 0 such that 
	f(x) <= cg(x) for all x > x_0
	x <= c* (x^2-x)  <=> 0 <= c * (x^2 - x) - x = x(cx - c - 1)
	find the roots
	1: x = 0
	2: cx - c - 1 = 0
	x = (x+1)/x = 1 + 1/c
.
	Idea - try any c. c= 1 and x_0 = 2

proof:

Take c = 1 and x_0 = 2
Need to verify that x <= 1. (x^2 - x) for all x >= 2

ex.

f(x) = x
g(x) = x^2 - x

Show that g is not O(f(x)) using the defination of big-O and proof the contradiction

proof.
for contradiction assume that g is O(f).
by defination there exists c > 0 and x_0 > 0 such that g(x)  <= cf(x) for all x >= x_0
x^2 - x <= cx

thought process:
	to get a contradiction we need to exhibt a single x>x_0 for which this x^2 - x <= cx fails

We can rewrite x^2 - x <= cx 
0 <= -x^2 + x +cx = x(-x + 1 + c)
roots
x = 0
x = c + 1

Take x = max{c+2, x_0}
then -x^2 + x + cx = x           (-x + 1 + c)
								positive    negative
so for our choice of x , x^2 - x > cx and x >= x_0


	there exists some c > 0 and there exists some x_0 > 0 for where 
f(x) <= c g(x) for all x>=x_0
# Asymptotisk køretid
Big O: er en upper bound, funktionen vokser ikke hurtigere end en bestemt rate.

Omega: er en lower bound, den siger at en funktionen vokser mindst så hurtigt ved en bestemt rate

Theta: 
er en tightbound, den vokser præcis ved en bestemt rate. hvis du viser at en funktionen er både O(f(n)) og Omega(f(n)) for en funktion f(n), så er funktionen theta(f(n)). her er vi præcise i vores definition af køretiden

For example, since the
function 7n^3 + 100n^2 – 20n + 6 is both O(n^3) and Ω(n^3), it is also Θ(n^3).

ved beregning af køretid, er vi ligeglade med konstanter


People occasionally conflate O-notation with Θ-notation by
mistakenly using O-notation to indicate an asymptotically tight bound.
They say things like “an O(n lg n)-time algorithm runs faster than an
O(n2)-time algorithm.” Maybe it does, maybe it doesn’t. Since Onotation
denotes only an asymptotic upper bound, that so-called O(n2)-
time algorithm might actually run in Θ(n) time.

--- 
Tags: #open

