I et binært search træ skal børnene til en knude altid have følgende orden: barnet til venstre er altid mindre end forældreren og barnet til højre er altid større en forældreren. På den måde kan man altid finde det største element i et binært træ ved forsat at gå til højre, det samme kan siges om det mindste element, hvor man bare skal gå til venstre.
![|132](https://i.imgur.com/15qUAqq.png)![|150](https://i.imgur.com/NcO6LF5.png)
Modsat en [[Heap]] hvor at børnene skal enten skal være større eller mindre en forældre, alt efter om det er en MAX-heap eller en Min-heap.

Et binært søgetræ kan repræsenteres i hukommelsen således:
![|200](https://i.imgur.com/hOUNHv4.png)
# Operationer med binæresøgetræer 
## Find det mindste element
https://www.geeksforgeeks.org/find-the-minimum-element-in-a-binary-search-tree/
Tidskompleksitet: O(n)
## Fjerne elementer
Dette er en del mere besværligt
### 0 børn
Her fjernes elementet bare fra træet, strukturen af træet skal ikke ændres
### 1 barn 
Her tager barnet pladsen fra forældren som vi ønsker at slette. Her ser vi at 20 bliver slettet.
![|200](https://i.imgur.com/Lg3Ko0G.png)
![|200](https://i.imgur.com/nemzdSY.png)
### 2 børn
Hvis vi ønkser at  slette et element z med 2 børn gøres det på 2 måder, alt efter om z.right.left er NIL eller ej 
#### Tillfælde 1: 
$z.right.left = NIL$
![|250](https://i.imgur.com/h4gUEWj.png)
#### Tillfælde 2: 
$z.right.left \neq NIL$
![|250](https://i.imgur.com/1J5TPqY.png)
## Tilføj et element 
Hvis man ønsker at tilsætte et nyt element så sætter man det må en knude der ikke er fyldt, starter fra roden og spørger om det er større eller mindre en roden, hvis tallet er mindre så sætter man det til venstre, hvis man det er større sætter man det til højre. I træet foroven, hvis man ønsket at indsætte 5 ville man lægge det i mellem 6 og 4. 9 ville ligge til venstre for 10. 
## Søgning 
![|200](https://i.imgur.com/FY7SnF0.png)
## Min, max og efterfølger
![|200](https://i.imgur.com/vurKYVT.png)
![|200](https://i.imgur.com/yKGnx23.png)
![|200](https://i.imgur.com/4eqrI2B.png)

## Byg et binært træ
Lav et binært søgetræ fra et sorteret array, O(n): https://www.geeksforgeeks.org/sorted-array-to-balanced-bst/
lav et binært træ om til et binært søgetræ, O(n*log(n)): https://www.geeksforgeeks.org/binary-tree-to-binary-search-tree-conversion/

# Pre, in- og postorder
Rød er preorder
Gul er inorder
Grøn er postorder
![|200](https://i.imgur.com/JQbkaFK.png)

Hvis vi kalder nedstående træ for A
![|150](https://i.imgur.com/acrKiAb.png)
Her køres Pre,in- og postorder på A
## Preorder 
Preorder når man vil lave en kopi af træet. 
Preorder: 15, 8, 1, 3, 14 ,11, 13, 20
![|200](https://i.imgur.com/1MNDEjt.png)
## Inorder 
Inorder er når man vil løbe igennem knuderne sorteret. 
Inorder: 1, 3, 8, 11, 13, 14, 15, 20
![|200](https://i.imgur.com/ZWeQjsN.png)
## Postorder
Når man skal løbe knuderne igennem mens man sletter dem.
Postorder: 3, 1, 13, 11, 14, 8, 20, 15 
![|200](https://i.imgur.com/R0HALjq.png)
## Andvendelse i syntakstræer
Anvendelse til at repræsentere syntakstræer uden brug af parenteser.
Inorder: A*(B-C) + (D+E)

Preorder: +* A - B C + D E 
(polsk notation)
![|150](https://i.imgur.com/cvndrjP.png)
Postorder: A B C - * D E + +
(omvendt polsk notation)
# køretid
Køretiden for et binært søgetræ er O(h), hvor h er højden af søgetræet.

--- 
Tags: #dma_uge6
Mangler ting med tidskompleksitet og kan udvides til AD
(CLRS 13, mere raffineret insert og delete)

