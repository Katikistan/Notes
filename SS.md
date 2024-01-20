# LOTUS
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
# 2D LOTUS
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
# Middelværdi
# Varians
## Kovarians
Definition 7.3.1: Kovarians
Lad $X$ og $Y$ være stokastiske variable defineret på samme udfaldsrum, og antag at begge variable har endelig varians. Så er kovariansen defineret ved
$$
\operatorname{Cov}(X, Y)=\mathrm{E}[(X-\mathrm{E}[X]) \cdot(Y-\mathrm{E}[Y])]=\mathrm{E}[X Y]-\mathrm{E}[X] \cdot \mathrm{E}[Y]
$$

# Tegn området 
with(plots);
inequal({0 < y and y < 1/x, 1 < x and x < 2});
inequal({|x|+|y|<=1});

$$|x|+|y|\leq1$$
$$|x|\leq1-|y|$$
når man har med nummerisk værdi vil man altid kunne gøre følgende
$$|x|\leq y \rightarrow -y\leq x\leq y$$
derfor
$$-(1-|y|)\leq x\leq1-|y|$$
![[Pasted image 20240116141450.png]]
# Trans
Theorem 8.1.1: Transformation af en-dimensional variabel
Lad $X$ være en kontinuert stokastisk variabel med tæthedsfunktion $f_X(x)$, og lad $g: \mathbb{R} \rightarrow \mathbb{R}$ være differentiabel og strengt monoton (strengt voksende eller strengt aftagende). Så er $Y=g(X)$ en kontinuert stokastisk variabel med tæthedsfunktion
$$
f_Y(y)=f_X(x) \cdot\left|\frac{\partial g^{-1}(y)}{\partial y}\right|=f_X(x) \cdot \frac{1}{\left|\frac{\partial g(x)}{\partial x}\right|} \quad \text { hvor } x=g^{-1}(y)
$$
Find invers g(x): $g(x)^{⁻1}$
sæt g ind i tæthed f:  $f(g(x)^{⁻1})$
differenter invers $g'(x)^{⁻1}$
gang de to sammen $f(g(x)^{⁻1})\cdot g'(x)^{⁻1}$

husk at den nye tætheds billedmængde er X's der er blevet sat ind i g(x), så hvis f(x) har 0 < y < 1, så har g(x) g(0) < y < g(1)


runif
lm
predict
confint
newdata
plot
qqplot
rstandard
lty 
abline
summary
var mean sd
t.test
qt 
qnorm

DS 5.2 til to stikprøver sammenvejede estimat for varians, to uafhængige stikprøver:
$$s^2=\frac{\left(n_1-1\right) s_x^2+\left(n_2-1\right) s_y^2}{n-2}$$
tag kvadratrod få at for spredning eller lad vær hvis det er varians


hvis du bruger en eller anden log model og bliver bedt om at predicte noget som ikke er log:
predict rev =4000
newdata = data.frame(logrev(4000))
exp(predict(model,newdata))

hvis det er et predictions interval så tag exp på endepunkter: 

når normalfordelt fås standard error for mideelværdien, her er s spredning. estimerede spredning (standarderror):
$$
\operatorname{SE}(\hat{\mu})=\frac{s}{\sqrt{n}}
$$

vil gerne have en estimeret spredning på n: sæt værdier ind, du får fra tekst på $\operatorname{SE}(\hat{\mu})$ 



sammligne to datasæt eller subset af datasæt, evt give konfidensinterval:
`subset(filmdata, Language=="EN")`
`t.test(subset$ting_der_sammenlignes,subset$ting_der_sammenlignes, var.equal=TRUE)`

du bliver bedt om at simulere for middelværdi eller varians, spredning:
først bestem fordelingsfumktion G fra tæthed (integrate fra -uendelig til x)
```r
U <- runif(10000)
X <- G(U) //fraktilfunktion af G
mean(X) // eller hvis du bliver bedt om E(sqrt(X))
mean(sqrt(X))
```


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


konfidensinterval:
$$
\bar{Y} \pm t_{n-1,1-\alpha / 2} \frac{\tilde{\sigma}}{\sqrt{n}}=\left(\bar{Y}-t_{n-1,1-\alpha / 2} \frac{\tilde{\sigma}}{\sqrt{n}}, \bar{Y}+t_{n-1,1-\alpha / 2} \frac{\tilde{\sigma}}{\sqrt{n}}\right)
$$
$$
\hat{\mu} \pm \text { fraktil } \cdot \text { spredning for } \hat{\mu} \text {. }
$$
qt

```
3.293+c(-1,1)*qt(0.975,499)*0.155/sqrt(500)
confi <- mu+c(-1,1)*qnorm(0.975)*phi/sqrt(n)
t <- t.test(laktose$forskel)
```


plot:

```
plot(styrke ~ tid, data=cement)
plot(logStyrke ~ reciprokTid, data=cement)
stdres <- rstandard(lin)
hat_y  <- predict(lin)
qqnorm(stdres); abline(0,1,lty=2)
plot(hat_y,stdres,main="Residualplot"); abline(0,0,lty=2)
```
abline(h=0,lty=2) for lin reg
qqnorm(stdres); abline(0,1,lty=2) residual for normal
qqnorm(stdres); abline(0,1,lty=2) residual for normal
plot(fitted(linreg),rstandard(linreg)) resudial for linreg
```
qqnorm(prothrombin$forskel) 
abline(mean,spredning)
```

Det er en antagelse i modellen at varianserne er ens. Dette kaldes varianshomogenitet, og det bør altid kontrolleres om denne antagelse er fornuftig. Samme med uafhængighed (omkring 0 i residual)

$P(X<x)$
brug pnorm

"Betragt to jordprøver hvor jordprøve 1 har x gange så høj fosforkoncentration som jord-prøve 2. Hvor mange gange højere forventer du at fosforkoncentrationen er i vandprøven hørende til jordprøve 1 i forhold til vandprøven hørende til jordprøve 2?" 

For log model
$$
x^\hat{\beta}
$$
# Opgave 1
# Opgave 2
# Opgave 3 og 4
a=0.05
1-a=0.95
a/2 = 0.025
fraktil = 1-0.025 = 0.975
qt(0.975,n-1) 95% confidens

a=0.1
1-a=0.90
a/2 = 0.05
1-0.05
qt(0.95,n-1) 90% confidens
Længde af konfidens interval

$$
L=2 \cdot t_{n-2,1-\alpha / 2} \cdot  \frac{s}{\sqrt n}
$$
$$
L=2 \cdot t_{n-2,1-\alpha / 2} \cdot \tilde{\sigma} \cdot \sqrt{\frac{1}{n_1}+\frac{1}{n_2}}
$$
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
