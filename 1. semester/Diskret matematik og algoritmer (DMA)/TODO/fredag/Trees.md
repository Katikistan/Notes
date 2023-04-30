uge 13
Def. A graph G is acyclic if it has no cycles.
![|200](https://i.imgur.com/PsQ5j3u.png)

#### A finite graph $G=(V, E)$ is a tree if any of the following hold
- $G$ is connected and acyclic (Def. from the previous slide)
 - $G$ is the graph of the symmetric closure ${ }^2$ of a directed tree T.
- $G$ is connected and $|E|=|\mathrm{V}|-1$.
- $G$ is acyclic and $|E|=|V|-1$.
- $G$ is connected but removing any edge makes it disconnected.
- $G$ is acyclic but adding any new edge creates a cycle.
- There exists a unique path between any pair of vertices.
### Rooted (undirected) trees
**Def.** A rooted tree is a pair (T,$v_0$), where T is a tree and $v_0$,
called a root, is a vertex of T.

**Recall:** In a directed tree the root was unique.
In an undirected tree, T, we can choose the root arbitrarily.	

There will always be a unique path from the root to any
other vertex of T.

### Subgraphs
**Def.** We say that a graph $G^{\prime}=\left(V^{\prime}, E^{\prime}\right)$ is a subgraph of a graph $\mathrm{G}=(\mathrm{V}, \mathrm{E})$, if $\mathrm{V}^{\prime} \subseteq \mathrm{V}$ and $\mathrm{E}^{\prime} \subseteq \mathrm{E}$.

### Spanning tree
**Def.** A spanning tree of a graph $G = (V,E)$ is a tree $T = (V,E')$
which is a subgraph of $G$.

## How many edges are there in G?
Recall: The degree, deg(v), of a vertex v in G is the number of
edges having this vertex as an endpoint.
**Thm.** Let G =(V,E) be a graph. Then
$$
|\mathrm{E}|=\frac{1}{2} \sum_{v \in V} \operatorname{deg}(v)
$$
![|200](https://i.imgur.com/6lsgUnV.png)
$5 \stackrel{?}{=} \frac{1}{2}(1+2+1+3+2+1)=\frac{1}{2} \cdot 10=5$
