En grådig algoritme løser et problem ved altid at vælge det nuværende bedste valg, og tager altså ikke delproblemer i betragtning.

man kan definere en Greedy-Choice Property hvis der findes mindst én optimal løsning, der inkluderer det grådige valg. Det betyder også at grådige algoritmerne er hurtigere end dynamisk
programmeret algoritmer, da man her ikke skal tage højde for at løse en masse delproblemer, men derimod bare foretager det grådige valg. Det betyder også at der skal foretages færre udregninger.

Et problem har det grådige valg egenskab, hvis der findes en optimal løsning til et problem, som inkluderer det grådige valg. Hvis dette ikke gælder, vil en grådig algoritme ikke finde den korrekte løsning

# Optimal subproblem
Hvert grådigt valg vil herefter kunne give en korrekt løsning, og evt. et delproblem som med endnu et grådigt valg igen vil være korrekt og evt. skabe et nyt delproblem. Problemet bliver derfor mindre og mindre i takt med hvert valg.

Hvis vi kan vise at et problem har Greedy-Choice Property og Optimal subproblem, så kan vi bevise at en grådig algoritme vil finde en optimal løsning til et problem.
# Eksempel: Aktivitets valg
Givet en liste af aktiviteter som er sorteret efter slutstidspunkt, angiv hvor mange aktiviteter maksimalt kan
planlægge, hvori de ikke overlappe.

Hvis vi har en optimal løsning til $S_d$, som er en del af $S_A$, så vil løsningen til $S_A$ indholde løsningen til $S_d$. Kort sagt, hvis der kan  planlægges 3 aktiviteter i $S_d$, så vil $S_A$ mindst have 3 aktiviteter plus de andre delproblemers løsninger.

Vi vil gerne vælge den aktivitet som slutter først (intuitivt, så vil vi gerne gøre mere plads til andre aktiviteter). Vi angiver den aktivitet som slutter først $a_1$ for problemet $S$. Antag der er en anden optimal løsning, hvori $a_j$ er en aktivitet som er før andre aktiviteter, men overlapper med $a_1$. Her kan $a_1$ nemt ombyttes med $a_j$ , og stadig være en optimal løsning (se her, at det grådige valg blot skal give en løsning, og ikke altid den eneste)

Da vi har vist optimale delproblemer og det grådige valg egenskab, kan vi nemt angive en algoritme, som altid bare vælger den aktivitet som har det tidligste sluttidspunkt.
# Huffman træ
tag de to mindste sæt dem sammen hvor den mindste er til venstre. Deres forældre bliver summen af de to værdier. Tag nu de næste to mindste værdier, det kan godt være forældren og en node. Dem til højre er større og har derfor 1, dem til venstre har 0.
![](https://i.imgur.com/jrd1F7F.png)
