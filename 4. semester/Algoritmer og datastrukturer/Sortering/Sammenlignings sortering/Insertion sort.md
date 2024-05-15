---
Type: note
Author: Filuris
Date: 13.09.22
Tags: #algorithm #sorting #timecomplexity
Status: 📝
---
vi tjekker alle indtil vi kommer ned til et sted hvor tallet vi vil have sorteret er større end tallet til venstre. det tal vi vil have sorteret er kalder vi key.
# Hvordan fungerer det
bliver ved med at rykke "key" ned i arrayet indtil tallet til venstre fra key er mindre end key
![[insertion sort full.png|250]]
her bruges der nul indeksering modsat i CLRS bruges der 1 indeksering.
# Tidskompleksitet 
som man kan se er der et while loop inde i et for loop derved ender det med at tidskompleksiteten kommer til at være $\Theta(n^2)$.
![[køretid af insertion sort.png|450]]
(køretid af for loopet er teknisk set n-1 fordi j er 1)
while løkken skal muligvis kun rykke et tal 1 gang, men man kan også komme ud for at det skal rykke et tal helt fra den ene ende til den anden og der tager det n*(n+1)/2. dette er selvfølelig worst case. 

OBS. 
bare fordi der er et for loop i et for loop betyder det ikke at der kvadratisk køretid. hvis inderste loop har kvadratrod tid ender man med at få en køretid på n * Sqrt n som altså ikke er kvadratisk tid. 
