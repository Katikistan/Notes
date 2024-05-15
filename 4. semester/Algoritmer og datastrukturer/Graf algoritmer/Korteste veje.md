Givet en graf, kan man bestemme den korteste vej mellem en knude, og det samlede antal knuder i grafen. Dette kan gøres på flere forskelige måde, afhængig af hvilken algoritme der benyttes.

Der gælder at hvis grafen er orienteret gælder der $G=(V, E)$, hvilket også vil give korteste vej træet er givet ved $G^{\prime}=\left(V^{\prime}, E^{\prime}\right)$. Det vil betyde at følgende ting gælder:
- Knuden $s$ har kun udgående kanter i $G^{\prime}$, det skyldes at når træet starter i knuden $s$, vil der kun få kanter ud fra $s$, da der ikke kan være kanter som peger tilbage mod startpunktet $s$.
- $G^{\prime}$ har $\left|V^{\prime}\right|-1$ kanter, det er fordi at der altid vil være $n-1$ kanter i træet
- Enhver sti i $G^{\prime}$ er en korteste vej i $G$, det skyldes at alle vejende i $G^{\prime}$ er de korteste vej fra startkunden $s$ til de andre knuder.

Der står mere i CLRS kapitel 23, side 646.
# shortest-paths tree
![](https://i.imgur.com/5H698GT.png)
Hvilke er med i korteste vej træet? start gør det i aflabetisk rækkefølge
Hvis startknude er *a*:
(a,b): korteste vej til b
(f,c): korteste vej til c
(a,d): korteste vej til d 
(c,e): kortestet vej til e
(d,f): korteste vej til f
kig på alle veje der går ind til en knude, hvilke er bedst?


Egenskaber:
- All edges have positive weights: Shortest paths cannot contain cycles.
-  Shortest paths in graphs with n vertices have at most n-1 edges.

# Relax
Hvis der findes en ny kortere vej til en knude, så opdater dens afstand med hjælpefunktionen relaxation(u,v). Dvs hvis
$$
d[v]>d[u]+w(u, v)
$$
så sæt $d[v]=d[u]+w(u, v)$ og pointeren sættes til $\mathrm{u}$.

# Dijkstras
 Ved hver iteration, vælg den knude med den korteste vej u til start.
Relaxer herefter alle knuder fra u. Fortsæt indtil alle knuder er "kigget"fra.

Hvis man skal finde den korteste vej i et en orienteret graf, hvor man har en star knude, kan man gøre det ved at finde ud af hvad den kortete vej fra startknuden er til de resterede knuder i grafen.
Ken kortese vej er den vej som har den laveste vægt, og ikke nødvendigvis den vej som indeholder færrest kanter. Hvis grafen kun indeholder positive kanter kan man Dijkstra’s algoritme, den kan kun benyttes når alle kanter er positive.

Dijkstra's algoritme bruges til at finde den korteste vej til et givent punkt i en graf, her tales der om en vægtet graf, man følger altså den vej hvor summen af kantvægte er minds muligt. 

Hvis man har en uvægtet graf  bruger man bare BFS i stedet da den har hurtigere køretid end Dijkstra. 

I Dijkstra bliver udforkset knuder tilføjet til en mængde S, når en knude er i den mængde ved man at den sti er den hurtigste og man behøver ikke at søge efter en først når den man søger efter i S at man ved at man har fundet den korteste vej. 

![](https://i.imgur.com/IyH9Kn3.png)
![](https://i.imgur.com/XEtm8ja.png)
![](https://i.imgur.com/KzU1n5A.png)
1. The algorithm starts with the starting note S and assigns distance 0 to it and $\infty$ to all other nodes in the graph.

2. The algorithm then visits all the unvisited nodes and for each node, it calculates the distance by adding the weight of the current edge to the distance value of the previous node. If this new distance is less than the current distance value of the node, it updates the distance value of the node.

3. The algorithm marks the visited node as permanent and selects the unvisited node with the smallest distance as the next node to visit.

4. The algorithm repeats steps 2 and 3 until the destination node is marked as permanent or until all the unvisited nodes have been visited.

5. The final shortest path is constructed from the destination node to the source node by tracing back through the permanent nodes.

Note: Dijkstra's algorithm is only for directed graphs where the edges have non-negative weights and for an unweighted graph the algorithm becomes pointless, since one could just use [[BFS & DFS|BFS]] which is quicker.
# Bellman ford
Hvis en graf derimod har kanter med negative værdier kan der kun benyttes Bellman-Ford algoritmen, til at finde den korteste vej, mellem knuderne i træet. Det vil sige at hvis man skal finde den korteste vej fra en startknude i træet, vil grafen kunne se ud som:

Gå igennem alle kanter (i en tilfældig rækkefølge), og relaxer hvis der findes en mindre afstand, dette gøres $n-1$ gange (dvs. den går igennem alle $\mathrm{n}$ kanter $\mathrm{n}-1$ gange). Herefter kontrolleres det for om der findes en vej hvori $d[v]>d[u]+w(u, v)$ gælder, og hvis ja, så må der findes en negativ kreds og derfor udefineret. $O(n \cdot m)$.
$$
\begin{array}{|l|l|l|}
\hline \text { Fra a til } & \text { længde } & \text { rute } \\
\hline \text { b } & 2 & (\mathrm{a}, \mathrm{c})-(\mathrm{c}, \mathrm{b}) \\
\hline \mathbf{c} & 4 & (\mathrm{a}, \mathrm{c}) \\
\hline \mathbf{d} & 1 & (\mathrm{a}, \mathrm{d}) \\
\hline \mathbf{e} & 8 & (\mathrm{a}, \mathrm{c})-(\mathrm{c}, \mathrm{e}) \\
\hline \mathbf{f} & 3 & (\mathrm{a}, \mathrm{c})-(\mathrm{c}, \mathrm{e})-(\mathrm{e}, \mathrm{f}) \\
\hline
\end{array}
$$
