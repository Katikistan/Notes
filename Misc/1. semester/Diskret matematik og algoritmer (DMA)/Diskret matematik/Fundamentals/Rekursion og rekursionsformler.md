Rekursion er når noget definers ved at referer til sig selv, mere specifikt tales der om rekursive funktioner. 
Med rekursion ønsker man altid at have en stop condition:
stop condition: when $n \geq 2$
![[Pasted image 20220909090630.png|200]]
![[Pasted image 20220909090750.png|200]]
![[Pasted image 20220909092754.png|300]]

# 5 tips til at løse et rekursivt problem 
1. Løs en simplere version af problemet, whats the simplest possible input
2. Leg med eksempler og visualiser 
3. Relater de simpler cases med din case
4. generaliser det mønster du har set 
5. Skriv din funktion til at løse problemet.
## Eksempel: 
Lav en rekursiv funktion sum(n) der, der givet et input, summerer alle positive integers op til n. det kan løses med de 5 tips. 

1. Det mest simple input ville være sum(0) -> 0. Dette er en base case, eller en stop condition. 
2. ![|200](https://i.imgur.com/zyYseQj.png)
3. Hvis jeg fik svaret til n=4 kan jeg så løse n=5. hvis jeg har fået n kan jeg så løse n+1
4. her ser jeg at $sum(k) = sum(k-1) + k$
5. Derved får jeg en funktion der ser ud således: $$
\operatorname{sum}(n)=\left\{\begin{array}{c}
0 \text { if } n=0 \\
\operatorname{sum}(n-1)+n
\end{array}\right.
$$



---- 
Great ressources: https://www.youtube.com/watch?v=ngCos392W4w
