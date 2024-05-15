
bruger DFS
1.  Topological sort, also called top sort, is an algorithm used to give a topological ordering of nodes in a directed graph.
2.  Topological sort is used in real-world situations that can be modeled as a graph of nodes and directed edges, such as school class prerequisites and program dependencies.
3.  The motivation for top sort is to find an ordering of nodes such that each edge from node A to node B has node A appearing before node B in the ordering.
4.  Topological sort can be used to determine the order in which classes should be taken or in which programs should be built and their dependencies.
5.  Not all types of graphs have a topological ordering, specifically those with directed cycles.
6.  The only graphs that have valid topological orderings are called directed acyclic graphs (DAGs), which have directed edges but no cycles.
7.  One method for verifying that a graph does not contain a directed cycle is to use the strongly connected components algorithm.
8. **Every tree has a topological ordering because it has no cycles.**
9.  To find a topological ordering in a tree, one can iteratively pick off the leaf nodes or "cherry pick" from the bottom.
10.  For a general directed acyclic graph (DAG), the topological sort algorithm involves finding an unvisited node and doing a depth first search on only reachable, unvisited nodes.
11.  After the depth first search, the node is marked as visited and added to the front of a list.
12.  This process is repeated until all nodes have been visited.
13.  The resulting list will be the topological ordering of the nodes in the graph.
14.  One way to implement topological sort is with a stack and a modified depth first search.
15.  Another way to implement topological sort is with a queue and breadth first search.
16.  Topological sort has a time complexity of O(V+E) for both implementations.
17.  Topological sort can also be used to detect cycles in a graph.
18.  If a graph has a cycle, the depth first search or breadth first search in the topological sort algorithm will not be able to completely visit all the nodes.
19.  Topological sort has applications in scheduling tasks and finding the order of instructions in an assembly line.
20.  It is important to note that topological orderings are not unique and there may be multiple valid ways to order the nodes in a graph.
