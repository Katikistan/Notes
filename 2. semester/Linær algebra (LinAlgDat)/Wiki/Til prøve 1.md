---
date: 06-05-23
day: lør
week: 18
year: 2023
type: Wiki
course: LinAlgDat
status: open
semester: 2
tags:
Summary: ""
---
##### Weekly note
[[Uge 18 - 2023]]

# Gauss Elimination
start med at identificere pivot elementer, du skal derfra altid arbejde med den række, lad vær med at tage tredje række og fjerne noget fra første række, det er bedst at få 1 pivotelement og bruge det til at fjerne alt under. Dernæst tager du rækken med næste pivotelement og fjerner alt under det. 

Fokuserer på en kolone af gangen.
## bestem samtlige løsninger
bring på reduceret rækkeform. aflæs løsninger. hvis uendeligt opskriv på parmeter form
## Bestem a så der er: 1, 0 og uendelige løsninger
bring den på reduceret rækkeform. her vil du nok kunne se en måde hvorpå du kan få en nulrække i koefficent matricen, ellers vil du kunne kigge på rank, her vil du kunne finde ud af om den er inkonsistent eller ej, og hvis den er konsistent hvor mange løsninger er der. 
## Ax=b
det er en koefficent matrice og en vektor med ubendte, du kan bruge den inverse og opskrive: $Ax=b \rightarrow x=A^{-1}b$
### Bestem samtlige løsninger 
typisk er b givet, her laver man et ligningsystem der kommer ved at gange den ubekendte totalmatrice.
# Inverser
## Find den inverse
computation, [A|I] -> [I|X]
![](https://i.imgur.com/ijqrkda.png)

## Bestem inverser
AX=I
opskriv ligningsystem med matrix multiplikation, her er X en matrixe med ubendte. den kommer til at fortælle hvilke parameter der har en bestemt værdi de skal overholde for at være inverse og hvilke der er fri. 
## hvor mange inverser
hvis den er kvadratisk kan den have både venstre og højre, ellers kan den kun have en af de to.  yderligere skal columns være linært uafhængie. 
XI: venstre invers
IX: højre invers
# Rank
ero ændre ikke rank, hvis de ikke har samme rank er de ikke det samme system, det gælder selv først efter det er på echelon form 

hvis rank er lavere en antallet af ubekendte er der uendelig løsninger

hvis rank i koefficentsmatricen er laver end totalmatrixen er der ingen løsninger

Hvis rank A = rank M. er der en løsning
# Elementær matricer
typisk er det bare at skrive et tal ind i matrixen,
$\begin{bmatrix}1 & 0 & 0 \\ 0 & 1 & 0 \\ 0 & 0 & 1\end{bmatrix}$
hvis man sagde man skulle ligge 3 gange række 1 til række 2 ville det bare være at skrive 3 i række 2 kolone 1.
hvis vi får at vide at rækkeoperationer på I laver A såer (E4E3E2E1) = A fordi identietsmatricen kan ignoreres, her bliver a 
## Inverse elementær matrice

# Homogent 