# Heaps

![[Pasted image 20220927141231.png|400]]
(Billede viser en Max heap data structure)
Hver knude kan max have 2 børn. 
Alle knuder på nær sidste lag skal være fyldt op (have 2 børn), før man går videre til næste lag. 

Det skal være fyldt op fra venstre til højre. man starter med at fylde op fra venstre. 
![[Pasted image 20220927141254.png|400]]
En heap skal overholde denne hoppe orden. man skal have at parent er større end børnene, det er en max hop. en min hop vil børnene altid skulle være større end deres forældre.
### Blade 
Et blad er en knude uden børn. 
![[Pasted image 20220927141343.png|200]]
Antal af blad er lig antallet af knude (n) divideret med 2, rundet op.
### En heap som et array 
![[Pasted image 20221020140056.png|250]] 
en Heap som et array
![[Pasted image 20220927141355.png|400]]
 ![[Pasted image 20220927151604.png|150]]  ![[Pasted image 20221020140148.png|200]]
## Build a heap
![[Pasted image 20221020124007.png]]

## Max heapify 
![[Pasted image 20220927141410.png|400]]
Her er A det array vi arbejder med og i er det tal vi er ved at boble ned. 
her er l venstre barn, r er højre barn.

Heapify is the process of making a heap from a binary tree represented using an array. It is used to create Min-Heap or Max-heap. Start from the first index of the non-leaf node whose index is given by n/2 – 1. Heapify uses recursion.

This process is vital to understand if you want to use and understand [[Heap sort]]. 

## Inserting into a Heap 
![[Pasted image 20220927141421.png|300]]
Man ville indsætte hvor der et tomt nede i bunden, på en forældre, hvis den forældre er et blad bliver det sat til venstre, ellers bliver det sat til højre. 

Dernæst lader man det indsættet element "boble op" indtil at hoben igen overholder hobe ordenen. 

Indsætter 17 og lader det boble op for at genoprette hobe orden. 
![[Pasted image 20221020124039.png|400]] 
## Removing element from a heap 
hvis man vil extract 31 så vil 10 tage 31's plads, da det er på et ikke fyldt blad. man vil så lade 10 boble ned mod 20 fordi det er det største tal som skal op i toppen, dernæst bytter 11 og 10 plads og hopeordnen Max-hob er overholdt igen.  
# Tidskompleksiteter 
![[Pasted image 20220927141323.png|400]]
Insert og Extract max tager $T(n)=Log(n)$
Læs mere: https://www.geeksforgeeks.org/time-complexity-of-building-a-heap/

### Use of heaps
_Priority Queues:_ Priority queues can be efficiently implemented using Binary Heap because it supports insert(), delete() and extractmax(), decreaseKey() operations in O(logn) time. Binomoial Heap and Fibonacci Heap are variations of Binary Heap. These variations perform union also in O(logn) time which is a O(n) operation in Binary Heap. Heap Implemented priority queues are used in Graph algorithms like [Prim’s Algorithm](http://en.wikipedia.org/wiki/Prim%27s_algorithm) and [Dijkstra’s algorithm](http://en.wikipedia.org/wiki/Dijkstra%27s_algorithm).

_Order statistics:_ The Heap data structure can be used to efficiently find the kth smallest (or largest) element in an array. See method 4 and 6 of [this](https://www.geeksforgeeks.org/k-largestor-smallest-elements-in-an-array/) post for details.