de er lige hurtige $O(n^2)$

kruskals tjekker om kanten er sikker. 

Both Prim's algorithm and Kruskal's algorithm are methods for finding a minimum spanning tree in a graph. A minimum spanning tree is a subgraph of a graph that includes all of the vertices of the graph, but only a subset of the edges, and the sum of the weights of the edges in the tree is minimized.

The main difference between the two algorithms is how they go about finding the minimum spanning tree. Prim's algorithm is a greedy algorithm that builds the tree one vertex at a time, starting with a single vertex and adding the next vertex that is closest to the tree. Kruskal's algorithm, on the other hand, is a graph search algorithm that builds the tree by adding edges one at a time, starting with the smallest edge and working up to the largest.

Here are some other differences between the two algorithms:
-   Prim's algorithm is generally faster than Kruskal's algorithm for dense graphs (graphs with a lot of edges).
-   Kruskal's algorithm is generally more efficient for sparse graphs (graphs with fewer edges).
-   Prim's algorithm requires the use of a priority queue to keep track of the vertices that are not yet in the tree, while Kruskal's algorithm does not.
