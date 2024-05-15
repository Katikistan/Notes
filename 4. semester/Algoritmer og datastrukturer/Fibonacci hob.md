Et fibonacci heap er en samling af træer, som alle har min-heap egenskab, dvs. enhver forældre er mindre eller lig dens børn. Dvs. det mindste element i hele heapen må være blandt rodknuderne.
Alle rodknuder er forbundet cirkulært med en dobbelt linked liste. Hver knude har en pointer til dens forældre. Hver knude har kun en pointer til et barn, og søskende knuder er så forbundet cirkulært med en dobbelt linked liste. Der er en pointer H.min til det mindste element.
![](https://i.imgur.com/Vqu1Lpx.png)
x.deg: antallet af børn, 5 har f.eks 2 børn 7 og 6  (8 er barn til 6)
x.mark: er knuden markeret
# Operationer
**God gennemgang i slides btw**
## Insert
Sæt knuden fast på roden.
## Extract min
Fjern roden der har pointeren H.min. Sæt herefter alle børn op på roden, og kør consolidate for at "rydde op". Og returner $min$ knuden.
## Consolidate
alle roder skal have forskelligt mængde børn
![[Pasted image 20240407193101.png]]
5 har 1 barn, det har 9 også, derfor gør vi 9 til 5's barn
![](https://i.imgur.com/FJDWooU.png)

man tæller kun børn på rod knuden ikke børnebørn.  Når man har kørt consolidate går man videre til næste rod knude indtil alle har forskellige mængde børn. 
![](https://i.imgur.com/iyQRWTb.png)
![[Pasted image 20240407193435.png]]
## Markede knuder
Alle knuder starter som umarkerede. Hvis en knude får en forældre i consolidate, så bliver den umarkeret. Hvis en knude mister et barn, så bliver den markeret. Hvis en knude der allerede er markeret mister endnu et barn, så rykkes den op som rod, og sættes som umarkeret. "Når en knude mister sit første barn, bliver den ked ad det, og derfor markeret. Når en knude mister sit andet barn, så starter den forfra."
## Decrease key
Decrease key reducerer x.key for en knude, men det giver problemer med min heap egenskaberne. Dvs. hvis den nye værdi er større end sin forældre, så gør den ikke mere. Men hvis den er mindre, bliver knuded sat op som rod, og foreældren bliver markeret. Flere knuder kan rammes af dette, som kaldes "cascading cut", hvori flere knuder bliver påvirket op igennem træet af en decrease key.
## Union
Union slår blot rodknuderne sammen for de to træer, hvilket nemt kan gøres, da det blot er en dobbelt linked liste, så ændres pointerne bare i enderne. Og H.min sættes til den mindste fra de to træer.
## Delete
Sæt x.key til minus uendelig, og kør herefter extract min.
# Potentiale funktion
For at beregne den amortiserede køretid, er potentiale funktionen angivet til
$$
\Phi(H)=t(H)+2 m(H)
$$
$t(h)$ angiver antal rødder i rodlisten. $m(H)$ angiver antal markerede knuder.


![](https://i.imgur.com/d8nQUnB.png)