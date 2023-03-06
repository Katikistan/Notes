Dijkstra's algoritme bruges til at finde den korteste vej til et givent punkt i en graf, her tales der om en vægtet graf, man følger altså den vej hvor summen af kantvægte er minds mulig. 

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