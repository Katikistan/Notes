---
Type: Noter
Date: 07.09.22
Tags: #fsharp #functionalprogramming
Status: 📝
---
## Let and do 

## %A,d,o
%s = string, hvis man bruger den giver den ikke "" når man printer
%A = modtager alt
%d = decimaler
det er en formarterings sekvens
## Funktioner
Let {navn på funktionen} {argumenter} = beskrivelse af funktionen som man binder til navnet med en variabel:
```F#
let sum xy = x + y;;
	val sum: x: int -> y: int -> int
(*man kalder en funktion ved at skrive navnet på funktioen og oplyse værdier til argumenterne*)
sum 3 4;;
val it: int = 7


let sum (x, y) = x + y;;
	val sum: x: int * y: int -> int
sum (3, 4);;
val it: int = 7

(*her tages et produkt, *)
```
let greeting (name : string) : string=
her deklarerer jeg at inputtet jeg giver til funktionen er en string, men også at outputtet. 

(parentheses fortæller at det er inputtet vi deklarerer til at være en string)

let greeting name : string = "hello" name
her er det resultatet man fortæller er en string. 

det er altid en god ide at deklarere hvilke typer en varibel eller resultat er. 

#### Recursion funktion
gøres ved at binde en function med rec foran 

##### Tail recursion

## Conditionals
### match with
![[Pasted image 20220908113116.png]]
her binder vi "by" til system.console.readline (user input

derefter lader vi "antal" blive bundet til conditionalen
hvor vi tjekker om "by" matcher med en af vores conditions, så hvis by er "København" (ikke "københavn") så sætter den antal 

->: er ligesom "=", men det er ikke  by = "København" der bliver bundet til et tal, men "antal" og derfor bruger vi -> for at illustere at det ikke er by og tallet der bliver bundet.

<-:

når vi printer, vil (hvis du har tastet noget der ikke er godkendt i conditional) antal blive sat til -1, og derefter tjekker vi "hvis "antal" er "-1" så skal den printe kender ikke "by"

hvis der sker noget andet altså at antal er andet end -1 så printer den "i "by" bor der "antal" mennesker (wikipedia 2022)"

**|:**  Denne bruges til at skelne mellem branches 

**__:** Wild card, fungere ligesom else, den kigger om den tidligere condition er mødt eller ej og hvis ikke kører den sin branch

## Download af pakker:
med # r kan man downloade pakker 
nuget er online bibloteker 

r# "nuget:DIKU.Canvas, 1.0" dette henter pakken canvas som bruges til at tegne.

#### Canvas:
setline : tager canvas, farve, den ene ende af linjen og den anden :
do setLine C black (0,0)(w-1,h-1)

###### Kilder:
fsharp notes, jon sporring

## Canvas
### Tegn en cirkel
System.Math.PI er pi i 