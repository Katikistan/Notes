# Egenskaber
- Roden er sort
- Alle blade er T.nil, som er sort
- Hvis en knude er rød, så er begge dens børn sorte
- For hver eneste knude gælder, at alle simple veje fra knuden til dens efterkommere har det samme antal sorte knuder. Denne kalder vi bh(x).
- Et rødt-sort træ har en sort hæjde, bh.
![](https://i.imgur.com/OWGISE0.png)
bh er højden af de sorte knuder til en anden given knude. bh af træet er højden af sorte knuder fra bunden til roden. Givet at alle veje fra en given knude til et blad har samme antal sorte knuder, vil der være den samme bh om man starter i venstre eller højre side af træet.
# Rotationer 
For at rebalancere et træ, kan rotationer være nødvendigt
![|450](https://i.imgur.com/dCLB6X5.png)
Hvis vi ser på venstre rotationen, så kan det ses at x bliver et barn af y til venstre for, da y må være større end x. A forbliver på x, da den er mindre end alt andet. B var til højre fra x til at starte med, og bliver derfor sat som barn til højre fra x. C forbliver på y til højre, da den startede der og er størst. Det omvendte gælder den anden vej med højre rotation.
## Insert
Vi indsætter på samme måde som almindeligt søgetræ. Men herefter kan der opstå ubalance i den sorte højde, eller med en rød knude der får endnu et rødt barn (venstre eller højre), vi har derfor 4 cases. O(log(n))

**Onkel: gå 2 op og 1 til den anden vej.** 
### Case 1
Hvis vi har to røde efter hinanden til venstre, kan vi ændre farven er midter knuderne til sorte, og den øverste til rød. Dette kan dog propergere opad, da den øverste forældre i dette delproblem også kan være rød. Vi fortsætter med at farve de midterste sorte, indtil forældren til den øverste er sort, eller vi møder roden (hvis vi møder roden, skal den farves sort). Dvs. vi enten løser problemet på stedet, eller flytter det opad.
![](https://i.imgur.com/QsYs7gT.png)
### Case 2
Samme løsning som case 1
![](https://i.imgur.com/JSTdtVG.png)
### Case 3:
2 røde efter hinanden mod venstre, men med en sort onkel. Dette kan løses lokalt, og behøver altså ikke propergere opad. Se figur 13, da den øverste igen ender med at være sort. Først højre roteres a og b. Så bytter de farve, så b bliver rød og a sort.
![](https://i.imgur.com/wurziPl.png)
### Case 4: 
2 røde efter hinanden mod højre. Se figur 14. Her ses det, at vi blot lavet er venstre rotation på b og d, hvorfra vi får svarende til hvordan case 3 var, som vi kender løsningen til.
![](https://i.imgur.com/bkNdvIO.png)
## Delete
For at slette og bibeholde balance er der i alt 8 cases, men det generelle koncept nævnet kun. Vi gør som i almindelig delete. Dvs. vi finder dens direkte efterfølger, bytter dem og fjerner. Hvis efterfølgeren (b) er:
- rød: gør ikke noget
- sort og L(b) rød: gør L(b) sort
- sort og L(b) sort: lav L(b) fed (tæller for 2 sorte) og propager.

Det vigtigste er at bibeholde højden og balancen. Alle de 8 cases er kun vigtige hvis vi skal implementere dette.
# Køretid
![](https://i.imgur.com/ybEVUjM.png)
