Binary search kan søge efter et element i et sorteret array. i En binary search stiller man sig i midten af et array og spørger et det element jeg søger efter, større eller mindre end det element jeg ønsker at finde, det kan man gøre fordi arrayet er sorteret. Hvis man f.eks havde array A = {1,2,3,4,5,6,7,8,9,10} og man søgte efter 1, ville man stille sig på 5. spørge  om 1 er større eller mindre end 5. man ville bagefter  så stille sig i midten mellem starten og midten af arrayet istedet for fra starten af slutten. på den måde bliver søgegrænsen også halveret hver iteration. Man ville til sidst ende med at finde elementet eller ville ende med at søge i et negativt område hvilket ikke er muligt og man vil derved kunne konkluderer om man fandt elementet eller ej. 

Eftersom man bliver ved med at halverer elementerne man søger igennem for hver iteration indtil man når ned til 1 element kan man sige at køretiden i worst case er $\Theta(log_2(n))$.

Binary search duer kun hvis man har et sorteret array. 
# Pseudokode:
![[Pasted image 20221018171113.png]]
## Køretid
Lad T(n) være køretiden for Binær søgning.
![[Pasted image 20221018171251.png]]
![[Pasted image 20221018171339.png|200]]