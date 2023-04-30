# Divisibility
Divisibility er om 2 tal kan divideres og blive til et heltal.
$n|m$: n divides m
hvis $n|m$, så $m = qn$, det betyder m er en multiple af n og er større eller lig n 
hvis m ikke er en multiple af $n \nmid m$, "n does not divide m"
## Theorem 2
(a) If a | b and a | c, then a | (b + c).
(b) If a | b and a | c, where b > c, then a | (b − c).
(c) If a | b or a | c, then a | bc.
(d) If a | b and b | c, then a | c.
### Proof
(a) If $a | b$ and $a | c$, then $b = k_1a$ and $c = k_2a$ for integers$ k_1$ and $k_2$. So
$b + c = (k_1 + k_2)a$ and $a | (b + c)$.

(b) This can be proved in exactly the same way as (a).

(c) As in (a), we have $b = k_1a$ or $c = k_2a$. Then either $bc = k_1ac$ or
$bc = k_2ab$, so in either case $bc$ is a multiple of a and $a | bc$.

(d) If $a | b$ and $b | c$, we have $b = k1a$ and $c = k_2b$, so $c = k_2b = k_2(k_1a) = (k_2k_1)a$ and hence $a | c$.
## Ekstra:
1. Et tal er divisible med 2 hvis tallet ender med 0,2,4,6,8
2. Et tal er divisble med 3 hvis tallets cifre summer op til noget der er divisble med 3, 111 (1+1+1=3), 522(5+2+2=9).

# Primes and prime factorization
Et primtal er et heltal der er større end 1 og kun er divisible med 1 og tallet selv. GCD til et 2 primtal vil derfor altid være 1. 
## prime factorization
Alle heltal over 1 kan skrives som et produkt af primtal, det er prime factorization.
$483 = 3 \cdot 7 \cdot 23$
$567 = 3^{4} \cdot 7$
$645868=2^2 \cdot 61 \cdot 2647$

Primtal kan ikke brydes ned til primtal fordi de allerede er primtal (duh!)

Composite numre: Tal der skrives som et produkt af faktor $2 \cdot 4 = 8$, disse faktorer kan også være primtal (prime factorization) 

0 og 1 er hverken prim eller composite. 
### Prime factor tree en hurtig måde at gøre det på
I et prime factor træ bliver man ved med at faktorerer indtil at alle divisors er prime. med 72 kan man dele
det op i 2 og 36, 36 kan deles op yderligere og yderligere. man ender med at gange alle primtallene sammen til sidst, så 72 ville være $2^{3}\cdot 3^{2}=72$
![|100](https://i.imgur.com/fwVhZdn.png)
Tal som 16 ville være $2^4$
![|100](https://i.imgur.com/4X17Tdn.png)
# GCD (GCF,HCF)
Greatest common divisor også kendt som greatest common factor eller highest common factor.

Hvis k|a og k|b så er k en common divisor, hvis man forestiller sig at d er den største k så er GCD(a,b)=d
yderligere en multiple af a og b også være GCD(a,b)

Hvis man tager GCD til tre tal kan følgende gøres:
GCD(a,b,c) = GCD((a,b),c) 

## En simpel men ineffektiv måde
$GCD(25,10)$
$25: 1,5,25$
$10:1,2,5,10$

Her er 5 den højeste divisor de begge deler, man skriver altså alle divisors(k) op til begge tal(a,b) og ser hvilke divisor de deler og udvælger den højeste af de divisors(d) og det er så GCD til de 2 tal(a,b).

GCD kan også udvides til større set af tal, her sammenligner man bare yderlige f.eks. et 3. tal. 
$GCD(30,36,24)$$
$30: 1,2,3,5,6,10,15,30$
$36: 1,2,3,4,6,9,12,18,46$
$24:1,2,4,6,12,24$

Her ser man at den højeste divisor de alle deler er 6. $GCD(30,36,24) = 6 = 2 \cdot 3$
## Euklids algoritme
![|200](https://i.imgur.com/rmHpF7X.png)
![|260](https://i.imgur.com/s0zHQIr.png)
Her er r rest.
Derfor kan modular operatoren også bruges hvis man har en computer 
273 % 98 = 77
98 % 77 = 21
77 % 21 = 14
21 % 14 = 7
14 % 7 = 0 
GCD(273,98) = 7

### En anden måde: 
Hvis d | a og d | b så d | a-b, det betyder at GCD(a,b)=GCD(a-b,b) og det kan man blive ved med indtil man når til at a og b er ens. Man kan bruge følgende skridt til at finde GCD(a,b)

1. Hvis $a=b$ stop, GCD(a,b) = a, ellers gå til skridt 2.
2. Hvis $a > b$, så $a=a-b$, gå tilbage til skridt 1. 
3. Hvis $b > a$, så $b = b-a$  og gå tilbage til skridt 1
**Eksempel**:
GCD(84,132)
1. a = 84, b = 132, siden b > a så er b nu 132 - 84 = 48 
2. a = 84, b = 48, siden a > a så er a nu 84 - 48 = 36
3. a = 36, b = 48, siden b > a så er b nu 48 - 36 = 12
4. a = 36, b = 12, siden a > b så er a nu 36 - 12 = 24
5. a = 24, b = 12, siden a > b så er a nu 24 - 12 = 12
6. a = 12, b = 12, siden a = b og a = 12 så er GCD (84,132) = 12 

## Find GCD hurtigt med prime factorization 
Skriv tal op med prime factorization 
multiply alle common prime factors og få GCD
$GCD(294,819)$
$294 = 2 \cdot 3 \cdot 7 \cdot 7$
$819 = 3 \cdot 3 \cdot 7 \cdot 13$
$GCF(819,294) = 3 \cdot7 =21$

$GCD(16,32)$
$16 = 2 \cdot2 \cdot2 \cdot2 = 2^4$
$32 = 2 \cdot2 \cdot2 \cdot2 \cdot2 = 2^{4} \cdot 2$
$GCF = 2 \cdot2 \cdot2 \cdot2 = 2^{4}= 16$

Man kan også gøre det med ubekendte: 
$$
\begin{aligned}
& GCD(12xy,15x^2y^3) \\
& 12xy= 2^{2}\cdot 3 \cdot x \cdot y \\
& 15x^2y^3 = 3 \cdot 5 \cdot x \cdot x \cdot y \cdot y \cdot y \\
& GCF = 3xy
\end{aligned}
$$
## Bézout's identity:
$\forall a,b \in \mathbb{Z} ~~ \exists x,y \in \mathbb{Z} ~~ st. ~~ ax+by=GCD(a,b)$
# LCM
Least common multiple 
Et multiple af et tal er tal der er n gange større end et andet tal
4 er en multiple af 2 fordi 2 * 2 = 4

Der er uendeligt mange multiples af en given integer derfor er vi ikke intresseret i GCM, da det ville være et uendeligt stort tal, men derimod LCM.

## Computing LCM
Det tager lang tid at liste alle multiples af et tal derfor kan man gøre følgende for at beregne LCM

$$
\begin{gathered}
a=p_1^{\alpha_1} p_2^{\alpha_2} \ldots p_k^{\alpha_k} \\
b=p_1^{\beta_1} p_2^{\beta_2} \ldots p_k^{\beta_k}
\end{gathered}
$$
$$\operatorname{lcm}(a, b)=p_1^{\max \left(\alpha_1, \beta_1\right)} p_2^{\max \left(\alpha_2, \beta_2\right)} \ldots p_k^{\max \left(\alpha_k, \beta_k\right)}$$
Her benyttes prime factorization, skriver man begge tal op med prime factorization og sammenligner a's første primtals eksponent og b's første primtals eksponent osv. produktet af alle disse primtal bliver lcm.

Her ses et eksempel: ting er opløftet i første for at huske en på at der er gemte 1 taller, dette samme med $1^1$. 1 er ikke et primtal så det er ikke korrekt at skrive det på den måde, men er gjort for at illusterer metoden klart og tydeligt 
$$
\begin{aligned}
&4200=2^3 \cdot 3^1 \cdot 5^2 \cdot 7^1 \\
&3780=2^2 \cdot 3^3 \cdot 5^1 \cdot 7^1 \\
&3528=2^3 \cdot 3^2 \cdot 1^1\cdot 7^2 \\
&LCM(4200,3780) = 2^3 \cdot 3^3 \cdot 5^2 \cdot 7^1 = 37800\\
& LCM(4200,3780,3528)= 2^3\cdot 3^3 \cdot 5^2 \cdot 7^2 = 264600 
\end{aligned}
$$
Her ser man hvordan man rigtigt ville skrive det op
$$
\begin{aligned}
&4200=2^3 \cdot 3 \cdot 5^2 \cdot 7 \\
&3780=2^2 \cdot 3^3 \cdot 5 \cdot 7 \\
&3528=2^3 \cdot 3^2 ~~~~\cdot 7^2 \\
\end{aligned}
$$
## Eksempler
LCM(10,8)
Her spørger man hvilke tal der er den laveste multiple af 8 og 10 
Her ganges 8 og 10 med 1,2,3,4, ... 10 
8: 8, 16, 24, 32, 40, 48, 56, 64, 72, 80
10: 10, 20, 30, 40, 50, 60 ,70 ,80, 90, 100
Her ser man at de begge har 40 og 80 som common multiple, men 40 er den laveste multiple derfor er LCM(8,10)=40

Dette kan bruges til når man skal lægge brøker sammen hvor man skal finde en fælles nævner. 
$\frac{3}{8} + \frac{2}{10} = \frac{15}{40} + \frac{8}{40} = \frac{23}{40}$

#### Et hverdagscenarie: 
Hvis en pakke bøffer indeholder 4 bøffer og en pakke brød indeholder 6 brød, hvor mange pakker brød og bøffer skal jeg købe for at stå uden overskud af brød og bøffer.

LCM(4,6) = 12, jeg skal købe 3 pakker bøffer og 2 pakker brød. 


**LCM er et koncept der er tæt knyttet til GCD. produktet af a og b er det samme som produktet af GCD(a,b) og LCM(a,b)**

Eksempel: 
GCD(84,133) = 7
LCM(84,133) = 1596
84 * 133 = 11.172
GCD(84,133) * LCM(84,133) = 11.172
## Egenskaber ved lcm
The LCM of a list of numbers _divides_ any other common multiple.
$lcm(a,b,c)=lcm(lcm(a,b),c)$
Samme egenskaber gælder for GCD

--- 
Tags: 
se KBR 1.4
https://brilliant.org/wiki/lowest-common-multiple/#computing-the-lcm