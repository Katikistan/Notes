$\mathbf{A}(\mathbf{B C})=(\mathbf{A B}) \mathbf{C}$ gælder (associativ regel)
$\mathbf{A}(\mathbf{B}+\mathbf{C})=\mathbf{A B}+\mathbf{A C}$ gælder (distributiv regel)
$\mathbf{A B}=\mathbf{B A}$ gælder IKKE generelt (ingen kommutativ regel)
$\mathbf{A B}=\mathbf{0} \Rightarrow \mathbf{A}=\mathbf{0}$ eller $\mathbf{B}=\mathbf{0}$ gælder IKKE generelt
**Potenser**: $A^2=AA$ (gælder kun for kvadratiske matricer)
$$
\text { En } n \times n \text { matrix } \mathbf{A} \text { er symmetrisk hvis } \mathbf{A}^T=\mathbf{A} \text {. }
$$
## Vektor regneregler 
- $\mathbf{u}+\mathbf{v}=\mathbf{v}+\mathbf{u}$
- $(\mathbf{u}+\mathbf{v})+\mathbf{w}=\mathbf{u}+(\mathbf{v}+\mathbf{w})$
- $\mathbf{v}+\mathbf{0}=\mathbf{v}$
- $\mathbf{v}+(-\mathbf{v})=\mathbf{0}$
- $s(\mathbf{u}+\mathbf{v})=s \mathbf{u}+s \mathbf{v}$
- $(s+t) \mathbf{v}=s \mathbf{v}+t \mathbf{v}$
- $s(t \mathbf{v})=(s t) \mathbf{v}$
- $1 \mathbf{v}=\mathrm{v}$

# Gauss Elimination
start med at identificere pivot elementer, du skal derfra altid arbejde med den række, lad vær med at tage tredje række og fjerne noget fra første række, det er bedst at få 1 pivotelement og bruge det til at fjerne alt under. Dernæst tager du rækken med næste pivotelement og fjerner alt under det. 

Fokuserer på en kolone af gangen.

lad vær med at forsøge at lave combo fjerner. Tag en kolone af gangen. når du laver gauss jordan bruger du sidste pivot til at fjerne alt over og arbejder dig mod venstre. 

så først venstre til højre og så højre til venstre.

**hvis der er ubekendte som a: husk skalering bliver sådan her: 2(2a-1), dvs at det er hele ledet der bliver skaleret og bliver 4a-2**
## bestem samtlige løsninger
bring på reduceret rækkeform. aflæs løsninger. hvis konsistent opskriv på parmeter form
## Bestem a så der er: 1, 0 og uendelige løsninger (løsningsmængden)
Bring den på reduceret rækkeform. her vil der være en række der kun har en ubekendt med a og a i resultatsøjlen. her vil man kunne få en ide om hvilke værdier skal være og ikke være for at det giver 1, 0 eller uendelige. Den behøver ikke at kunne have alle 3. Hvis det er umuligt at vælge et a der giver uendelige løsninger så skriv det. du behøver ikke lave gauss jordan, bare gauss. 

## Ax=b
det er en koefficent matrice og en vektor med ubekendte, du kan bruge den inverse og opskrive hvis du ikke har A: $Ax=b \rightarrow x=A^{-1}b$
ellers løses det som normalt. 
### Opgave: Bestem samtlige løsninger 
Lad a = −1/2 og lad A betegne koefficientmatricen for ligningssystemet. Bestem samtlige løsninger til ligningssystemet: 
$$
\mathbf{A}^2\left[\begin{array}{l}
x_1 \\
x_2 \\
x_3
\end{array}\right]=\left[\begin{array}{l}
3 \\
1 \\
1
\end{array}\right]
$$
her er a givet, man sætter det ind i et ligningsystem, ganger A med sig selv for at få $A^2$, dernæst opskriver man totalmatrix med A=B, man løser ligningsystemet og opskriver resultat evt på parameter form. 
### Opgave: Bestem samtlige løsninger uden A
her skal du bruge den inverse til A for at fjerne det. 
$Ax=b \rightarrow x=A^{-1}b$
# Inverser
Hvis $\mathbf{A}$ er invertibel så har ligningen $\mathbf{A x}=\mathbf{y}$ netop en løsning $\mathbf{x}=\mathbf{A}^{-1} \mathbf{y}$
## Find den inverse
computation, [A|I] -> [I|X]
Lad $\mathbf{A}$ være en $n \times n$ matrix og lad $\mathbf{I}=\mathbf{I}_n$.
1. Opskriv matricen [A|I].
2. Lav elementære rækkeoperationer på matricen $[\mathbf{A} \mid \mathbf{I}]$ og bring den på reduceret rækkeechelonform.
3. Hvis den reducerede rækkeechelonform er $[I \mid X]$ da $\operatorname{er} \mathbf{A}^{-1}=\mathbf{X}$, hvis ikke da er A ikke invertibel.
## Bestem samtlige inverser
For at bestemme alle venstre inverser til B, findes løsninger til ligningsystemt $\mathrm{XB}=\mathrm{I}$, hvor $\mathrm{X}$ er en matrice med ubekendte, hvis det er højre inverser bytte man bare rundt på XB til BX=I:
$$
\left[\begin{array}{lll}
x_1 & x_2 & x_3 \\
x_4 & x_5 & x_6
\end{array}\right]\left[\begin{array}{cc}
0 & 1 \\
1 & -2 a \\
0 & 0
\end{array}\right]=\left[\begin{array}{ll}
1 & 0 \\
0 & 1
\end{array}\right]
$$
## Opgave: Find samtlige inverser
Til denne matrix multiplikation kan et ligningsytem opskrives og løses, det er et ligningsystem med 4 ligninger og 6 ubekendte:
$$
\begin{aligned}
x_2 & =1 \\
1 x_1-2 a x_2 & =0 \\
x_5 & =0 \\
x_4+2 a x_5 & =1
\end{aligned}
$$
Ligningsystem laves om til en totalmatrix og bringes på reduceret rækkeform:
$\left[\begin{array}{llllll|c}1 & 0 & 0 & 0 & 0 & 0 & 2 a \\ 0 & 1 & 0 & 0 & 0 & 0 & 1 \\ 0 & 0 & 0 & 1 & 0 & 0 & 1 \\ 0 & 0 & 0 & 0 & 1 & 0 & 0\end{array}\right]$
Hertil fås samtlige venstre inverser. $x_3 \mathrm{og} x_6$ er frie variabler, hvis man kigger på den inverse (2) ser man at $x_1=2 a, x_2=1, x_4=1$ og $x_5=0$, hvilket stemmer overens med de samtlige inverser til $B$ :
$$
\left[\begin{array}{l}
x_1 \\
x_2 \\
x_3 \\
x_4 \\
x_5 \\
x_6
\end{array}\right]=\left[\begin{array}{c}
2 a \\
1 \\
s \\
1 \\
0 \\
t
\end{array}\right]
$$
B har en venstre invers og kan derfor ikke også have en højre invers, kun kvadratiske matricer kan have både en venstre og højre invers. B er en 3x2 matrice.
## Højre og venstre invers
hvis den er kvadratisk kan den have både venstre og højre, ellers kan den kun have en af de to. yderligere skal columns være linært uafhængie:
- $\mathbf{X}$ er en venstreinvers til $m \times n$ matricen $\mathbf{A}$ hvis $\mathbf{X A}=\mathbf{I}_n$
- $\mathbf{X}$ er en højreinvers til $m \times n$ matricen $\mathbf{A}$ hvis $\mathbf{A X}=\mathbf{I}_m$

**Theorem 2.10**
Lad $\mathbf{A}$ være en $m \times n$ matrix med rank $\mathbf{A}=r$. Da gælder
1. A har en højreinvers netop hvis $r=m \leq n$
2. A har en venstreinvers netop hvis $r=n \leq m$
## kvadratisk matrice
### invers hurtigt af 2x2 matrix
![[Pasted image 20230510230022.png|200]]
**Theorem 2.9**
Lad A være en $n \times n$ matrix. Da er følgende betingelser ensbetydende:
1. A er invertibel
2. Ligningen $\mathbf{A x}=\mathbf{b}$ har netop en løsning for hvert $\mathbf{b}$
3. Ligningen $\mathbf{A x}=\mathbf{0}$ har kun løsningen $\mathbf{x}=\mathbf{0}$
4. Rangen af $\mathbf{A}$ er lig $n$
5. Den reducerede rækkeechelonform af $\mathbf{A}$ er I
6. A er et produkt af elementære matricer
## Ikke kvadratisk
har kun en højre eller venstre invers.

Lad a = 0 og lad A betegne koefficientmatricen for ligningssystemet. Begrund, at der findes en invertibel matrix X så $\mathbf{X A}=\left[\begin{array}{llll}1 & 0 & 2 & 1 \\ 0 & 1 & 1 & 1 \\ 0 & 0 & 0 & 0\end{array}\right]$
lad vis at man kan få systemet på den form med ero. hvis man kan det er der et produkt af elementærmatricer X der kan ganges ind på A fra venstre og give matricen. Elementærmatricer er invertible. et produkt af elementærmatricer er også invertibelt fordi alle elementerne af det produkt er invertibelt. 
# Rank
Rangen af en matrix $\mathbf{A}$ er antallet af ikke-nul-rækker i en echelonform af $\mathbf{A}$. Rangen betegnes rank $\mathbf{A}$.
(Man kan vise, at der altid vil være samme antal ikke-nul-rækker i forskellige echelonformer af $\mathbf{A ! )}$

![|500](https://i.imgur.com/7Q7mq4Y.png)

Hvis rank $\mathbf{A}<$ rank $\mathbf{M}$ så har $(S)$ ingen løsninger
Hvis rank $\mathbf{A}=\operatorname{rank} \mathbf{M}=n$ så har $(S)$ netop en løsning
Hvis rank $\mathbf{A}=$ rank $\mathbf{M}<n$ så har $(S)$ uendeligt mange løsninger

ero ændre ikke rank, hvis de ikke har samme rank er de ikke det samme system, det gælder selv først efter det er på echelon form 

hvis rank er lavere en antallet af ubekendte er der uendelig løsninger

hvis rank i koefficentsmatricen er laver end totalmatrixen er der ingen løsninger

Hvis rank A = rank M = n er der en løsning.

Rank er antallet af ikke nulrækker. A og M kan have forskellig rank. 
## nullity
nullity A = n - r, hvor n er mængden af ubekendte og r er rank. 
# Elementær matricer
typisk er det bare at skrive et tal ind i matrixen,
$\begin{bmatrix}1 & 0 & 0 \\ 0 & 1 & 0 \\ 0 & 0 & 1\end{bmatrix}$
hvis man sagde man skulle ligge 3 gange række 1 til række 2 ville det bare være at skrive 3 i række 2 kolone 1.
hvis vi får at vide at rækkeoperationer på I laver A så er (E4E3E2E1) = A fordi identietsmatricen kan ignoreres, her bliver a 
## Inverse elementær matrice
(E1E2E3E4)^-1 her er rækkefølgen vendt om, fordi vi lavet bevægelse E4 sidst er det den første vi skal anullere
## Opgaver
![|500](https://i.imgur.com/yFEYhIZ.png)
Opg 1. Husk at man starter med identitets matricen, her bliver det klart at det er E1 fordi at E2 både bytter rundt på rækker og skalerer. En elementær matrice må kun udfører en transformation. 
Opg 2. F2 vi går baglæns og undoer at række 3 er lagt til række 1. 
# Homogent
Lad $(\mathrm{S})$ være et $m \times n$ homogent ligningssystem med koefficientmatrix A. Da gælder:
1. Hvis rank $\mathbf{A}=n$ så har (S) kun nul-løsningen.
2. Hvis $m<n$ så har (S) uendeligt mange løsninger.

alle ligninger er = 0, den har 
# Underum
En delmængde $\mathcal{U} \subseteq \mathbb{R}^n$ kaldes et underrum såfremt:
- $\mathbf{0} \in \mathcal{U}$
- For alle $\mathbf{u}, \mathbf{v} \in \mathcal{U}$ gælder $\mathbf{u}+\mathbf{v} \in \mathcal{U}$
- For alle $s \in \mathbb{R}$ og $\mathbf{u} \in \mathcal{U}$ gælder $s \mathbf{u} \in \mathcal{U}$

Da $\mathbf{A O}=\mathbf{0}$ gælder $\mathbf{0} \in \mathcal{U}$.
Hvis $\mathbf{u}, \mathbf{v} \in \mathcal{U}$ gælder $\mathbf{A u}=\mathbf{0}$ og $\mathbf{A v}=\mathbf{0}$. Matrixregning giver
$$
\mathbf{A}(\mathbf{u}+\mathbf{v})=\mathbf{A} \mathbf{u}+\mathbf{A} \mathbf{v}=\mathbf{0}+\mathbf{0}=\mathbf{0}
$$
og dermed gælder $\mathbf{u}+\mathbf{v} \in \mathcal{U}$.
Lad $s \in \mathbb{R}$. Hvis $\mathbf{u} \in \mathcal{U}$ gælder $\mathbf{A u}=\mathbf{0}$. Matrixregning giver
$$
\mathbf{A}(s \mathbf{u})=s \mathbf{A u}=s \mathbf{0}=\mathbf{0},
$$
og dermed gælder $s \mathbf{u} \in \mathcal{U}$.
## Opgave: hvilke er underum
hvilke er underum:
$\begin{aligned} & \mathcal{U}=\left\{\left(x_1, x_2\right) \in \mathbb{R}^2 \mid x_2=x_1\right\} \\ & \mathcal{V}=\left\{\left(x_1, x_2\right) \in \mathbb{R}^2 \mid x_2=x_1^2\right\}\end{aligned}$
- $\mathcal{U}$ er et underrum (jfr. eksemplet ovenfor) fordi:
$$
\mathbf{x}=\left(\begin{array}{l}
x_1 \\
x_2
\end{array}\right) \in \mathcal{U} \Longleftrightarrow\left(\begin{array}{ll}
1 & -1
\end{array}\right)\left(\begin{array}{l}
x_1 \\
x_2
\end{array}\right)=(0) \Longleftrightarrow \mathbf{A x}=\mathbf{0} \text {. }
$$
- $\mathcal{V}$ er ikke et underrum fordi:
$$
(-1,1),(1,1) \in \mathcal{V} \quad \text { men } \quad(-1,1)+(1,1)=(0,2) \notin \mathcal{V}
$$
# Span 
span $\mathcal{S}$ er mængden af alle linearkombinationer af $\mathbf{v}_1, \ldots, \mathbf{v}_k$.
## For at finde ud af om noget er i span
Betragt i $\mathbb{R}^3$ vektorerne
$$
\mathbf{v}_1=\left(\begin{array}{l}
1 \\
2 \\
3
\end{array}\right), \quad \mathbf{v}_2=\left(\begin{array}{l}
4 \\
5 \\
6
\end{array}\right) \quad \text { og } \quad \mathbf{v}_3=\left(\begin{array}{l}
7 \\
8 \\
9
\end{array}\right) .
$$
Vi vil undersøge om vektorern u
$$
\mathbf{u}=\left(\begin{array}{l}
1 \\
1 \\
1
\end{array}\right) \quad \text { og } \quad \mathbf{e}_1=\left(\begin{array}{l}
1 \\
0 \\
0
\end{array}\right)
$$
tilhører mængden $\operatorname{span}\left\{\mathbf{v}_1, \mathbf{v}_2, \mathbf{v}_3\right\}$.

Dette kan også skrives som 
$$
\left(\begin{array}{lll}
1 & 4 & 7 \\
2 & 5 & 8 \\
3 & 6 & 9
\end{array}\right)\left(\begin{array}{l}
x_1 \\
x_2 \\
x_3
\end{array}\right)=\left(\begin{array}{l}
1 \\
1 \\
1
\end{array}\right)
$$
Vi undersøger om ligningssystemet kan løses:
$$
\left(\begin{array}{lll|l}
1 & 4 & 7 & 1 \\
2 & 5 & 8 & 1 \\
3 & 6 & 9 & 1
\end{array}\right) \stackrel{\text { Gauss-Jordan }}{\longrightarrow}\left(\begin{array}{rrr|c}
1 & 0 & -1 & -1 / 3 \\
0 & 1 & 2 & 1 / 3 \\
0 & 0 & 0 & 0
\end{array}\right) .
$$
Der gælder altså fx
$$
-\frac{1}{3} \mathbf{v}_1+\frac{1}{3} \mathbf{v}_2=\mathbf{u}
$$
Konklusion: $\quad \mathbf{u} \in \operatorname{span}\left\{\mathbf{v}_1, \mathbf{v}_2, \mathbf{v}_3\right\}$ (endda er $\mathbf{u} \in \operatorname{span}\left\{\mathbf{v}_1, \mathbf{v}_2\right\}$ ).
v3 er linært afhængig

følgende betingelser ækvivalente:
(i) $\mathbf{u}$ tilhører $\operatorname{span}\left\{\mathbf{v}_1, \ldots, \mathbf{v}_k\right\}$.
(ii) Ligningssystemet $\mathbf{A x}=\mathbf{u}$ har (mindst) en løsning.
# Linær uafhængighed
Et sæt $\mathcal{S}=\left\{\mathbf{v}_1, \ldots, \mathbf{v}_k\right\}$ af vektorer i $\mathbb{R}^n$ kaldes lineært uafhængigt hvis den eneste løsning til ligningen
$$
x_1 \mathbf{v}_1+\cdots+x_k \mathbf{v}_k=\mathbf{0}
$$
er $x_1=\cdots=x_k=0$. I modsat fald kaldes $\mathcal{S}$ for lineært afhængigt.
## Rank
Lad $\mathbf{v}_1, \ldots, \mathbf{v}_k \in \mathbb{R}^n$ og sæt $\mathbf{A}=\left(\mathbf{v}_1|\cdots| \mathbf{v}_k\right)$ (en $n \times k$ matrix). Da er følgende betingelser ækvivalente:
(i) Vektorerne $\mathbf{v}_1, \ldots, \mathbf{v}_k$ er lineært uafhængige.
(ii) $\operatorname{rank} \mathbf{A}=k$.
## eksempeler
### Linært afhængig

$$
\left(\mathbf{v}_1\left|\mathbf{v}_2\right| \mathbf{v}_3 \mid \mathbf{0}\right)=\left(\begin{array}{lll|l}
1 & 4 & 7 & 0 \\
2 & 5 & 8 & 0 \\
3 & 6 & 9 & 0
\end{array}\right) \stackrel{\text { Gauss-Jordan }}{\sim}\left(\begin{array}{rrr|r}
1 & 0 & -1 & 0 \\
0 & 1 & 2 & 0 \\
0 & 0 & 0 & 0
\end{array}\right)
$$
viser, at ligningen $x_1 \mathbf{v}_1+x_2 \mathbf{v}_2+x_3 \mathbf{v}_3=\mathbf{0}$ har mange løsninger, $\mathrm{fx}$
$$
\mathbf{v}_1-2 \mathbf{v}_2+\mathbf{v}_3=\mathbf{0}
$$
Konklusion: $\quad v_1, v_2, v_3$ lineært afhængige.
Bemærkning: Hvis $\mathbf{v}_4 \in \mathbb{R}^3$ er en vilkårlig vektor, da er $\mathbf{v}_1, \mathbf{v}_2, \mathbf{v}_3, \mathbf{v}_4$ også lineært afhængige fordi
$$
\mathbf{v}_1-2 \mathbf{v}_2+\mathbf{v}_3+0 \mathbf{v}_4=\mathbf{0}
$$
### linært uafhængige
lineært uafhængige fordi udregningen
$$
\left(\mathbf{v}_1\left|\mathbf{v}_2\right| \mathbf{0}\right)=\left(\begin{array}{ll|l}
1 & 4 & 0 \\
2 & 5 & 0 \\
3 & 6 & 0
\end{array}\right) \stackrel{\text { Gauss-Jordan }}{\sim}\left(\begin{array}{ll|l}
1 & 0 & 0 \\
0 & 1 & 0 \\
0 & 0 & 0
\end{array}\right)
$$
viser, at ligningen $x_1 \mathbf{v}_1+x_2 \mathbf{v}_2=\mathbf{0}$ kun har løsningen $x_1=x_2=0$.

er der nogle variabler der kun kan defineres med andre så er de afhægnige. 
# Linær kombination
$$
a_1 \mathbf{v}_1+a_2 \mathbf{v}_2+a_3 \mathbf{v}_3+\cdots+a_n \mathbf{v}_n
$$
# Baser
fjerner de linært afgænige vektorer fra spanet, Basen er også i underummet. 
Baser er linært uafhængig.

Basisvektorer, I hat og J hat.

Mængden af vektorer i en basis er det samme som dimensionen. 

alle underum har en basis. 
Standardbasen (som er en basis!) for $\mathbb{R}^n$ er $\mathcal{B}=\left\{\mathbf{e}_1, \mathbf{e}_2, \ldots, \mathbf{e}_n\right\}$ hvor
$$
\mathbf{e}_1=\left(\begin{array}{c}
1 \\
0 \\
\vdots \\
0
\end{array}\right), \mathbf{e}_2=\left(\begin{array}{c}
0 \\
1 \\
\vdots \\
0
\end{array}\right), \ldots, \mathbf{e}_n=\left(\begin{array}{c}
0 \\
0 \\
\vdots \\
1
\end{array}\right)
$$
**hvis du ser $e_1,e_2$ osv er det elementær vektor, de svarer til identitesmatricen i den dimension der er givet:** hvis vi er i $R^4$ er standard basen: $\begin{bmatrix}1 & 0 & 0 & 0 \\ 0 & 1 & 0 & 0 \\ 0 & 0 & 1 & 0 \\ 0 & 0 & 0 & 1\end{bmatrix}$, her er $e_n$ svarende til den n'te kolone. hvis de spørger om $e_{3}$ ligger i spannet f.eks. så er det $\begin{bmatrix}0 \\ 0 \\ 1 \\ 0\end{bmatrix}$ der er snak om, der ville man bruge vektorne og skrive $e_3$ i resultat kolonen 
der skal være mindst en løsning ellers er den ikke i basen. 
## Er det en base?
$$
\begin{array}{|ll|}
\hline{\mathcal{B}=\left\{\mathbf{v}_1, \mathbf{v}_2\right\}} \\
\hline \hline \text { Er } \mathcal{B} \text { linært uafh. ? } & \text { Ja } \\
\text { Er span } \mathcal{B}=\mathcal{U} ? & \text { Ja } \\
\hline \hline \text { Er } \mathcal{B} \text { basis for } \mathcal{U} ? & \text { Ja } \\
\hline
\end{array}
$$
Hvis svar på en af de 2 spørgsmål er nej så er det ikke en base.

## Basis vektor - koordinater
$\operatorname{Lad} \mathcal{B}=\left\{\mathbf{b}_1, \ldots, \mathbf{b}_k\right\}$ være en (ordnet) basis for et underrum $\mathcal{U} \subseteq \mathbb{R}^n$ Til hvert $\mathbf{v} \in \mathcal{U}$ findes entydigt bestemte tal $x_1, \ldots, x_k \in \mathbb{R}$ så
$$
\mathbf{v}=x_1 \mathbf{b}_1+\cdots+x_k \mathbf{b}_k
$$
Vektoren med disse tal kaldes koordinaterne for $\mathbf{v}$ mht. basen $\mathcal{B}$ :
$$
[\mathbf{v}]_{\mathcal{B}}=\left(\begin{array}{c}
x_1 \\
\vdots \\
x_k
\end{array}\right) \text {. }
$$
bestem Koordinater.
![|500](https://i.imgur.com/inljOZO.png)
![|500](https://i.imgur.com/JpYKdwP.png)
## Bestem basisskift matrix
PB <- C:
[B|C] -> [I|PB]
PC <- B:
[C|B] -> [I|PC]
## Konverter koordianter
Skriv vektoren $\mathbf{x}=3 \mathbf{v}_1+4 \mathbf{v}_2$ som en linearkombination af vektorerne $\mathbf{u}_1$ og $\mathbf{u}_2$.
Det oplyses, at $\mathcal{B}=\left\{\mathbf{u}_1, \mathbf{u}_2\right\}$ og $\mathcal{C}=\left\{\mathbf{v}_1, \mathbf{v}_2\right\}$ begge er (ordnede) baser. Bestem basisskiftmatrix: 
PB <- C:
[B|C] -> [I|PB]
Dernæst tag skalerne og skriv dem som vektor og regn  $P_B\begin{bmatrix}3 \\ 4\end{bmatrix} = \begin{bmatrix}[x_1]_B \\ [x_2]_B\end{bmatrix}$
nu har du de tilsvarende skalers i basis B, skriv svaret op:  $\mathbf{x}=[x_1]_B  \mathbf{u}_1+[x_2]_B\mathbf{u}_2$
**bemærk at vi bruger $u_{1}$ og $u_2$ og ikke $v_1,v_2$ fordi vi har skiftet basis**. 
# Dimensioner
mængden af basisvektorer i spanet. alle baser i et span har samme mængde af vektorer. 

Theorem 3.9 (Om antallet af vektorer i en basis) Lad $\mathcal{U}$ være et underrum af $\mathbb{R}^n$. Hvis
$$
\mathcal{B}=\left\{\mathbf{u}_1, \ldots, \mathbf{u}_m\right\} \quad \text { og } \quad \mathcal{C}=\left\{\mathbf{v}_1, \ldots, \mathbf{v}_n\right\}
$$
begge er baser for $\mathcal{U}$, så er $m=n$.

...og dette antal vektorer er dimensionen af underrummet:

Definition 3.8 (Dimension af underrum)
Lad $\mathcal{U}$ være et underrum af $\mathbb{R}^n$. Antallet af vektorer i en basis for $\mathcal{U}$ kaldes dimensionen af $\mathcal{U}$ og skrives $\operatorname{dim} \mathcal{U}$. Vi definerer $\operatorname{dim}\{\mathbf{0}\}=0$.
## nemmere at afgøre om b er en basis for u med dim
Theorem 3.10 (Kriterium for at være en basis)
Lad $\mathcal{U}$ være et underrum af $\mathbb{R}^n$ med $\operatorname{dim} \mathcal{U}=k . \operatorname{Lad} \mathcal{B}=\left\{\mathbf{u}_1, \ldots, \mathbf{u}_k\right\}$ være en delmængde af $\mathcal{U}$ indeholdende $k$ vektorer.
(a) Hvis $\mathcal{B}$ er lineært uafhængigt, da er $\mathcal{B}$ en basis for $\mathcal{U}$.
(b) Hvis span $\mathcal{B}=\mathcal{U}$, da er $\mathcal{B}$ en basis for $\mathcal{U}$.
![|550](https://i.imgur.com/MVNCrto.png)
![|550](https://i.imgur.com/JBHYrdg.png)
# Linær transfomation
**Hvad gør det en linær transformation?**
- Linjer forbliver linjer før og efter transformation
- Origo flytter sig ikke
- Generelt kan man sige at man holder grid lines parallel og evenly spaced
![|550](https://i.imgur.com/IRO5r4v.png)
**Definition 3.12 (Lineare transformationer)**
En funktion $T: \mathbb{R}^n \rightarrow \mathbb{R}^m$ som opfylder
$$
T(\mathbf{u}+\mathbf{v})=T(\mathbf{u})+T(\mathbf{v}) \quad \text { og } \quad T(s \mathbf{v})=s T(\mathbf{v})
$$
for alle $\mathbf{u}, \mathbf{v} \in \mathbb{R}^n$ og $s \in \mathbb{R}$ kaldes en lineær transformation.
![|550](https://i.imgur.com/mO9SbK1.png)
![|550](https://i.imgur.com/yxHwB14.png)
![|550](https://i.imgur.com/uR4URgj.png)
![|550](https://i.imgur.com/JeZKE4e.png)
Lad der være givet to lineære transformationer
$$
\mathbb{R}^n \underset{T(\mathbf{x})=\mathbf{A x}}{\longrightarrow} \mathbb{R}^m \stackrel{S}{S(\mathbf{y})=\mathbf{B y}} \mathbb{R}^k
$$
Den sammensatte transformation $\underline{S} \circ T$ er givet ved matricen BA idet
$$
(S \circ T)(\mathbf{x})=\underbrace{S(T(\mathbf{x}))}=S(\mathbf{A x})=\mathbf{B}(\mathbf{A} \mathbf{x})=(\mathbf{B A}) \mathbf{x} .
$$
![|550](https://i.imgur.com/gT6fQis.png)
![|550](https://i.imgur.com/7Ic6vat.png)
IKKE surjektiv eller injektiv
### Afgør om den er injektiv eller surjektiv
![](https://i.imgur.com/ZuqfVaa.png)
## Inverse Linære transformationer
![|550](https://i.imgur.com/pn92wKZ.png)
## Opgave: Bestem forskriften for den linære transformation
$$
T\left(\begin{array}{l}
x_1 \\
x_2 \\
x_3
\end{array}\right)=\left(\begin{array}{c}
x_1-x_2+x_3 \\
2 x_1+x_2+5 x_3
\end{array}\right) .
$$
(a) Bestem den $2 \times 3$ matrix $\mathbf{A}$ som opfylder $T(\mathbf{x})=\mathbf{A} \mathbf{x}$ for alle $\mathbf{x} \in \mathbb{R}^3$. det er bare:
$$\begin{bmatrix}1 & -1 & 1 \\ 2 & 1 & 5\end{bmatrix}$$
(b) Bestem en vektor $\mathbf{x} \in \mathbb{R}^2$ som opfylder $(T \circ S)(\mathbf{x})=\left(\begin{array}{l}2 \\ 4 \\ 1\end{array}\right)$.
Her ganger man T og S, dernæst skrives en total matrice op, med Ax=b. bring på reduceret rækkeform. **bemærk de beder om en 2d vektor**
# Null space (ker)
**skriv løsningen fra rækkereduktion op på parmeterfremstilling ellers kommer du til at fucke op:**
$\left(\begin{array}{rrr}1 & 0 & 2 \\ 0 & 1 & -1 \\ 0 & 0 & 0 \\ 0 & 0 & 0\end{array}\right)$
set her, ville det ikke være null A = $\begin{bmatrix}2 \\ -1 \\ 0 \\ 0\end{bmatrix}$
fordi der kun er x variabler, yderligere ville der være 1t så det vil istedet være
$\begin{bmatrix}2 \\ -1 \\ 1\end{bmatrix}$ fordi $\left(\begin{array}{l}x_1 \\ x_2 \\ x_3\end{array}\right)=t\left(\begin{array}{r}-2 \\ 1 \\ 1\end{array}\right)$, man skal jo også få dem over på højre siden.

$\operatorname{ker} T=\operatorname{null} \mathbf{A}$

Theorem 3.11 (Basis for nulrum)
Lad $\mathbf{A}$ være en $m \times n$ matrix. En basis for null $\mathbf{A}$ findes således:
- Benyt den reducerede rækkeechelonform for $\mathbf{A}$ til, på sædvanlig måde, at aflæse alle løsninger til ligningen $\mathbf{A x}=\mathbf{0}$ :
$$
\mathbf{x}=t_1 \mathbf{v}_1+\cdots+t_p \mathbf{v}_p \quad(p=\text { antal frie variable })
$$
- En basis for null A er da
$$
\mathcal{B}=\left\{\mathbf{v}_1, \ldots, \mathbf{v}_p\right\}
$$
Om dimensionen, $p$, af null $\mathbf{A}$ gælder:
$$
p=\operatorname{dim}(\text { null } \mathbf{A})=n-\operatorname{rank} \mathbf{A}
$$
**Bestem kernen for B.**
![|550](https://i.imgur.com/w2ihIzd.png)
OBS: skriv det op på parmeter fremstilling først fordi du skal fjerne de fri variabler fra højre side først. 
![](https://i.imgur.com/MGVCveP.png)

Hvis man skulle bestemme kernen for S * T ville man gange matrixerne sammen, bringe dem på reduceret rækkeform. Dernæst kigger man på hvilke der er fri variabler, hvis det er x_3 og x_5 er det kolone 3 og 5 i den rækkereduceret, trækker man dem fra på venstre sider for at få dem over på nul kolonen(løsnings kolonen), det er basis for kernen. 
## Opgave bestem basis for kernen (S * T)
gang transformations matricer sammen, bring på reduceret rækkeform og aflæs kernen. 
## Opgave vektor der tilhører både ker og ran
## Opgave ker af 1x3 matrix
$\begin{bmatrix}2 & 0 & 1\end{bmatrix}$, rækkereducer: $\begin{bmatrix}1 & 0 & 1/2\end{bmatrix}$ , her er $x_2$ og $x_3$ ikke bundet derfor bliver ker $\{\begin{bmatrix}0 \\ 1 \\ 0\end{bmatrix},\begin{bmatrix}-1/2 \\ 0 \\ 1\end{bmatrix}\}$ fordi man fjerner $x_3$ fra venstre. $x_2$ er fri men fremkommer ikke i def af $x_1$, $x_3$ er fri.  
# Søjlerum (Ran)
$\operatorname{ran} T=\operatorname{col} \mathbf{A}\left(=\operatorname{row} \mathbf{A}^{\top}\right)$
Theorem 3.13 (Basis for søjlerum)
Lad $\mathbf{A}=\left(\mathbf{A}_1|\cdots| \mathbf{A}_n\right)$ være en $m \times n$ matrix. En basis for col $\mathbf{A}$ findes således:
- Find de søjlenumre $j_1, \ldots, j_r$ i den reducerede rækkeechelonform for $\mathbf{A}$ som har et pivot 1-tal (hvor $r=\operatorname{rank} \mathbf{A}$ ).
- En basis $\mathcal{B}$ for col $\mathbf{A}$ udgøres af de tilsvarende søjler i $\mathbf{A}$, dvs.
$$
\mathcal{B}=\left\{\mathbf{A}_{j_1}, \ldots, \mathbf{A}_{j_r}\right\}
$$
Om dimensionen af col $\mathbf{A}$ gælder:
$$
\operatorname{dim}(\operatorname{col} \mathbf{A})=\operatorname{rank} \mathbf{A}
$$
![|550](https://i.imgur.com/A26Ccrq.png)
tag din matrix, bring den på reduceret rækkeform, kig på hvilke x'er der er fri variabler, fjerne deres kolone, så hvis x_3 er fri så fjern kolone 3. **Du fjerne alle de fri variabel koloner, fra den orignale matrice og giver det som basen, ikke den rækkereduceret som med kernen.** D
## Opgave betem basis for col A
![|550](https://i.imgur.com/KtYLTMg.png)
# Rækkerum
$\operatorname{ran} T=\operatorname{col} \mathbf{A}\left(=\operatorname{row} \mathbf{A}^{\top}\right)$
![|500](https://i.imgur.com/4pqTtVN.png)
Tager A normal, der ikke er transporneret, bringer den på reduceret rækkeform. 
så tager jeg alle pivot rækkerne og skriver rækken som en kolone: B er A rækkereduceret
Svaret bliver B's pivot rækker.
![|500](https://i.imgur.com/UGcZxM8.png)
En basis $\mathcal{B}$ for row $\mathbf{A}$ udgøres af ikke-nulrækkerne i $\mathbf{B}$, dvs.
$$
\mathcal{B}=\left\{{ }_1 \mathbf{B}, \ldots,{ }_r \mathbf{B}\right\} .
$$
Om dimensionen af row $\mathbf{A}$ gælder:
$$
\operatorname{dim}(\operatorname{row} \mathbf{A})=\operatorname{rank} \mathbf{A} .
$$
## Opgave bestem rækkerum
![|550](https://i.imgur.com/9aIhjd6.png)
