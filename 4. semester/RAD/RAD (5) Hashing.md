# Fremlæggelse 
## Universality 
A hash function $h : U → [m]$ is universal if, for all $$x \neq y \in U:
Pr[h(x) = h(y )] \leq 1/m$$Is a truely random h also universal? Yes, but we also have practical
universal hash functions. Giver lille kollisions sandsynlighed
## Hashfunktioner
hvad er en hashfunktion kort
- **Multiply-mod-prime**
*Tager konstant tid og plads*
$$h^m_{a,b}(x) = ((ax + b)~mod~ p) ~mod~ m$$
hvis a er uniform i $[p]_+=\{1,...,p-1\}$
og b er uniform i$[p]=\{1,...,p-1\}$
så er $h^m_{a,b} : U → [m]$ en universal hash function
- **Multiply shift**

Den ene er hurtigere fordi den bruger færre multiplikationer. De er begge universelle.
## Hash tabel 
Vores mål: vellighold at S ⊆ U, |S| = n, så et x ∈ U, sig hvis x ∈ S.

ide: lad $m \geq n$ vælg en universal hashfunktion $h : U → [m]$. Gem et array L hvor L[i] er en linked list over $\{y \in S | h(y) = i\}$


![[Pasted image 20240613162613.png|450]]
	## Bevis at, for x∈ S, E[|L[h(x)]|] ≤ 1
antag at $m \geq n$, vil vise at for $x \in S, E[|L[h(x)]|] \leq 1$

antallet af elementer der hasher til samme sted som x er antallet af y'er i S hvor dens hashværdi er den samme som x eller de y'er der lander i samme linked list som x. 
$|L[h(x)]|=|\{y\in S|h(y)=h(x)\}|$
$$E[|L[h(x)]|]=E[|\{y\in S|h(y)=h(x)\}|]=$$
antallet af elementer i listen er summen af de gange hvor y og x hasher til samme værdi. Det betyder altså at h(y)=h(x) er en indikator variabel, enten hasher de samme værdi ellers gør de ikke.
$$E[\sum_{y\in S}[h(y)=h(x)]]=$$
Bruger linearity of expectation 
$$\sum_{y\in S}E[h(y)=h(x)]=$$
Der gælder at forventningen for en indikator variabel er sandsynligheden for at den er 1. 
$$\sum_{y\in S}Pr[h(y)=h(x)]\leq$$
antallet af elementer i S eller |S| er n. Denne ulighed holder fordi vi har en universal hashfunktion så sandsynligheden for at vi kolliderer er $\leq \frac{1}{m}$, når vi indsætter et element, men vi skal indsætte $|S| = n$ elementer. 
$$|S|\frac{1}{m}=\frac{n}{m}$$
Den forventet søgetid er n/m, men eftersom $m \geq n$ kan brøkken aldrig blive større end 1. 
$$\frac{n}{m}\leq1$$
vi kan altså upperbounde søgetiden til 1 med andre ord er søgetiden O(1). Vi har altså en **Forventet** søgetid på O(1)

Her er vores table dynamisk, så vi kan justere størrelsen
## 2 Level hashing
Den er statisk, så vi vælger én størrelse for tabellen og så bliver den ikke større. Vi vil gerne for faktisk konstant søgetid og ikke forventet som i hashing med chaining. 

$m=n$

Givet et statisk set S, |S|=n:

**Første niveau:**
1 universal hashfunktion:  $h : U \rightarrow [n]$,
har hashfunktion hvor der skal gælde $C_{h} < n$
vi prøver med nye hash funktioner indtil at $C_{h} < n$, vi forventer at bruge 2 forsøg. 
Den liste h(x) hasher til: $S_i = \{x \in S | h(x) = i\}$

**Andet niveau:** 
one-level hash table for hvert $S_i$ hvor $|S_i|=n_{i}\geq 1$, vi laver n kollisionsfrie universale hashfunktioner: $i ∈ [n_i]$ hvor $n_i ≥ 1$, lad $h_i : U → [m_i]$
$m_{i}=n_i^2$

Der gælder for antallet af kollisioner: hvis vi vælger 2 elementer fra $n_i$ er kollisions sandsynligheden mindre end n.
$$C=\sum_{i\in[n]}\begin{pmatrix}n_i\\2\end{pmatrix}<n$$
hvert $i \in [n]$, med $n_i > 0$ har en kollisions fri hashfunktion på $S_i$ $h_i : U → [n_i^2 ]$

dvs der kan være n tabeller med $n_i^2$ elementer i.
### Bestemmelse af pladsforbrug for 2-level hashing
Vi har en tabel med størrrelse n og så har vi $n_i$ tabeller med størrelse $n_i^2$

Pladsforburget er derfor følgende:
n er størrelsen for den ydre tabel og summen størrelsen af alle de indre tabeller. 
$$O(n+\sum_{i\in [n]}n_i^2)$$
Der gælder at $n^2_i=n_i+2\begin{pmatrix}n_i\\2\end{pmatrix}=n_i+\frac{2n_i(n_i-1)}{2}=n_i-n_i+n_i^2$
$$O(n+\sum_{i\in[n]}(n_i+2\begin{pmatrix}n_i\\2\end{pmatrix}))$$Det gælder at $\sum_{i\in[n]}2\begin{pmatrix}n_i\\2\end{pmatrix}=O(2C)$, summen af $\sum_{i\in[n]}n_i=O(n)$
$$O(n+n+2C)=O(C)=O(n)$$
C er højst n derfor gælder $O(C)=O(n)$.

# Strærk Universalitet
![](https://i.imgur.com/tu0pVoZ.png)
# Multiply-mod-prime
Let $U = [u]$ and pick prime $p \geq u$. For any $a, b \in [p]$, and $m < u$,
define $h^m_{a,b} : U → [m]$ by
$$h^m_{a,b}(x) = ((ax + b)~mod~ p) ~mod~ m$$
hvis a er uniform i $[p]_+=\{1,...,p-1\}$
og b er uniform i$[p]=\{1,...,p-1\}$
så er $h^m_{a,b} : U → [m]$ en universal hash function
*Tager konstant tid og plads*
```
MultiplyModPrime(x) 
	q = 89
	p = 2^q - 1 // mesinner prime
	a,b = random.Bigint
	y = ((a*x+b) & p) + ((a*x+b) >> q)
	if (y >= p) 
		y -= p
	return y & ((2^l - 1))
```
# Multiply Shift

**Def:** en hash funktion $h : U → [m]$ er c-approksimativt universal hvis, $\forall x  \neq y \in U: Pr[h(x) = h(y )] \leq c/m$.

Let $u = 2^w$ and $m = 2^l$ være toer-potenser. lad $a$ være uniformt
tillfældig ulige integer i $[u]$. Definer *mulitply-shift* hash funktionen
$h_a : [u] → [m]$ ved:
$$h_a(x)=\lfloor\frac{(ax)~mod~2^w}{2^{w-l}}\rfloor$$
Dertil er $h_a$ 2-approksimativt universal
**C kode:** $(a*x) >> (w-l)$
