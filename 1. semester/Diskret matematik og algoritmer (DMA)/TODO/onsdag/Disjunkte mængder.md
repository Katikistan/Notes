Dynamiske datastrukturer har lynhurtig søgning. Den tager konstant tid.

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

## Weighted union heurestic

Højden bliver $i$

vi søger bare op i træ indtil vi når en node der ikke har nogen forældre på den måde ved vi at vi er kommet til den repræsentive.