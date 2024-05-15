# Tables
![](https://i.imgur.com/Wu8cvJ3.png)
![]([](<https://i.imgur.com/uKnbhGm.png)>)
# Opgave 1
$$\int_a^b f(x) g(x) d x=[f(x) G(x)]_a^b-\int_a^b f^{\prime}(x) G(x) d x$$
![|350](https://i.imgur.com/D1qwnen.png)

## Tegn område
with(plots);
inequal({0 < y,  y < 1/x, 1 < x, x < 2});
inequal({|x|+|y|<=1});
## Er det en tæthed
![](https://i.imgur.com/pRhubDU.png)
### Nord-syd
$$
A=\left\{(x, y) \in \mathbb{R}^2 \mid a<x<b \text { og } \mu(x)<y<\nu(x)\right\}
$$
![](https://i.imgur.com/TpCGnh5.png)
Metode: Identificerer (marginale) x-grænser og (betingede) y-grænser for givet x.
#### Eksemplet
$$
f(x, y)= \begin{cases}\frac{3}{2} y & \text { for } 0<y, x^2+y^2<1 \\ 0 & \text { ellers }\end{cases}
$$
her har vi en nem har y en nedre grænse men det har x ikke i den her ulighed, men når vi tegner det ser vi at x har en marginal grænse. 

Dvs i dette tillfælde kan vi ikke lave nogen nice betinget grænse for x, derfor er det bedre at lave den betinget grænse for y og så lave en marginal grænse for x:

inequal giver at x går fra $x\in(-1, 1)$ 

isoler y i ulighed $0<y<\sqrt(1-x^2)$
derved fås integral:
$$
\int_{-1}^1 \int_0^{\sqrt{1-x^2}} \frac{3}{2}y~ (dy)(dx)
$$
### Øst-vest
$$
A=\left\{(x, y) \in \mathbb{R}^2 \mid c<y<d \text { og } \alpha(y)<x<\beta(y)\right\}
$$
![](https://i.imgur.com/fapj5Nx.png)
	Metode: Identificerer (marginale) y-grænser og (betingede) x-grænser for givet y
### Omskrivning af uligheder


$0 < y , x^2 + y^2 < 1$


**Hvis man vil gange eller dividere med et _negativt_ tal, så skal man vende ulighedstegnet om.**


$$|x|+|y|\leq1$$
$$|x|\leq1-|y|$$
når man har med nummerisk værdi vil man altid kunne gøre følgende
$$|x|\leq y \rightarrow -y\leq x\leq y$$
derfor
$$**-(1-|y|)\leq x\leq1-|y|**$$

## Tæthed til fordeling <=> Fordeling til tæthed
$$F(x)=\int_{-\infty}^x f(t) d t$$
$$f(x, y)=\frac{\partial^2 F(x, y)}{\partial x \partial y}$$
## Marginale tætheder
Integerer det ene ud: marginal tæthed for x. Integerer y væk. Brug grænser som du bruger til at vise tæthed. 

### Grænse til marginale tæthed
få grænsen til marginale tætheder:
for $0 < x < 1$ , $0 < y < x^2$
hvis det ikke er klart så prøv at få både og x og y i en lang ulighed
$0<\sqrt{y}<x<1$
på den måde har jeg fået en grænse jeg kan bruge til at få den marginale tæthed af y.
for $0 < x < 2$ , $0 < y < \frac{1}{x}$
det tyder på at man tit skal gange med den inverse på x og y siderne
for $0 < x < 2$ , $0 < \frac{1}{y} < \frac{1}{\frac{1}{x}}<2$
som er det samme som
for $0 < x < 2$ , $0 < \frac{1}{y} < x< 2$


Marginale tætheder fås ved at integrere den anden variabel ud:
$$
\begin{aligned}
& g(x)=\int_{-\infty}^{\infty} f(x, y) \mathrm{d} y \stackrel{\mathrm{NS}}{=} \int_{\mu(x)}^{\nu(x)} f(x, y) \mathrm{d} y \\
& h(y)=\int_{-\infty}^{\infty} f(x, y) \mathrm{d} x \stackrel{\emptyset \mathrm{V}}{=} \int_{\alpha(y)}^{\beta(y)} f(x, y) \mathrm{d} x
\end{aligned}
$$
### er de uafhængige
Der skal gælde:
$f_{X, Y}(x, y)=f_X(x) f_Y(y)$
vi kan kun komme fra de marginale tæthedsfunktioner til den simulan tæthedsfunktioner hvis X og Y er uafhængige.
## P(x<X<y) and joint distrubtions
$$P(a<X \leq b)=F(b)-F(a)=\int_a^b f(x) d x $$
$$
F_{X, Y}(x, y)=P(X \leq x, Y \leq y)
$$
$$
P((X, Y) \in A)=\sum_{(x, y) \in A} \sum_P P(X=x, Y=y)
$$
$$
P(X + Y > 1) =P((X, Y) \in A)=\int_A f(x, y) \mathrm{d}(x, y)
$$

$$
\begin{aligned}
\int_A f(x, y) \mathrm{d}(x, y) & =\int_a^b\left(\int_{\mu(x)}^{\nu(x)} f(x, y) \mathrm{d} y\right) \mathrm{d} x \\
& =\int_c^d\left(\int_{\alpha(y)}^{\beta(y)} f(x, y) \mathrm{d} x\right) \mathrm{d} y
\end{aligned}
$$
## LOTUS
Theorem 4.5.1: LOTUS for diskrete variable
Hvis $X$ er diskret med sandsynlighedsfunktion $p$, så
$$
\mathrm{E}[g(X)]=\sum_x g(x) p(x)
$$
Theorem 5.1.11: LOTUS for kontinuerte variable
Hvis $X$ er kontinuerte med tæthedsfunktion $\tilde{f}$, så
$$
\mathrm{E}[g(X)]=\int_{-\infty}^{\infty} g(x) \tilde{f}(x) \mathrm{d} x
$$
## 2D LOTUS
Theorem 7.2.1: LOTUS
- Hvis $X$ og $Y$ er diskrete med simultan sandsynlighedsfunktion $p(x, y)$, så gælder
$$
\mathrm{E}[g(X, Y)]=\sum_x \sum_y g(x, y) p(x, y)
$$
- Hvis $X$ og $Y$ er kontinuerte med simultan tæthedsfunktion $f(x, y)$, så gælder
$$
\begin{aligned}
\mathrm{E}[g(X, Y)] & =\int_{-\infty}^{\infty} \int_{-\infty}^{\infty} g(x, y) f(x, y) \mathrm{d} x \mathrm{~d} y
\end{aligned}
$$

## Transformationsætning
Theorem 8.1.1: Transformation af en-dimensional variabel
Lad $X$ være en kontinuert stokastisk variabel med tæthedsfunktion $f_X(x)$, og lad $g: \mathbb{R} \rightarrow \mathbb{R}$ være differentiabel og strengt monoton (strengt voksende eller strengt aftagende). Så er $Y=g(X)$ en kontinuert stokastisk variabel med tæthedsfunktion
$$
f_Y(y)=f_X(x) \cdot\left|\frac{\partial g^{-1}(y)}{\partial y}\right|=f_X(x) \cdot \frac{1}{\left|\frac{\partial g(x)}{\partial x}\right|} \quad \text { hvor } x=g^{-1}(y)
$$
Find invers g(x): $g(x)^{⁻1}$
F (x)=y og isolerer x.

sæt g ind i tæthed f:  $f(g(x)^{⁻1})$
differenter invers $g'(x)^{⁻1}$
gang de to sammen $f(g(x)^{⁻1})\cdot g'(x)^{⁻1}$

husk at den nye tætheds billedmængde er X's der er blevet sat ind i g(x), så hvis f(x) har 0 < y < 1, så har g(x) g(0) < y < g(1)

## Middelværdi
$$
E(X)=\int_{-\infty}^{\infty} x f(x) d x
$$
$$
E(X^2)=\int_{-\infty}^{\infty} x^2 f(x) d x
$$

## Varians
$$
\operatorname{Var}(X)=E\left(X^2\right)-(E(X))^2
$$
$$
\mathrm{SD}(X)=\sqrt{\operatorname{Var}(X)}
$$
## Kovarians
![](https://i.imgur.com/d7upzYT.png)
$$
\operatorname{Cov}(X, Y)=E(X Y)-E(X) E(Y)
$$

1. $\operatorname{Cov}(X, X)=\operatorname{Var}(X)$.
2. $\operatorname{Cov}(X, Y)=\operatorname{Cov}(Y, X)$.
3. $\operatorname{Cov}(X, c)=0$ for any constant $c$.
4. $\operatorname{Cov}(a X, Y)=a \operatorname{Cov}(X, Y)$ for any constant $a$.
5. $\operatorname{Cov}(X+Y, Z)=\operatorname{Cov}(X, Z)+\operatorname{Cov}(Y, Z)$.
6. $\operatorname{Cov}(X+Y, Z+W)=\operatorname{Cov}(X, Z)+\operatorname{Cov}(X, W)+\operatorname{Cov}(Y, Z)+\operatorname{Cov}(Y, W)$.
7. $\operatorname{Var}(X+Y)=\operatorname{Var}(X)+\operatorname{Var}(Y)+2 \operatorname{Cov}(X, Y)$. For $n$ r.v.s $X_1, \ldots, X_n$,
$$
\operatorname{Var}\left(X_1+\cdots+X_n\right)=\operatorname{Var}\left(X_1\right)+\cdots+\operatorname{Var}\left(X_n\right)+2 \sum_{i<j} \operatorname{Cov}\left(X_i, X_j\right)
$$
## Simulation
### Eksempel 1
$G^{-1}(p)=\sqrt{\frac{4}{4-3 p}}, \quad p \in(0,1)$
du bliver bedt om at simulere for middelværdi eller varians, spredning: først bestem fordelingsfumktion G fra tæthed (integrate fra -uendelig til x) og dernæst invers af fordeling (de giver den tit til dig)
```r
Gfrak <- function(p){sqrt(4/(4-3*p))}

U <- runif(10000,0,1) # man kan også unlade 0,1
X <- Gfrak(U) # fraktilfunktion af G
mean(X) # eller hvis du bliver bedt om E(sqrt(X))
mean(sqrt(X))
```
### eksempel 2
1.6: Lad $\left(X_1, Y_1\right), \ldots,\left(X_{1000}, Y_{1000}\right)$ være 1000 iid gentagelser af $(X, Y)$. Vi tænker på dette som positionen af 1000 festivalgæster på plænen foran musikscenen. Lav en skitse der viser en realisation af disse punkter:

Den marginale tæthed for y er:
$$
g(y)= \begin{cases}\frac{1}{50} & \text { for } y \in[0,50] \\ 0 & \text { ellers }\end{cases}
$$
Det svarer til at y er uniformt fordelt $Y \sim \operatorname{Unif}(0,50)$
Vi skal lave 1000 gentagelser N=1000, *r*unif som prefiks er til simulation i R. 

```r
N <- 1000
Y <- runif(N,0,50)
```
Matematisk set kan tilskuerplænen defineres som et område $A$ givet ved
$$
A=\left\{(x, y) \in \mathbb{R}^2 \mid 0<y<50,-10-\frac{y}{2}<x<10+\frac{y}{2}\right\} .
$$
Vi har området for y allerede defineret, nu mangler vi x simuleret. 

``` r
X<-runif(N,-10-Y/2,10+Y/2)
```
nu kan de plottes:

```r
plot(X,Y)
## evt args
pch=16 # hvor udfyldte prikkerne skal være
cex=0.5 # størrelse af prikker. ret god!
xlim=c(-35,35) # hvor x aksen starter og slutter
ylim=c(0,50) # hvor y aksen starter og slutter
```


## Regneregler for middelværdi var osv
![](https://i.imgur.com/rbYyZRL.png)
![[Pasted image 20240116141450.png]]

# Opgave 2
## AND OR 
Hvis de er uafhængige:
$P(X=x) \cdot P(Y=y) = P(X=x,Y=y) = P(X=x)~and ~P(Y=y)$ 
$P(X=x) + P(Y=y) = P(X=x)~or~P(Y=y)$
Samme regler gælder for fordelingsfunktioner.

Simultant:
$$
P\left(X_1=x_1, \ldots, X_n=x_n\right)=P\left(X_1=x_1\right) \cdots P\left(X_n=x_n\right)
$$


## LOTP
Theorem 2.3.6 (Law of total probability). Let $A_1, \ldots, A_n$ be a partition of the sample space $S$ (i.e., the $A_i$ are disjoint events and their union is $S$ ), with $P\left(A_i\right)>0$ for all $i$. Then
$$
P(B)=\sum_{i=1}^n P\left(B \mid A_i\right) P\left(A_i\right)
$$

$$
\begin{array}{ccc}
\hline & Y \text { discrete } & Y \text { continuous } \\
\hline X \text { discrete } & \sum_y P(X=x \mid Y=y) P(Y=y) & \int_{-\infty}^{\infty} P(X=x \mid Y=y) f_Y(y) d y \\
X \text { continuous } & \sum_y f_X(x \mid Y=y) P(Y=y) & \int_{-\infty}^{\infty} f_{X \mid Y}(x \mid y) f_Y(y) d y \\
\hline
\end{array}
$$
## Bayes
Theorem 2.3.3 (Bayes' rule).
$$
P(A \mid B)=\frac{P(B \mid A) P(A)}{P(B)} .
$$
**Bruges i opgave 2 til tabel**
$$
P(Y=y \mid X=x)=\frac{P(X=x \mid Y=y) P(Y=y)}{P(X=x)} .
$$
$$
\begin{array}{ccc|c}
\hline & Y=1 & Y=0 & \text { Total } \\
\hline X=1 & \frac{5}{100} & \frac{20}{100} & \frac{25}{100} \\
X=0 & \frac{3}{100} & \frac{72}{100} & \frac{75}{100} \\
\hline \text { Total } & \frac{8}{100} & \frac{92}{100} & \frac{100}{100} \\
\hline
\end{array}
$$
$$
P(Y=1 \mid X=1)=\frac{P(X=1, Y=1)}{P(X=1)}=\frac{5 / 100}{25 / 100}=0.2 \text {, }
$$
$$
\begin{aligned}
&\text { Here are the four versions of Bayes' rule, summarized in a table. }\\
&\begin{array}{ccc}
\hline & Y \text { discrete } & Y \text { continuous } \\
\hline X \text { discrete } & P(Y=y \mid X=x)=\frac{P(X=x \mid Y=y) P(Y=y)}{P(X=x)} & f_Y(y \mid X=x)=\frac{P(X=x \mid Y=y) f_Y(y)}{P(X=x)} \\
X \text { continuous } & P(Y=y \mid X=x)=\frac{f_X(x \mid Y=y) P(Y=y)}{f_X(x)} & f_{Y \mid X}(y \mid x)=\frac{f_{X \mid Y}(x \mid y) f_Y(y)}{f_X(x)} \\
\hline
\end{array}
\end{aligned}
$$
$$
P(X=x \mid Y=4)=\frac{P(Y=4 \mid X=x) \cdot P(X=x)}{P(Y=4)}=\frac{\text { dhyper }(4,13,39, \mathrm{x}) * 1 / 6}{\text { sum }(\operatorname{dhyper}(4,13,39,1: 6) * 1 / 6)}
$$
`dhyper(4,13,39,1:6)*1/6 / sum(dhyper(4,13,39,1:6)*1/6)`


## Middelværdi
gang med realistioner af X ikke 1..n
Du summer igennem alle realisioner af x. 
$E(X)=\sum_x \underbrace{x}_{\text {value }} \underbrace{P(X=x)}_{\text {PMF at } x}$

$E(X^2)=\sum_x \underbrace{x^2}_{\text {value }} \underbrace{P(X=x)}_{\text {PMF at } x}$

$$
E(g(X))=\sum_x g(x) P(X=x)
$$
$$
\sum_{x=4}^6 x \cdot P(X=x \mid Y=4) \approx 5,593563
$$

Her har vi lavet beregningen i $\mathrm{R}$ ved at oversætte den matematiske formel til $\mathrm{R}$ koden:
`sum(4:6 * dhyper(4,13,39,4:6)*1/6 / sum(dhyper(4,13,39,1:6)*1/6))`
# Opgave 3 og 4
Importer datasæt
```r
rm(list = ls())
library(datasets)
data(cars)
# kan bruges således:
linreg <- lm(dist~speed,data=cars)
```
Mean() til midelværdi // gennemsnit
sd() = standard deviation // stikprøvespredning
median() 
var() = varians
## Plotting
### residual plot og qqplot:
```
plot(fitted(linreg),residuals(linreg))
abline(h=0,lty=2) 

qqnorm(rstandard(linreg))
abline(0,1, lty=2)
```
### Tjek om det er normaltfordelt
```
qqnorm(dataframe$datarow) 
mu <- mean(dataframe$datarow)
spread <- sd(dataframe$datarow)
abline(mu,spread)
```


```
plot(styrke ~ tid, data=cement) 
plot(logStyrke ~ reciprokTid, data=cement)
```
Det er en antagelse i modellen at varianserne er ens. Dette kaldes varianshomogenitet, og det bør altid kontrolleres om denne antagelse er fornuftig. Samme med uafhængighed (omkring 0 i residual)

## Linear regression
linreg <- lm(respons~forklarende,data=mydata)
### Aflæs Summary
```
## 
## Call:
## lm(formula = vcf ~ gluk, data = vcfdata)
## 
## Residuals:
##      Min       1Q   Median       3Q      Max 
## -0.40141 -0.14760 -0.02202  0.03001  0.43490 
## 
## Coefficients:
##             Estimate Std. Error t value Pr(>|t|)    
## (Intercept)  1.09781    0.11748   9.345 6.26e-09 ***
## gluk         0.02196    0.01045   2.101   0.0479 *  
## ---
## Signif. codes:  0 '***' 0.001 '**' 0.01 '*' 0.05 '.' 0.1 ' ' 1
## 
## Residual standard error: 0.2167 on 21 degrees of freedom
## Multiple R-squared:  0.1737, Adjusted R-squared:  0.1343 
## F-statistic: 4.414 on 1 and 21 DF,  p-value: 0.0479
```
Residual standard error: 0.2167 er spredning for modellen 
Std. Error er spredning for et parameter
Estimate er middelværdi estimat
### Hypotese test
Lav et hypotesetest for nulhypotesen: 

summary aflæs pr(>|t|), hvis den er større end siknifikantniveauet (f.eks. 5% eller 0.05) kan man ikke forkaste nul hypotesen.
## Konfidensinterval
Hvis det er en linær regression kan `confint` bruges. 

$a=0.05$
$1-a=0.95$
$\frac{a}{2} = 0.025$
fraktil = 1-0.025 = 0.975
qt(0.975,n-1) 95% confidens

$a=0.1$
$1-a=0.90$
$\frac{a}{2} = 0.05$
fraktil = 1-0.05= 0.95
qt(0.95,n-1) 90% confidens

konfidensinterval:
$$
\bar{Y} \pm t_{n-1,1-\alpha / 2} \frac{\tilde{\sigma}}{\sqrt{n}}=\left(\bar{Y}-t_{n-1,1-\alpha / 2} \frac{\tilde{\sigma}}{\sqrt{n}}, \bar{Y}+t_{n-1,1-\alpha / 2} \frac{\tilde{\sigma}}{\sqrt{n}}\right)
$$
$$
\hat{\mu} \pm \text { fraktil } \cdot \text { spredning for } \hat{\mu} \text {. }
$$
```
phi = stikprøvespredning
mu = mean, gennemsnit.
mu+c(-1,1)*qt(0.975,n-1)*phi/sqrt(n)
```

Sætning 5.7. Betragt den statistiske model fra definition 5.1. Så er
$$
\begin{aligned}
\bar{X}-\bar{Y} \pm & t_{n-2,1-\alpha / 2} \tilde{\sigma} \sqrt{\frac{1}{n_1}+\frac{1}{n_2}}= \\
& \left(\bar{X}-\bar{Y}-t_{n-2,1-\alpha / 2} \tilde{\sigma} \sqrt{\frac{1}{n_1}+\frac{1}{n_2}}, \bar{X}-\bar{Y}+t_{n-2,1-\alpha / 2} \tilde{\sigma} \sqrt{\frac{1}{n_1}+\frac{1}{n_2}}\right)
\end{aligned}
$$
et $1-\alpha$ konfidensinterval for $\mu_1-\mu_2$.
```
s1 <- sd()
s2 <- sd()
n1 <- length()
n2 <- length()
mu1 <- mean()
mu2 <- mean()
s <- sqrt((s1^2*(n1-1) + s2^2*(n2-1)) / (n1-1)+(n2-1))
se <- s * sqrt(1/n1 + 1/n2)
mu1 - mu2 + c(-1,1)*qt(0.975, df=(n1-1)+(n2-1)) * se
```
t.test kan også bruges til at regne dette, the skal være en two sample t.test
### Længde
$$
L=2 \cdot t_{n-2,1-\alpha / 2} \cdot  \frac{s}{\sqrt n}
$$

```
phi = stikprøvespredning
mu = mean, gennemsnit.
2*qt(0.975,n-1)*phi/sqrt(n)
```

$$
L=2 \cdot t_{n-2,1-\alpha / 2} \cdot \tilde{\sigma} \cdot \sqrt{\frac{1}{n_1}+\frac{1}{n_2}}
$$

```
s1 <- sd()
s2 <- sd()
n1 <- length()
n2 <- length()
mu1 <- mean()
mu2 <- mean()
s <- sqrt((s1^2*(n1-1) + s2^2*(n2-1)) / (n1-1)+(n2-1))
se <- s * sqrt(1/n1 + 1/n2)
2*qt(0.975, df=(n1-1)+(n2-1)) * se
```

## t.test
`t <- t.test(laktose$forskel)`

Selve T-testet kan laves via funktionen `t.test()`, hvor man skal angive optionen `var.equal=TRUE` for at angive ens varianser. Bemærk, at vi bruger syntaxen `diameter~by`, hvor responsen står på venstresiden og gruppe variablen står på højresiden: en two sample t-test.
```r
t.test(diameter~by,data=tbdata,var.equal=TRUE)
# same shit:
t.test(tbdata$diameter,tbdata$by,var.equal=TRUE)
```
```
## 
##  Two Sample t-test
## 
## data:  diameter by by
## t = 0.67144, df = 244, p-value = 0.5026
## alternative hypothesis: true difference in means between group kbh and group oslo is not equal to 0
## 95 percent confidence interval:
##  -0.5695597  1.1586844
## sample estimates:
##  mean in group kbh mean in group oslo 
##           17.13077           16.83621
```
Output giver p-værdi for ens forskel (p=0.5026). Desuden fås middelværdi estimater for de to grupper, samt et konfidensinterval for forskellen på middelværdierne

Idet der er absolut ingen indikation på forskel på de to grupper, så giver det mening at angive et fælles estimat og konfidensinterval for de samlede gruppe. Bemærk, at den samlede gruppe er en enkelt stikprøve med ukendt varians. Vi kan derfor bruge R koden for en enkelt stikprøve:
```
t.test(tbdata$diameter)
```
```
## 
##  One Sample t-test
## 
## data:  tbdata$diameter
## t = 77.678, df = 245, p-value < 2.2e-16
## alternative hypothesis: true mean is not equal to 0
## 95 percent confidence interval:
##  16.56100 17.42274
## sample estimates:
## mean of x 
##  16.99187
```
Her er p-værdien super signifikant. Men det er irrelevant idet nul-hypotesen med middelværdi=0 ikke er biologisk relevant! Men vi kan aflæse estimat (16.99) og konfidensinterval (16.56 ; 17.42)

### Subset t.test
sammligne to subset af datasæt, evt give konfidensinterval:
```r
EnData <- subset(filmdata, Language=="EN")
OtherData <- subset(filmdata, Language=="Other")
t.test(EnData$LogRatio, OtherData$LogRatio, var.equal=TRUE)
```

I de sidste spørgsmål skal du bruge variablen LogRatio for både engelsksprogede og ikke engelsksprogede film. Antag at værdierne er udfald af uafhængige normalfordelte variable me middelværdi $\mu_1$ for engelsksprogede film og $\mu_2$ for ikke-engelsksprogede film, og varians $\sigma$ (fælles for alle variable).

### $\text { Bestem et konfidensinterval for } \mu_1-\mu_2 \text {. }$
```r
EnData <- subset(filmdata, Language=="EN")
OtherData <- subset(filmdata, Language=="Other")
t.test(EnData$LogRatio, OtherData$LogRatio, var.equal=TRUE)
```
## Prædiktion
hvis du bruger en eller anden log model og bliver bedt om at predicte noget som ikke er log:


```r
predict rev =4000
newdata = data.frame(logrev(log(4000)))
exp(predict(linreg,newdata))
```


hvis det er et predictions interval så tag exp på endepunkter: 

```r
newdata=data.frame(bnp=528000)
predict(linreg,newdata,interval="prediction") #95 prædiktionsinterval
exp(endepunkt1)
exp(endepunkt2)
```
predict(inerval="c")
## Andet 
$$
F(x)=P(X \leq x)=P\left(\frac{X-\mu}{\sigma} \leq \frac{x-\mu}{\sigma}\right)=\Phi\left(\frac{x-\mu}{\sigma}\right) .
$$
$$
P(|X|\leq x)P(-x \leq X \leq x)=P\left(\frac{-x-\mu}{\sigma}\leq X \leq \frac{x-\mu}{\sigma}\right)
$$
dernæst:
$P(X\leq x)-P(-x\leq X)$

$P(X<x)$
brug pnorm(x)
$P(X\leq x)$
brug pnorm(x)
$P(-x\leq X)$
brug pnorm(x)
### Den estimerede spredning for $\hat{p}$ beregnes
$$
s(\hat{p})=\sqrt{\frac{\hat{p}(1-\hat{p})}{n}}
$$
### To stikprøver sammenvejede estimat for varians
$\text { Bestem det sammenvejede estimat for } \sigma^2 \text {. }$
DS 5.2 til to stikprøver sammenvejede estimat for varians, to uafhængige stikprøver, vægtet gennemsnit:
$$s^2=\frac{\left(n_1-1\right) s_x^2+\left(n_2-1\right) s_y^2}{n-2}$$
**tag kvadratrod få at for spredning eller lad vær hvis det er varians**
`s<-sqrt(((n1-1)*sx**2+(n2-1)*sy**2)/(n2-1)+(n1-1))`
### standard error for middelværdien (estimeret spredning på n)
når normalfordelt fås standard error for mideelværdien, her er s spredning. estimerede spredning (standarderror):
$$
\operatorname{SE}(\hat{\mu})=\frac{s}{\sqrt{n}}
$$
`SE <- s/sqrt(n)`
vil gerne have en estimeret spredning på x: sæt værdier ind, du får fra tekst på $\operatorname{SE}(\hat{\mu})$ og isolerer n. 
$$n=\frac{s^2}{\operatorname{SE}(\hat{\mu})^2}$$
`n <- s**2/SE**2`
### Hvor mange gange højere forventer du at x er end y i X i forhold til Y
"Betragt to jordprøver hvor jordprøve 1 har x gange så høj fosforkoncentration som jord-prøve 2. Hvor mange gange højere forventer du at fosforkoncentrationen er i vandprøven hørende til jordprøve 1 i forhold til vandprøven hørende til jordprøve 2?" 

For log model:
$$
x^\hat{\beta}
$$