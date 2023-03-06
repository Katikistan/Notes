Et array er en liste af pladser der indeholder elementer. elementerne har en adresse som er den plads elementet ligger på. I et array med 10 pladser som alle indeholder elementer i form af tal ville man kunne sige A ={0,1,2,3,4,5,6,7,8,9}. Dette array har n=10 elementer og har længden n-1. Det skyldes at arrayet er 0 indekseret. I A vil man også kunne skrive tallet 5 som A[6] fordi at tallet 5 har indeks pladsen 6. 

## Toppunkter
I et array kan man også sige at der toppunkter. et Toppunkt A[i] er A[i-1] ≤ A[i] ≥ A[i+1] for $i \in {1,...,n-2}$
A[i] er toppunkt hvis A[i-1] ≤ A[i] ≥ A[i+1].
A[n-1] er toppunkt hvis A[n-2] ≤ A[n-1].

I mere generel tale er et element et toppunkt hvis det er større end sine naboer og hvis tallet ligger i A[0] eller eller A[n-1] så tager vi bare den ene nabo. det et det højeste tal i et array

## Inversioner
En inversion er når Tallet på pladsen i er større en tallet på plads i+1
A={1,2,3,5,4}
I A er der 1 inversion fordi at A[4] > A[5], men A= 4 < A=5
Inversioner fortæller os hvor langt et array er fra at være sorteret, mange inversioner betyder at arrayet er langt fra at være sorteret. B={4,3,2,1} i B er antallet af inversioner  A[0]=3 ,A[1]=2 ,A[2]=1  ,A[3]=0. Der er her i alt 6 inversioner. Når der er 4 elementer som kan der maksimalt være 6 inversioner. 

Der ses at mængden af inversioner også kan skrives som en serie. $1+2+3+ ... n= \frac{n(n-1)}{2}$
maksimale antal af inversioner er altså : $n= \frac{n(n-1)}{2}$