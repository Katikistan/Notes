Amortiseret analyse på den anden hånd går ud på at man tager worst case for en række operationer og ser på hvad gennemsnittet af køretiden er, man kan sige man kigger på alle operationers worst case run time og prøver at finde en ting i midten af alle de operationer. Derfor får man et lidt mere realistisk billede af hvad køretiden bliver.

Bliver brugt i algoritmer hvor occasional operationer er ret langsomme, men det fleste operationer er hurtige. Her er der lidt for pessimistisk at lade den ene langsomme operation være køretiden. 

Amortisering er dog ikke noget man bruger til alle algoritmer, men der er algoritmer hvor at nogle operationer kræver mere plads og tid på nogle tidspunkter og lidt på andre tidspunkter, istedet for at bare sige det bliver worst case, prøver man at finde en mellem ting. 


Idé: Dele en omkostning jævnt ud over tid
# Amortized cost
Amortiseringslån i banken (fast rente)

Betal samme beløb hver måned

I starten er en større del renter, senere er det meste afbetaling

Man taler om omkostning for operationer.

Ideen med amortisering er at dele disse omkostninger jævnt ud. 
## Eksempel 
![|400](https://i.imgur.com/s95yU48.png)
1/2 af tiden koster det 1 
1/4 af tiden koster det 2 
og 1/8  af tiden koster det  3 osv. 
Det er altså kun en 1/8 del af gangene det bliver meget langsommere.

I gennemsnit skal kun 2 bits ændres. 
Læg løbende “penge” til siden for at betale for fremtidige dyre operationer.

Man skal tælle fra 0 til n 
dyreste overgang i -> i + 1 skifter cirka lg n bits fra 0 til 1
du betaler for at ændre et 0 til et 1 tal. 

man bruger amortiseret analyse til hash tables, Disjunkte mængder og splay træer blandt andet.
# Agregate method
Se på den samlede omkostning ved en sekvens af operationer
Hashtabel: tabeludvidelserne ved insert operationer tager totalt tid $O(n)$
Binær tæller: at øge tælleren gange tager totalt tid $O(n)$
At stille tallerkener i opvaskemaskinen tager totalt tid O$(n)$

In the worst case, the average cost,
or amortized cost, per operation is therefore T (n)/n.
![|200](https://i.imgur.com/qYwDfpw.png)
The above Amortized Analysis was done for Dynamic Array example is called **Aggregate Method**

Ser vi på et eksempel som multipop, 
$T(n)=n^2$ derfor får vi $\frac{n^2}{n}=n$. Den amotiseret omkostning af multipop er $O(n)$

Givet en datastruktur (stack), som har push, pop, multipop og is-empty. De er alle Θ(1) på nær multipop som er Θ(min(s, k)) hvor s er antal elementer i stacken og k er antal elementer til som skal poppes (fjernes). Hvad er så den gennemsnitlige omkostning for denne struktur. Se her, at multipop blot er en masse pop operationer, og at der maks kan poppes så mange gange som der er blevet pushed. Dvs. der kan max pushes n gange, og derfra max poppes n gange, så altså i værste fald O(n). Derfra er den amortiserede omkostning O(n)/n = O(1).
# Counting method
Vi skal betale forskellige priser for diverese operationer, nogle bliver charged mere end andre. Denne "pris" er den amortized cost. Når den amortized pris er dyrere end den faktiske pris kan vi sige man optjener kredit ved at udføre den operation. Fordi vi ved at vi overdriver har vi på den måde optjent at kunne få lov til at se bort fra andre operationer. 

Vi kan altså bruge den her optjente kredit til at betale operationer MODSAT aggregate analyse hvor alle operationer har samme pris (derfor vi kan sige $T(n)/n$) så har forskellige operationer i en algoritme forskellige priser. 

Man skal vælge en prise så hele sekvensens amortized pris stadig upper bounder den reelle pris Forstil dig at vi vælge charge 2 kroner hver gang vi skal sætte en tallerken på stativet selvom det kun koster 1 krone, vi bruger 1  af dem på at betale for at ligge tallerken og har derfor 1 kr tilovers, den lægger vi på tallerken så vi kan gemme den. 

Vi ligger nu 5 tallerkener på stativet vi har 10 kroner. Nu skal vi tage tallerkener ud, det koster også 1 kr, men vi bruger bare de penge vi har opsparet derfor bliver det gratis. Fordi vi overcharger Push, kan vi betale intet for POP. 

Vi har "uendelig" penge, men vi vælger at betale 2 i stedet for 1 kr for at vi ved vi er upper bounded.

Vi lægger “penge” til side og knytter vi dem til
elementer i datastrukturen
c er den aktuelle pris af operationen og $\hat{c}$ er den amortized pris. 
$$\sum\limits_{i=1}^{n}\hat{c}_{i} \geq \sum\limits_{i=1}^{n}c_i$$
Et eksempel er en binary counter:
Hvert bit, der er sat til 1 har $1 sparet op
“Betaler selv” for at blive ændret til 0, det koster altså at ændre fra 1 til 0.
Omkostning per operation er konstant tid plus
opsparing på $1, fordi én bit skal ændres fra 0 til 1
![|400](https://i.imgur.com/s95yU48.png)
Fra 15 til 16 har vi sparet op med alle 1 tallerne, det eneste vi skal betale for er at ændre A[4] til 1. Vi betaler stadig 5 for at gå fra 15 til 16, men af de 5 dollars var 4 af dem opsaret så vi betale reelt kun 1, vi skal dog huske at det ene 1 tal også skal have en oparing. Det tager konstant tid at flippe et 0 til et 1 tal. 

Omkostningen bliver 2 hver gang vi tæller 1 op fordi vi flipper 1 taller til 0 og flipper det ene 0 til 1. det ses f.eks. fra 7 til 8. 

Ideen er at man lægger penge til siden og på grund af man har optjent kredit så kan man bruge det til at betale for andre operationer som derfor bliver "gratis".


# Potential method
Variant af regnskabsmetoden

Summen af alle opsparede $ udtrykkes ved en funktion $\Phi$
Eksempelvis: $\Phi(x)=$ antal 1ere i den binære repræsentation af x. 

Den amortiserede omkostning $\hat{c}$ er den faktiske omkostning $c$ plus ændringen i værdien af potentialet $\Phi$

Potientielle funktionen $\Phi$ holder styr på hvor meget vi har sparet op.

Eksempel:
- $\Phi(x)=$ antal 1ere i den binære repræsentation af $x$
- Lad $t_x=$ antal 1er der bliver til 0'er mellem $x-1$ og $x$
- Omkostningen $c_x$ ved at ændre $x-1$ til $x$ er $c_x=t_x+1$
- $\hat{c}_x=c_x+\Phi(x)-\Phi(x-1)$
$$
\leq\left(t_x+1\right)-\left(t_x-1\right)=2
$$
![|400](https://i.imgur.com/s95yU48.png)
![](https://i.imgur.com/Sa9IFlq.png)

Potentiale metoden gemmer kredit i en "bank", hvori den nuværende antal af krediter kan angives med en potentiale funktion $\Phi$. Omkostningen for en operation er angivet som $c_i$, og den amortiserede omkostning som $\hat{c}_i$ defineret ved
$$
\hat{c}_i=c_i+\Phi\left(D_i\right)-\Phi\left(D_{i-1}\right)
$$

Hvis differencen mellem $\Phi\left(D_i\right)-\Phi\left(D_{i-1}\right)>0$, så betaler vi for meget, og kommer kredit ind i banken. Hvis omvendt $\Phi\left(D_i\right)-\Phi\left(D_{i-1}\right)<0$, så betaler vi for lidt, og trækker derfor kredit ud af banken. Igen gælder (8). Vi skal derfor vise, at

$$\sum_{i=1}^n \hat{c}_i=\sum_{i=1}^n\left(c_i+\Phi\left(D_i\right)-\Phi\left(D_{i-1}\right)\right)=\left(\sum_{i=1}^n c_i\right)+\Phi\left(D_n\right)-\Phi\left(D_0\right)$$
når man skriver summen ud vil man opdage at alle led forsvinder for potentialfunktionerne på nær det første og sidste

Der skal gælde at $\sum^{n}_{i=1}\hat{c}_i\leq\sum^{n}_{i=1}c_i$:
$$\left(\sum_{i=1}^{n} c_i\right)+\Phi\left(D_n\right)-\Phi\left(D_0\right)\leq \sum_{i=1}^n c_i$$
For at det kan gælde skal $\Phi\left(D_n\right)-\Phi\left(D_0\right)\geq0$, Det er det samme som at kræve at $\Phi\left(D_n\right) \geq \Phi\left(D_0\right)$

Vi må altså aldrig have færre "kredit i banken" end da vi startet.

*Vi kender dog ikke altid n, derfor skal der gælde $\Phi\left(D_i\right) \geq \Phi\left(D_0\right)$ for alle $i \geq 0$* (hvis man stopper efter en i'te operation har man nok kredit, derved er den totale amotoriseret omkostning for i operationer større end den relle omkostning for i operationer)

Hvis det gælder er $\Phi$ en valid potentielfunktion og derfor får vi opfyldt uligheden:
$$\sum_{i=1}^n \hat{c}_i \geq \sum_{i=1}^n c_i$$
Typisk, vælger vi $\Phi$ så $\Phi\left(D_0\right)=0$ og $\Phi\left(D_i\right) \geq 0$ for alle $i \geq 0$ da det viser at potentialfunktionen er gyldig.


## Eksempel  multipop
$D_0$ er vores initielle stack og $D_i$ er stacken efter den i'te operation. Vi angiver $\Phi\left(D_i\right)$ til at være antal elementer i stacken $D_i$, da den opretholder $\Phi\left(D_0\right)=0$. Dvs. $\Phi\left(D_i\right)$ angiver antal elementer når operationen er lavet, og $\Phi\left(D_{i-1}\right)$ angiver antal elementer lige før operationen blev udført.
Herfra kan vi gennemgå de forskellige operationer:
Push
$$
\begin{gathered}
\Phi\left(D_i\right)-\Phi\left(D_{i-1}\right)=1 \\
\hat{c}_i=c_i+\Phi\left(D_i\right)-\Phi\left(D_{i-1}\right)=1+1=2
\end{gathered}
$$

Pop:
$$
\begin{gathered}
\Phi\left(D_i\right)-\Phi\left(D_{i-1}\right)=-1 \\
\hat{c}_i=c_i+\Phi\left(D_i\right)-\Phi\left(D_{i-1}\right)=1-1=0
\end{gathered}
$$

Multipop
$$
\begin{gathered}
\Phi\left(D_i\right)-\Phi\left(D_{i-1}\right)=-k^{\prime} \\
\hat{c}_i=c_i+\Phi\left(D_i\right)-\Phi\left(D_{i-1}\right)=k^{\prime}-k^{\prime}=0
\end{gathered}
$$

Hvor $k^{\prime}$ er antallet af elementer den popper.
Her ses det, at alle elementer er mindst 2 , og derfra er summen af alle operationer mindst $2 \mathrm{n}$, hvilket giver vores gennemsnitlige amortiserede køretid til $O(n) / n=O(1)$


# Dynamiske tabeller (dynamiske arrays)
Vi ønkser at indsætte nogle elementer i en hash tabel, hvad skal størrelsen være?
Hvis den er for stor bliver søge tid bliver lav, men pladsforbrug bliver højt; løsningen er dynamiske arrays. 

Vi øger størrelsen af tabellen når tabellen bliver fuld. 
1. Allokerer hukommelse til en større tabel, $2 \cdot T.size$ hvor T er en tabel. 
2. Copy paste alle elementer fra den gamle til den nye tabel
3) Free the old table. 
![|250](https://i.imgur.com/5wgUxnE.png)
Hvis der er plads i tabellen indsætter vi bare
![](https://i.imgur.com/hZXwlQ3.png)
![](https://i.imgur.com/OS2lYSq.png)
![](https://i.imgur.com/MTjxam6.png)


