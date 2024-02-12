Typisk når man snakker om køretid er man pessimistisk og spørger  hvad er den værste tid denne algoritme kan køre, men oftes rammer man ikke worst case, man kunne kigge på average case, her kigger man på en operation og kigger på en sandsynlighed for at noget sker. 

Amortiseret analyse på den anden hånd går ud på at man tager worst case for en række operationer og ser på hvad gennemsnittet af køretiden er, man kan sige man kigger på alle operationers worst case run time og prøver at finde en ting i midten af alle de operationer. Derfor får man et lidt mere realistisk billede af hvad køretiden bliver.

Bliver brugt i algoritmer hvor occasional operationer er ret langsomme, men det fleste operationer er hurtige. Her er der lidt for pessimistisk at lade den ene langsomme operation være køretiden. 

Amortisering er dog ikke noget man bruger til alle algoritmer, men der er algoritmer hvor at nogle operationer kræver mere plads og tid på nogle tidspunkter og lidt på andre tidspunkter, istedet for at bare sige det bliver worst case, prøver man at finde en mellem ting. 

# Amortized cost
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

# Counting method
Vi skal betale forskellige priser for diverese operationer, nogle bliver charged mere end andre. Denne "pris" er den amortized cost. Når den amortized pris er dyrere end den faktiske pris kan vi sige man optjener kredit ved at udføre den operation. Fordi vi ved at vi overdriver har vi på den måde optjent lov til at se bort fra andre operationer. 

Vi kan altså bruge den her optjente kredit til at betale operationer MODSAT aggregate analyse hvor alle operationer har samme pris (derfor vi kan sige T(n)/n) så har forskellige operationer i en algoritme forskellige priser. 

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


## Dynamiske tabeller (dynamiske arrays)
Vi ønkser at indsætte nogle elementer i en hash tabel, hvad skal størrelsen være?
Hvis den er for stor bliver søge tid bliver lav, men pladsforbrug bliver højt; løsningen er dynamiske arrays. 

Vi øger størrelsen af tabellen når tabellen bliver fuld. 
1. Allokerer hukommelse til en større tabel, $2 \cdot T.size$ hvor T er en tabel. 
2. Copy paste alle elementer fra den gamle til den nye tabel
3) Free the old table. 
![|150](https://i.imgur.com/5wgUxnE.png)
Hvis der er plads i tabellen indsætter vi bare


