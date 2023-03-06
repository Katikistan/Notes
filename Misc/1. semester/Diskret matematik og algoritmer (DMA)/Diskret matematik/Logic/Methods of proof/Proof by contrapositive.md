At bevise med contrapositive er en måde at bevise noget indirekte. Det gøres således:
( p ⇒ q) ⇔ ((∼q) ⇒ (∼ p))
Her ser vi at hvis p så q kun og kun hvis ikke q så ikke p.

Her er ( p ⇒ q)'s kontrapositive:  ((∼q) ⇒ (∼ p)). Ved at vise at den contrapositive er sand kan man også vise den første. 

Let $\forall x \in Z$  vis at hvis $n^2$ er ulig, så er n ulig. 

Her lader vi $n^2$ være p og n være q. Vi vil vise at p ⇒ q er sand. Vi kan i stedet bevise 

Dette er et indirekte bevis fordi man beviser ikke direkte det udsagn man ønsker at bevise men det ender med at være sandt fordi det følger noget andet man har bevist som f.eks. det contrapositive. 

**Hvorfor bruger man contrapositive:** 
Det er fordi det er nemmere i nogle tillfælde at bevise det contrapositive statement, såsom når man vil bevise noget ikke er divisible, så er det nemmere at vise at negationen holder, altså at noget er divisible fordi der er klare metoder til at vise divisibility.

## Eksempel
∼q ⇒ ∼ p er sand (Den contrapositive er sand) så at n er et lige tal må $n^2$ også være et lige tal. Vi lader n = 2k hvor k er en integer, det er altså et lige tal. Så har vi at $n^2$ = $(2k)^2$ = $4k^2$= $2(2k^2)$. Man ser at ∼q ⇒ ∼ p er sand. derfor har vi ( p ⇒ q) ⇔ ((∼q) ⇒ (∼ p)), den contrapositive er sand derved følger det at $\forall x \in Z$  hvis $n^2$ er ulig, så er n ulig er sandt og det har man vist med contrapositive. QED.
	![[Pasted image 20221024093211.png|300]]

we show that if $a^2$ is even then a is even. we prove the contrapositive  "if a is odd then $a^2$ is odd"

assume a is odd this means $a = 2k+1$ for some $k \in \mathbb{Z}$

$a^2 = (2k+1)^2 = 4k^2+4k+1 = 2(2k^2+2k)+1$, since $(2k^2+2k) \in \mathbb{Z}$ we see that $a^2$ is odd

