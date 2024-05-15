## Spændetræ (aka. udspændende træ)
<font style="color:green">Def.</font> Lad H = (V, T ) være en delgraf af en uorienteret graf $G = (V, E )$.  
H er et <font style="color:red">spændetræ</font> for G hvis H er både *acyklisk* (uden nogen kredse) og sammenhængende.

### Egenskaber for spændetræer
Lad $H = (V, T )$ være en delgraf af en uorienteret graf $G = (V, E )$. Følgende  
udsagn er ækvivalente (dvs. enten gælder ingen, eller også gælder alle):  
・H er acyklisk og sammenhængende  
・H er sammenhængende og har kanter $|V | −1$ kanter 
・H er acyklisk og har $|V | −1$  kanter  
・H er minimalt sammenhængende: at fjerne en kant gør den ikke-sammenhængende  
・H er maksimalt acyklisk: at tilføje en kant skaber en kreds  

![|300](https://i.imgur.com/fsZSSwo.png)

## Minimalt spændetræ (MST, aka. minimalt udspændende træ)
<font style="color:green">Def.</font> Givet en sammenhængende, uorienteret graf $G = (V, E )$ med kantvægte $ce$,  er et  <font style="color:red">minimalt spændetræ</font> $H=(V, T )$ et spændetræ for $G$ således at summen af kantvægte i T er minimeret.

![|300](https://i.imgur.com/AguICFT.png)

## Snit 
<font style="color:green">Def.</font> Et <font style="color:orange">snit</font> er en opdeling af knuderne i to ikke-tomme delmængder $S$ og $V – S$.  

$C = \{X,V-X\}, \varnothing \subset X \subset V$ er et snit af G 

<font style="color:green">Def.</font> <font style="color:orange">Snitmængden</font> af et snit $S$ er mængden af kanter, der har præcis én knude i $S$.

![|300](https://i.imgur.com/EerjkXw.png)
En kant krydser et snit hvis den har en en kant i X og V-X

![|300](https://i.imgur.com/t0q5Ggo.png)
## Lette kanter
En kant er let hvis den den har en minimal vægt i blandt alle kanter der krydser et snit C, på tegningen ville det være 4. Det er den mindste vægt i blandt de kanter der krydser imellem X og V-X

en let kant $e$ af et hvert snit $C=\{X,V-X\}$ hører til et MST $G=(V,E,c)$

Det virker ikke at vælge snit og deres lette kanter indtil et MST er opnået.
## Kantmængder
Lad A være en delmængde af kanter $G=(V,E,c)$

A snit $C=\{X,V-X\}$ respekterer kantmængden hvis ingen af de krydsende kanter i C hører til A.
**Korrekt algoritme**:
- Let $A$ be the set of selected edges.
- Initially, $A=\varnothing$.
- Select a cut $C=\{X, V-X\}$ respecting $A$.
- Select a light edge $e=(u, v)$ crossing $C$ and add it to $A$.
- Repeat until there is no cut respecting $A$.
![](https://i.imgur.com/Q73EtBY.png)
Vi vælger en let kant i hver snit der overholder kant mængderne. 

Lad A være delmængde af kanter der hører til et MST T
$A+e$ er en delmængde af kanter der hører til et MST T'
## Sikre kanter

Sikker kant: en kant der kan addes til A uden at bryde invaranten at A er en delmængde af et MST. Dvs. hvis du adder en kant til A, er det så stadig et MST træ (eller en delmængde af et MST), hvis ja er den sikker. 


**Respecting:** A cut **respects** a set A of edges if no edge in A crosses the cut.
1. gælder da snittet indeholder alle kanterne der i delmængden A
2.  gælder ikke fordi c,e ikke er i a
3. gælder fordi ingen af dem er i A
![](https://i.imgur.com/HJ9LOJZ.png)

## Generisk (grådig) MST algoritme
Antag at vi allerede har fundet en mængde $A$ af kanter, der er en delmængde af et MST (invariant)
Vi siger at en kant $(u, v)$ er sikker (safe) for $A$ hvis $A \cup\{(u, v)\}$ også er en delmængde af et MST

GENERIC-MST $(G, w)$
	$A=\emptyset$
	while $A$ is not a spanning tree 
		find an edge $(u, v)$ that is safe for $A$ 
		$A=A \cup\{(u, v)\}$ 
		return $A$

<font style="color:blue">Fundamental snitegenskab.</font> Lad $H=(V, T)$ være et spændetræ for $G=(V, E)$ :
- For enhver kant i træet $f \in T$ har $(V, T-\{f\})$ to sammenhængskomponenter
- Lad $D$ betegne den tilsvarende snitmængde
- For enhver kant $e \in D$ er $(V, T-\{f\} \cup\{e\})$ et spændetræ
![|300](https://i.imgur.com/iOSehr1.png)
<font style="color:blue">Observation 1.</font>
Hvis $c_e<c_f$ så er $(V, T)$ ikke et MST
<font style="color:blue">Observation 2.</font>
En kant der har minimal vægt i en snitmængde $D$ er altid sikker for $A$ hvis $D \cap A=\varnothing$.

### Eksempel på snitgenskab 
![|300](https://i.imgur.com/4Fbr81x.png)
# Prim's algoritme 
![|400](https://i.imgur.com/u8IoW4j.png)
### eksempel:
vælg vilkårligt startsted. 
![|350](https://i.imgur.com/gU20Z7i.png)
![|350](https://i.imgur.com/BnqkmOd.png)
![|350](https://i.imgur.com/kI7wjhf.png)
![|350](https://i.imgur.com/yFsQSvZ.png)
![|350](https://i.imgur.com/ng1YxAn.png)
![|350](https://i.imgur.com/VKSKCav.png)
![|350](https://i.imgur.com/a7DRojs.png)
![|350](https://i.imgur.com/cZmzcKm.png)
![|350](https://i.imgur.com/Bxtm8e7.png)
![|350](https://i.imgur.com/TVKsvRr.png)
![|350](https://i.imgur.com/2RwKCMk.png)
![|350](https://i.imgur.com/MshbD83.png)
![|350](https://i.imgur.com/MDZoHuB.png)
![|350](https://i.imgur.com/PjblKAG.png)
![|350](https://i.imgur.com/taDaK3G.png)
![|350](https://i.imgur.com/C9vFzqd.png)
![|350](https://i.imgur.com/daXztJw.png)

## Pseudo kode til Prim
![](https://i.imgur.com/rVdtYRY.png)


--- 
Tags: #graphtheory 
additional material: https://www.youtube.com/watch?v=4ZlRH0eK-qQ&t=22s
chatgpt noter fra overstående video:
1.  A spanning tree is a subgraph of a graph that includes all of the graph's vertices.
2.  It has n-1 edges, where n is the number of vertices in the graph.
3.  The number of different spanning trees that can be generated from a given graph is given by (number of edges choose n-1), except in the case of a graph with n vertices and n-1 edges, where the number of cycles is subtracted.
4.  The cost of a spanning tree is the sum of the weights of the edges included in the tree.
5.  One way to find the minimum cost spanning tree is through Kruskal's algorithm or prim's algorithm.
6.  Both algorithms involve sorting the edges by weight and adding them to the tree one by one, starting with the lowest weight edge.
7.  The minimum cost spanning tree is useful for finding the cheapest way to connect all the vertices in a graph, for example in a communication or transportation network.
8.  Both Prim's and Kruskal's algorithms are used to find the minimum cost spanning tree of a graph.
9.  Prim's algorithm starts at a random vertex and adds the lowest cost edge that connects it to the tree.
10.  It continues adding edges until all vertices are included in the tree.
11.  Kruskal's algorithm begins by sorting all of the edges in the graph by weight.
12.  It then adds the lowest weight edge to the tree and continues adding the lowest weight edges that do not create a cycle.
13.  Both algorithms involve a priority queue to store the edges.
14.  Prim's algorithm uses a priority queue with the edges sorted by weight, while Kruskal's algorithm uses a priority queue with the vertices sorted by their distance from the tree.
15.  Both algorithms have a time complexity of O(ElogE), where E is the number of edges in the graph.
16.  Prim's algorithm has a space complexity of O(V), while Kruskal's algorithm has a space complexity of O(E).
17.  Both algorithms can be implemented using a disjoint-set data structure to detect cycles.