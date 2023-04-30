---
Type: Forelæsning
Speaker: Jon Sporring
Date: 06.09.22
Tags: #forelæsning #fsharp
Status: 📝
---
### F#:
Her kan man se at man binder to integers til a og b.
````f#
(*let binder binder to ting med hianden*)
let a = 357
let b = 864

let m x y = x + y;;
	m: x: int -> y: int -> int
`````
Pilene betyder at det er en funktion og ikke en konstant

";;" betyder at du er færdig med at skrive dit program, hvis du laver ";;" og bagefter på næste linje skriver kode bliver det ikke taget med i programmet 


[[Scopes]] (virkefelter):, i hvilket domæne duer bindinger vi har lavet, så f.eks hvis du har brugt a til at gemme en integerer tillader f sharp ikke at bruge det i samme scope, man bliver derfor nødt til at lave et nyt scope for at kunne bruge a på ny, det gøres ved på denne måde:
````F#
let a = 2
	(let a x =)
`````


##### Let og do
disse to er basale egenskaber af F#, når man bruger "let" er det meget simpelt at du lader to ting blive bundet til sammen og når man bruger "do" er det for at få computeren til at gøre noget som f.eks. printfn.

**printfn:** print file new line

her printer F# til filenen "skærmen" som den opfatter som en fil den printer til. 

##### %A":
det er her noget der kun findes i f sharp og bruges til at erstatte %A med hvad man ønsker at printe, så hvis man f.eks. ønsker at printe a ville man kunne skrive

printfn ""hej med dig %A" a;;

her sætter f sharp a ind på %A's plads


##### links
[[Funktionelt programmering]]
[[fsharp]]
