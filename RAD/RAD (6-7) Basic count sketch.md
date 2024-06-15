# basic count sketch
## Pseudokode
k er antal counters
s er en hashfunktion der enten hasher til -1 eller +1
h(x) bruges til at bestemme hvad vi tæller, det giver sig selv at der kan opstå kollisioner, derved kan vi risikere at en tæller faktisk tæller flere ting. 

1: **function BCS-INITIALIZE** $(\varepsilon)$
2: $\quad k \leftarrow\left\lceil\frac{4}{\varepsilon^{2}}\right\rceil \quad \triangleright$ Trivial version had $k=1$
3: $\quad$ Pick strongly universal $s:[u] \rightarrow\{-1,+1\}$
4: Pick universal $h:[u] \rightarrow[k] \quad \triangleright h$ independent of $s$
5: $\quad C[0, \ldots, k-1] \leftarrow 0$

6: **function BCS-PROCESS** $(x, \Delta)$
7: $\quad C[h(x)] \leftarrow C[h(x)]+s(x) \cdot \Delta$    $\triangleright$ trivial: $C+=s(x) \cdot \Delta$ 

8: **function BCS-QUERY** $(x)$
9: $\quad$ return $\hat{f}_{x}=s(x) \cdot C[h(x)]$    $\triangleright$ trivial: $\hat{f}_{x}=s(x) \cdot C$ 
s(x) bruges til at give det korrekte sign. 

Constant time per update/query and $\mathcal{O}(k)=\mathcal{O}\left(\frac{1}{\varepsilon^{2}}\right)$ space.

den triviale version giver  unbiased estimator: $\mathrm{E}\left[\hat{f}_{x}\right]=f_{x}$, men stor varians, derfor bruger vi basic count sketch istedet. 
## analyse 


# Median trick 
ved at lave m uafhængige estimater og give deres median kan begrænse sandsynligheden for at estimatet er "dårligt" til at være exponentialt småt i m. Det er median tricket. Meget mindre fejl, kigger på sandsynlighed for noget går galt, mere specifikt median er forkert. 

**Theorem:** Uafhængig $X_{1}, \ldots, X_{m}$ så at $\operatorname{Pr}\left[X_{i} \notin\left[x_{\min }, x_{\max }\right]\right] \leq 1 / 4$.
så $\operatorname{Pr}\left[X_{(\lceil m / 2\rceil)} \notin\left[x_{\min }, x_{\max }\right]\right] \leq e^{(-m / 12)}$.

x_max og x_min er en eller anden grænse som vi gerne vil vise at median ikke bliver større end. det er sandsynligheden for at man ryger over eller under den her grænse. 


De $X_{i}$ der ikke er i intervallet $[x_{\min},x_{max}]$, dvs. $X_{i}<x_{\min} \vee X_{i}> x_{max}$
$$X_{i} \notin[x_{\min},x_{max}]= Pr\{X_{i} \leq x_{\min} \vee X_{i} \geq x_{max}\}\leq\frac{1}{4}$$
- Definer $Z_{i}=\left[X_{i} \notin\left[x_{\min }, x_{\max }\right]\right]$ og $Z=\sum_{i=1}^{m} Z_{i}$. $Z_i$ er en indikator. 
- $Z_{(\lceil m / 2\rceil)}=1 \Longrightarrow Z \geq m / 2$.
- $\mathrm{E}[Z]=\sum_{i=1}^{m} \mathrm{E}\left[Z_{i}\right]=\sum_{i=1}^{m} \operatorname{Pr}\left[Z_{i}\right] \leq m / 4 \equiv \mu$.
- Bad event implies $Z \geq m / 2=(1+\delta) \mu$ with $\delta=1$.
- The $Z_{i}$ are independent, so by Chernoff
$$
\operatorname{Pr}[Z \geq m / 2] \leq \exp \left(-\mu \delta^{2} / 3\right)=\exp (-m / 12)
$$
Derved
$$
\operatorname{Pr}\left[X_{(\lceil m / 2\rceil)} \notin\left[x_{\min }, x_{\max }\right]\right] \leq \operatorname{Pr}[Z \geq m / 2] \leq \exp (-m / 12)
$$

Desto flere eksperimenter desto større er sandsynligheden for at vi ikke rammer forkert på medianen. medianen går galt hvis halvdelen af eksperimenterne fejler i den ene retning, så vi vil gerne være sikker på at sandsynligheden for at eksperimenter fejler er mindre end en 1/2, vi har her at det er mindre end 1/4 så det er ok. 

i count sketch bruger vi median tricket til at begrænse fejlsandsynlighed for estimatet vi får på $f_x$ 
## Bevis (ekstra)
# Full count sketch overordnet
jo lavere vi vælger delta og epsilon desto bedre får vi 

# 2nd moment estimation (ekstra)

# Strong universal - 4 universal (ekstra)





