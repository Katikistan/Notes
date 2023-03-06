maksimal knudemængde: man kan ikke komme videre, 
![](https://i.imgur.com/PfeXLww.png)
a og e er ikke en maksimal knudemængde fordi man godt kan gå til b.
men man kan ikke gå videre fra f og g(man skal jo ende med at kunne komme tilbage hvor man startet.)

![](https://i.imgur.com/WB9FZAU.png)
1. Man flipper alle elementer på hver side af diagonalen. 
2. ja refleksiv hvis der var en forbindelse mellem a og b og der nu er en forbindelse mellem b og a, flip alle edges i billede foroven og her bliver det tydeligt at der er samme stærke sammenhængskomponenter 
3. O(V+E)
![](https://i.imgur.com/gmBi557.png)
![](https://i.imgur.com/VMvDWUo.png)
når man prøver at kalde dfs på den transpornede: starter på b fordi den har størst finishing time, så gå den til a og så e, så stopper den.  de knuder vi besøger i hver kald til dfs er sammenhængskomponenter så vi finder frem til at a,b og e er stærke sammenhængskomponenter. hvis man kaldte dfs på g vil man besøge f og g.
![](https://i.imgur.com/aj171Sz.png)
![](https://i.imgur.com/mo3vfjX.png)


komponentgrafen skal være acyklisk fordi ellers ville man kunne gå fra f.eks. fg til abe og så ville det være en stor sammenhængskomponent. 
![](https://i.imgur.com/DocPpAP.png)
