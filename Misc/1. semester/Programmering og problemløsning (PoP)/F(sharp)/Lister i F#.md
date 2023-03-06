# Lister 101 i F#
lister i F# bliver skrevet med [], dette er en tom liste. hvert element bliver skelnet imellem med ; en liste ender med at se sådan ud i F# let list = [1;2;3;4]
man kan tilgå elementer med list[0], der tager det 0´te element, altså 1.

@: tager to lister og sætter dem sammen
"::": tager et element og sætter det sammen med en liste 
# Liste moduler
## List.fold
List.fold :  f:  ( 'S -> 'T -> 'S ) -> elm  :  'S   ->  lst  :  'T list  -> 'S.

Updates an accumulator iteratively by applying f to each element in lst. The
initial value of the accumulator is elm. For example, when lst consists of n
elements List.fold calculates:
![[Pasted image 20220929105248.png]]
f (. . . (f (f elm lst[0]) lst[1]) . . .) lst[n-1].

![[Pasted image 20220929113638.png]]
![[Pasted image 20220929113840.png]]
![[Pasted image 20220929113746.png]]
her er 'a akkumulator og  'b er et element i listen
![[Pasted image 20220929114416.png]]
her starter vi ikke på en tom liste, men på første element altså lst.head, som vi specifierer er en string fordi akkumulatoren skal være en string. dernæst iterere vi fra tail hvilket er alt efter .head.

man kan også bruge list fold med anonyme funktioner(funktioner uden navne.)
her siger vi at vi har en ukendt funktion der tager acc og elm som parametre og udfører 
operationen acc + elm, vi siger at acc = 0 og at elm er [1;2;3;4;5]

List.fold (fun acc elm -> acc + elm) 0 [1..5]

## List.foldback
![[Pasted image 20220929105324.png]]
![[Pasted image 20220929113927.png]]
![[Pasted image 20220929113943.png]]
den gør det samme som fol men bare bagfra, så får omvendte resultat end fold. 
## List.map
![[Pasted image 20220929105656.png]]
Her i dette eksempel bliver hvert element (elm) ganget med sig selv og bliver gemt i listen. det er en måde man kan bruge en funktion på hvert element.  

### List.mapFoldback
Combines map and foldBack. Builds a new list whose elements are the results of applying the given function to each of the elements of the input list. The function is also used to accumulate a final value.
![[Pasted image 20220929112221.png]]
##### Example

Accumulate the charges from back to front, and double them as well
## List.rev
![[Pasted image 20220929105457.png]]
## list.concat
Returns a new list that contains the elements of each the lists in order.
![[Pasted image 20220929104800.png]]
det samme som [1;2]@[3;4;5]@[6;7;8;9]@
Her er et eksempel på concat:
![[Pasted image 20220929104955.png]]
her et nyt eksempel