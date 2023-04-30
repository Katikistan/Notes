# Merge
Denne algoritme bruger divide and conquer, her deles et array op i små bider som så nemmere kan sorteres og til sidst bliver samlet i et sorteret array 
![[merge sort eksempel.png|400]]
Man kan merge to sorteret array, man kan jo so divide et array helt indtil at det er en masse små arrays af længde af n/2^k

![[Pasted image 20220913141844.png|500]]
![[Pasted image 20220913141909.png|400]]
k er det element vi er ved at ordne.
i's grænse er q og j har grænsen r.

Merge(A,0,[n/2],n-1), det her ville være linær tid
hvis man kører det med disse parametere(A,p,q,r) O(n') n' =r-p+1
# Merge sort
![[Pasted image 20221018180621.png]]
her sorterer vi halvdele rekursivt og til sidst når vi har "2 arrays" bruger vi det Merge funktionen
![[Pasted image 20220913143258.png|300]]
her er p < r basis tilfælde, det skal man have når man laver rekursion.  det er når længden af arrayet er 1, når der er 1 element tilbage stopper den med at kalde sig selv, det funktionen gør er at den halvere arrayet, der er to fordi der er en der halvere den ene "gren" og en der halvere det andet. den sorterer til sidst arrayet først helt nede i bunden af træet og dernæst højere og så højere og helt til at 2 dele er tilbage hvor arrayet bliver sorteret og samlet i 1 array.

# Køretid
![[Pasted image 20220913144558.png|400]]
Merge sort ender med en worst case køretid på $\Theta(n \cdot log (n))$ som man også kan se på billedet foroven. 