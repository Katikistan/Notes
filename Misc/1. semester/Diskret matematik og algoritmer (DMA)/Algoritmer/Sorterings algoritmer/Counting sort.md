Counting sort benytter sig af 3 arrays for at sorterer. A : Input arrayet. B: Det færdige sorteret array. C: et array som bliver brugt midlertidigt til at holde styr på mængden af hver tal.

I arrayet c vil man have et array med samme længde som intervallet af tal værdier i array af. Hvis man f.eks. har tal fra 0 til 4 i array A, så vi c have en længde på 5. Man vil dernæst gå igennem array A og tælle op hvor mange gange hvert tal fremkommer og denne optælling bliver gemt i indekset der passer med det tal vi har talt fremkomster af. Så hvis 0 fremkommer 3 gange bliver der gemt 3 på indeks plads 0. 

Dernæst akkumulerer man alle disse mængder
![[Pasted image 20221022193834.png]]
som man kan se her på billedet er der 1: 0 tal. 0: 1 taller osv. 
derfor ender vi i c med at have 1 på indeks plads 0 og 1. fordi i indeks 1 summere vi 1+0. i indeks 2 udfører vi 1+0+3. 1+0+3+2+1. som ender op med at man får det akkumuleret array.

Vi går nu baglæns igennem array A så vi kigger på indeks plads 7 og ser at der står 3 derfor går vi ind i C på indeks plads 3 og trækker 1 fra, men før vi gør det ser vi at indeks 3 har værdien 6 og derfor ved vi at tallet 3 skal indsættes på indeks plads 6 i array b. dernæst er der 5 på indeks plads 3. Vi kigger nu på 2f, vi kigger på C og ser at 2 har værdien 4 og derfor indsætter vi 2 på indeks plads 4 i array B osv.
![[Pasted image 20221022194435.png|200]]
Vores array ender således. 

denne måde at sorterer sørger for at sattelitdata bliver gemt, det er vist med bogstaverne. de følger altså med tallet når det bliver rykket rundt. 

Counting sort er en stabil sorterings algoritme. modsat sammenlignings sortering som benytter sig af sammenligning af 2 element for at komme frem til det sorteret array, bruger counting sort en anden fremgangsmåde. 

Counting sort er brugbart når du har store datamængder, men de talværdier du ønsker at sorterer ikke er i et stort interval. Hvis du f.eks. skulle sorterer 5000 tal fra 0 til 5 ville counting sort hver et oplagt valg. Man er altså nødt til at lave en antagelse om intervallet som inputtet er i. som fra 0-5, 10-99.

Man Benytter counting sort i radix sort. 

## Køretid
fordi 1 element ikke er nødt til at blive sammenlignet med n elementer n gange så får man en linær køretid. $\Theta(n)$