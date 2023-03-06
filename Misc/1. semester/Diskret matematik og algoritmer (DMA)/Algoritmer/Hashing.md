Hash table også kaldt dictionary 

Hash tables er en måde at lagre keys eller key value pairs. 

Key value pairs: Key kunne være navne eller numre og value kunne være højder. Keys skal være unikke, men ikke values. Values er satellitedata.

Hash tables understøtter følgende operationer: Search, insert og delete.

Man konverterer altid en key til heltal med en hashfunktion, så hvis ens key er et ord vil man konverterer hvert bogstav til en ASCII værdi og lægge hvert bogstavs ASCII værdi sammen.

hash tables bruges ofte til at tracke frequency, så f.eks. hvor ofte et ord opstår i en film, her vil ordet være en key og frekvensen af det ord vil være value. Det bliver også brugt i kryptering (SHA) og i crypto shit. 

Hashset: en hash tabel hvor nøglerne ikke har knyttet nogen value til sig. 

I hash tables bruger man oftes disse symboler: 
$m$: længden af hash table
$n$: mængden af elementer i hashtabellen
$\alpha =n/m$: Hvor opfyldt er hash tabellen. 
$k_1,k_2,k_{3}... k_n$: De nøgler man ønsker at indsætte i en hashtabel
$h(k_n)$: hash værdien for $k_n$ som man får ved at putte $k_n$ ind i hashfunktionen $h(k)$
# Hash funktioner 
En hash funktion er en funktion man putter sin key ind i, den bliver så konverteret til et tal som vi bruger til at indeksere en key ind i et hash table, det her hash table er egentlig bare et array med størrelse m. 

Hashfunktionen mapper en key "x" til til et heltal i en fixed range m.

Vigtigt ved hash funktioner er at de skal være deterministic, et input skal altid give samme output, derfor vil man ikke bruge mutable variables i sin hash funktion f.eks. 

En god hash funktionen bør 
- mindske mængden af kollisioner 
- give en uniform distribution af hash værdier
- den bør være nem at beregne 
- den bør kunne fikse problemer der opstår ved kollisioner
Hash algoritmer er kode hvor den beregner en hash værdi har kode der tager højde for kollisioner osv. 

Hvis man kender alle keys kan man sagents komme op med en hash funktion der undgår kollisioner, men det er ofte ikke tillfældet at man kender alle inputs.
## Division
Man tager "$k~~ mod~~ m$" hvor k er en key value man vil gemme i et hash table og m er længden af det hash table man vil indsætte k i 

Ved the division method vil man gerne vælge et tal der giver en remainder, så derfor er et primtal altid en god ide, et primtal der så tæt på $m$ som muligt og så langt væk fra $2^x$ som muligt. 

#### Eksempel:
Vi laver et hash table der løser collisions med [[#separate chaining|chaining]], vi har 2000 character strings og vi har ikke noget imod at tjekke gennemsnitligt 3 elementer i tillfælde af en unsuccessful search, derfor vælger vi et primtal som er så tæt på $\frac{2000}{3}$ som muligt og så langt fra en power af 2 som muligt. Vi vælger 701. 

$k~~ mod~~ 701$

## Multiplication method
$h(k)=\lfloor m(kA~~mod~~1) \rfloor$
Here er $kA~~mod~~1$ den fraktonelle del af $kA$, altså $kA-\lfloor kA \rfloor$.

Fordelen ved multiplikations metoden er at m ikke er critical for at funktionen undgår kollisioner og man kan vælge et m uafhængigt af hvad du vælger den multiplikative konstant A.
![|300](https://i.imgur.com/5rjihSL.png)

Multiplikations metoden er bedst i det unikke scenarie hvor at $m$ (længden af hash table) er præcis $2^x$

for some integer x, where x ≤ w and w is the number of bits in a machine word.

Med hash funktioner vil man ikke vælge en statisk funktion som hasher alle værdier til samme indeks, eftersom et malicious party kan finde på at gemme en masse keys på et indeks plads hvilket gør at det tager længere tid at hente elementer fra ens hash table som gør f.eks. ens hjemmeside langsom, det er en stor vunerability.

For at mindske at elementer bliver hashet til samme hash værdi (kollisioner) kan der bruges random hashing. Her vælger man ud fra nogle sandsynlighedsværdier en hash funktion og applier den, på den er der mindre chance for kollisioner. En type af random hashing er universal hashing. Typisk i programmeringssporg som python er dette allerede indbygget når man bruger dictionaries, hvilket er hash tables i python. 

# Kollisioner
Når man laver en hash funktion vil der kunne ske kollisioner, det er hvor 2 keys ender med at få samme hash værdi (de skal ligges på samme indeks plads). Det vil man helst undgå ved at lave en hashing funktion der for hvert input giver et unikt output, det er dog oftes ikke muligt at undgå kollisioner, derfor har man forskellige metoder til at håndtere kollisioner. 

## Open adressing
Alle lokationer er åbne, så man vil bare placerer et element der har kollideret på den næste åbne adresse, der er forskellige typer af open addressing, Linear probing, quadratic probing og double hashing. 

O(1) tid per operation hvis hash tabellen ikke bliver for fyldt op. Load factoren på ikke være for stor. 
Når  $n$ begynder at nærme sig $m$ bliver man nødt til at rehashe, altså bygge et nyt hash table op hvor $m$ er større.
Hvis man ikke gør dette ender man med at skulle søge flere elementer igennem og man ender derfor med en Søgetid på O(n).

### Linear probing
her går man linært videre i arrayet for at beslutte hvor en key ellers skal ligges, så hvis 1,2 og 3 er tager og man får en kollision ved 1, kigger man om der er noget på indeks 2 (ja), så 3 (ja) og 4(nej), keyen bliver lagt i indeks 4. hvis man når til enden og man stadig ikke har fundet en plads kan man gå tilbage til starten af arrayet. For at finde et element vil man gå til det sted som elementet skulle have været på hvis der ikke var en collision og linært søge indtil man får sit ønsket output

for at undgå kollisioner kunne man lave hast tablet større end mængden af elementer der skal ind i hash tablet. 
dette gøres med en i værdi der bliver en større hver gang der opstår en kollision 
h(k,i)=(3k+i) mod 13 f.eks.

hvis man nu ønsker at søge:
her kigger man på den hash værdi som tallet burde stå på, det gør den ikke, så går man i(0)+1 frem indtil man står på tallet, hvis tallet ikke er der så kan vi stoppe på første ledige plads, fordi der burde tallet have stået, men hvis man sletter et element så risikere man at der bliver itereret igennem til dem tomme plads fra sletningen og så bliver der konkluderet at tallet ikke er der selvom det er 2 indekser længere fremme. enten så laver man tombstones, det er hvor man ikke helt sletter alt på indekset men bare ligger en "tombstone", med andre ord man siger  "der er ikke noget lige nu, men der har været så led videre".

man kan også istedet flytte det element der er blevet rykket frem fra dets hash værdi tilbage til den plads der nu er blevet frigjort på grund af sletningen, det er svært at implementerer 
### quadratic probing
i linær probing går man ligger man det kollideret element på plads i, i quadratic probing lægger man  det på i^2

Load factor = total number of items stored / size of the array
i værste tillfælde kan man være nødt til at skulle linært søge alle elementer, med tilstrækkligt små hash tables kan dette stadig være en viable løsning ellers har man chaining

### double hashing
Her løser vi en kollsion ved at beregne vores hash funktion og istedet for at bare ligge i til som i linear probing ligger vi h2 gange i til hvor h2 er en anden hash funktion. h2 bestemmer hvor langt man skal hoppe frem

## CLOSED ADRESSING
### separate chaining 
The collided items are chained together through a single linked list, which can be traversed to access the item with a unique search key
![[675px-Hash_table_5_0_1_1_1_1_1_LL.svg.png|250]]
```
Chained-Hash-Insert(T,k)
  //insert x at the head of linked list T[h(k)]

Chained-Hash-Search(T, k)
  //search for an element with key k in linked list T[h(k)]

Chained-Hash-Delete(_T_, _k_)
  //delete x from the linked list T[h(k)]
```
![|240](https://i.imgur.com/UDarMp7.png)
![|300](https://i.imgur.com/U99gVfj.png)
![|300](https://i.imgur.com/ZAytf93.png)

![|300](https://i.imgur.com/noMgI9p.png)
en teknik til at gemme data mere pladseffektivt 
![|300](https://i.imgur.com/bmPWydF.png)
dog svært at finde sådan en hash funktion

antal af kollisioner
![](https://i.imgur.com/NiLDfWI.png)
hvis n =120, så er n^2 omkring 14000 hvis vi så vælger m til at være 28000 vil sandsyndeligheden for en kollision være være en halv. man kan bruge formel som en grænse for sandsyndeligheden for en kollision opstår 

en signatur er en hash værdi hasher man til 160 bits for eksempel
# Cuckoo hashing
Begræns probelængden med 2, ved indstætelse af 1 element bliver elementet sat i 2 hashfunktioner, vælge et tomt hash sted, hvis næste nøgle har samme hash værdi så bruger den anden hash funktions hash værdi, hvis den også er taget, vil en af de 2 hash steder der var optaget blive flyttet til deres 2. hash funktion, det giver sig selv at du kan ende med at alle kun har samme hash funktioner så de looper for evigt

regn 2 hash værdier vælg 1 tomt sted, hvis inden af dem er tomme så skub en nøgle ud, den nøgle der blev skubbet ud begynder nu selv at skubbe anden nøgle ud, den som er på 2. hash værdi for den udskubbet hash key
skub en nøgle 
# Direct adressing
Man sætter elementer direkte ind i tabel uden at køre dem igennem en hashfunktion, tal bliver sat på samme indeks plads som tallet selv, så 34 ryger på plads 34. 
# Tables
## Table insert
En måde at indsætte elementer i en tabel og få tabellen til at vokse. Godt til hvis man ikke kender input mængden, table insert gør laver en ny tabel hver gang der indsættes element og rykker alle tidligere elementer over fra den ene tabel til den anden, denne nye tabel vil være dobbelt så stor som den sidste. Man har altid en 2n tabel til n elementer.  