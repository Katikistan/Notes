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

DS 5.2 til to stikprøver sammenvejede estimat for varians:
$$s^2=\frac{\left(n_1-1\right) s_x^2+\left(n_2-1\right) s_y^2}{n-2}$$
tag kvadratrod få at for spredning eller lad vær hvis det er varians


hvis du bruger en eller anden log model og bliver bedt om at predicte noget som ikke er log:
predict rev =4000
newdata = logrev(4000)
exp(predict(model,newdata))


når normalfordelt fås standard error for mideelværdien, her er s spredning:
$$
\operatorname{SE}(\hat{\mu})=\frac{s}{\sqrt{n}}
$$


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