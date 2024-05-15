Dynamiske datastrukturer har lynhurtig søgning. Den tager konstant tid.

 når to mængder(sets) ikke har noget identisk elementer p˚atværs af de to sets
# Disjoint sets

Disjoint sets are sets with no elements in common.

Two sets $A, B$ are disjoint if the intersection is the empty set
$A \cap B = \emptyset$

Hvis vi skal bygge en vej må vi indsætte alle vejene mellem to byer. Hvis vi har $n/2$ byer til nord og $n/2$ byer til syd skal vi indsætte $n$ veje.

Hvis vi bruger en kædet liste istedenfor skal vi kun hægte listerne sammen hvis der opstår en ny vej.

Hvis vi skal finde ud af hvis vi kan nå fra A til B kan vi checke om begge byer ligger i samme liste.

Vi kan finde ud af om to elementer er i samme liste hvis begge elementer peger på samme hoved. Dvs. vi kan gøre det i konstant tid.

At føje at to lister sammen er ikke så hurtigt.

Det er muligt at give to træer same rod.

### Naiv hægtning

Det her træ har en linæer dybde (ligner en liste), det tager linæer tid at søge i træet alt efter dybden.
# Vector repræsentation
Givet nogle disjunkte mængder, så kan de repræsenteres med følgende kendetegn:
- SET repræsentativ (kanonisk element - samme som FIRST)
- SET: Hvilket set hvert element er i
- NEXT: Hvilket element der kommer efter elementet
- FIRST: Hvad der er først (kanonisk element)
- LAST: Hvad der er det sidste element
- SIZE: Størrelsen på det givne set.

Der gælder også følgende regler:
- Sæt repræsentanter kaldes 'canonical elements'
- Elementerne er heltal mellem 1 og $n$.
- Hvert element kan tilgås i $O(1)$ tid
- Datastrukturen skal understøtter:
- makeset(x): oprettelse af et sæt med ét element x.
- find(x): returnerer et kanonisk element i mængden indeholdende $\mathrm{x}$.
- link(x,y): danner en forening af to mængder med x og y som deres 'canonical elements'
# Træ repræsentation
Hvert set er et nyt træ. Roden er det kanoniske element. Hver knude har en pointer til sin forældre, roden peget til sig selv.

Man kan risikere, at man laver en dårlig kombination af makeset og link, således at man får et træ med kun en lang vej. Dette vil gøre, at vores find kører i O(n). Derfor skal man fx linke med størrelse som prioritet eller rank.
# Operationer 
## Make-set
makeset(x) fortager operationerne: 
set(x) = x 
first(x) = x 
next(x)= 0 
size(x) = 1 
denne operation tager konstant tid O(1)
## Find-set
Følg foreældre pointere fra x indtil roden er fundet, som er fundet når pointeren går til sig selv. Dvs. det er det kanoniske element der returneres.
## Path compression
Når find bliver kaldt på en knude, så sætter den automatisk alle knuder den går igennem til at være direkte børn af roden.
## Union ift. størrelse
Her linkes der blot således at det træ med færrest elementer sættes på det træ med flere elementer.
5 har 2 elementer: 5 og 1.   her ville man linke 6 til 7. 7's nye vægt ville blive 9. 
![[Pasted image 20240408051505.png]]

## Union ift. rank
Alle rodknuder med et element har ranken 1. Hvis 2 træer skal sættes sammen, så sættes det træ med mindst rank på den med større. Hvis de har lige rank, vælg blot en og øg dens rank.
![](https://i.imgur.com/X0UilPW.png)
![[Pasted image 20240408050127.png]]
vi linker 1 og 5, 4 og 7 og 6 og 3. Vi ser at de alle har samme rank derfor vælger vi en vilkårlig og øjer dens rank. f.eks 1 og 5 har samme rank, vi sætter 5 til rank 1 og linker 5 og 1.
![[Pasted image 20240408050146.png]]
Vi linker 2 og 7, der har 7 større rank så 2 bliver linket til 7. 7 linkes til 5, 5 øger sit rank fordi de begge have rank 1. 
![[Pasted image 20240408050328.png]]
Vi linker til sidst 6 og 5. 
![[Pasted image 20240408050454.png]]
når en rod stopper med at være en rod og linkes til en anden knude, forbliver dens rank den sammme. r(x) stiger mest 1 per link

r(x) = rank
s(x)= antal elementer i et træ med x som rod.
$s(x)\geq 2^{r(x)}$
## Upper bound on find
- $n \geq s_i(x) \geq 2^{r(x)}$ for all $x$ and for all $i, 0 \leq i<n$.
- $\log n \geq r_i(x)$.
- Rank is strictly increasing when going up the tree. Conclusion: find requires $O(\log n)$ time.
- Overall complexity for $n$ makeset, $n-1$ link, $m$ find is $O(n+m \log n+n-1)=O(n+m \log n)$.
## Link-set
Skal sammensætte to sets, så to kanoniske elementer x og y. Det vil sige så at den den mindre mængde bliver tilføjet til den større, og alle elementer i den lille mængde pointer til det kanoniske
element bliver opdateret
## Pseudokode
![](https://i.imgur.com/A5tqRZM.png)
# Tidskompleksitet
![](https://i.imgur.com/vDQbWoG.png)

# Weighted union heurestic
Højden bliver $i$

vi søger bare op i træ indtil vi når en node der ikke har nogen forældre på den måde ved vi at vi er kommet til den repræsentive.