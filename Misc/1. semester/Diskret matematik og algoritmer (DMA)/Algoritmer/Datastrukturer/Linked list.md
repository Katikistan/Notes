# Enkelt hægtet liste
En hægtet liste er en liste hvor elementer peger til næste element. man har altså x som er et element, man ville så skrive dette element som x.key og x.next. hvor x.key indeholder f.eks. et tal og hvor x.next er en pointer til næste tal i listen. 

Hvis et element ikke peger til noget siger vi at det peger på NIL(/) som er enden eller ingenting. man kan også skrive en linked liste op som et array, hvor at tallet til højre fra keyen er indeks tallet som den næste key værdi står på. vi ser at 6 ikke peger på noget element derfor er dens .next værdi NIL. 
![[Pasted image 20221018182311.png|400]]
Det er rigtig smart fordi hvis man ønsker at sætte et nyt element i listen er det blot 2 pointers der skal opdateres. Det ses her hvor at man først indsætter 11 og dernæst fjerner 4. 
![[Pasted image 20221018182623.png|400]]

# Double linked list
Her tilføjer man x.prev som er en pointer til sidste element i listen, her vil sidste element i listen ikke have nogen .next pointer og første element vil ikke have nogen .prev pointer. på billedet ses der at elementet 42 bliver sat ind i listen og det er blot pointers der skal opdateres. I et array hvor man med enkelthægtet liste kun havde reserveret pladsen til højre til .next, så reserverer man også pladsen til venstre for .key værdien den bliver brugt til .prev herfra fungerer tingene på samme måde som enkelt hægtet lister. 
![[Pasted image 20221018182835.png|400]]
Søgning i enkelt hægtet liste:
![[Pasted image 20221018230044.png|200]]
operationer som at indsætte og slette tager alle sammen konstant tid. 