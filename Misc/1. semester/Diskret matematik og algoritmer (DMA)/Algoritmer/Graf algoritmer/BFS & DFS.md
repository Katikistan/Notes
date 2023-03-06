De har begge O(|V|+|E|) køretid
# BFS
I sig selv kan denne algoritme ikke bruges til vildt meget alene, men den kan bruges i andre shortest path algoritmer som Dijkstra algoritme. BFS finder ud af hvor mange noder man skal besøge for at komme frem en destination, det gør den til alle knuder i grafen, den tager ikke højde for en vægt af kanter, der kan man bruge Dijkstra.

BFS udforsker et lag af gangen, den besøger alle naboer og finder afstanden, derefter bliver knuden sort, så gå den til en grå nabo og udforsker (gør dem grå) alle naboer osv.  

Når en knude er blevet besøgt kender man længden fra start knuden til den givne knude 

Det er det samme som et level order traversal på et binært træ

Der bruges en priority queue

![|400](https://i.imgur.com/Ff7pZJT.png)
Rækkefølgen du besøger knuderne er ikke relevant man skal bare besøge alle knuder i et givent lag før ,man bevæger sig videre til næste lag. 
![|300](https://i.imgur.com/OOEypQH.gif)
visiting a vertex, man besøger den ene vertex(den bliver grå). 
exploring a vertex, man besøger alle naboer(den bliver sort). 
## Time complexity
In the worst case, BFS must visit all vertices and edges in the graph, which means it has a time complexity of O(V+E), where V is the number of vertices and E is the number of edges. This occurs, for example, when the graph is a tree and the starting vertex is the root.

## Python implementation of BFS
```python
#BFS
graph = {
  '5' : ['3','7'],
  '3' : ['2', '4'],
  '7' : ['8'],
  '2' : [],
  '4' : ['8'],
  '8' : []
}

visited = [] # List for visited nodes.
queue = []     #Initialize a queue

def bfs(visited, graph, node): #function for BFS
  visited.append(node)
  queue.append(node)

  while queue:          # Creating loop to visit each node
    m = queue.pop(0) 
    print (m, end = " ") 

    for neighbour in graph[m]:
      if neighbour not in visited:
        visited.append(neighbour)
        queue.append(neighbour)

# Driver Code
print("Following is the Breadth-First Search")
bfs(visited, graph, '5')    # function calling
```
# DFS
Som preorder traversal af et binært træ

Der bruges en stak

Minder meget om BFS, her går man bare hele vejen fra en knude til en nabo og dens nabo osv.

O(V+E) tid 

Kan bruges til at tælle forbundet komponenter, finde forbindelser
![|300](https://i.imgur.com/Am6Cb2i.png)
![|350](https://i.imgur.com/dI4bZdu.png)
## pseudokode
 ![|300](https://i.imgur.com/e3FgSlW.png)
![|300](https://i.imgur.com/75vr06w.png)
![|300](https://i.imgur.com/4uoJELd.png)
## Python implementation of DFS
```python
#DFS
graph = {
	'A' : ['B','G'],
	'B' : ['C', 'D', 'E'],
	'C' : [],
	'D' : [],
	'E' : ['F'],
	'F' : [],
	'G' : ['H'],
	'H' : ['I'],
	'I' : [],
}
def dfs(graph, node):
	visited = []
	stack = []
	visited.append(node)
	stack.append(node)
	while stack:
		s = stack.pop()
		print(s, end = " ")
	# reverse iterate through edge list so results match recursive version
		for n in reversed(graph[s]):
			if n not in visited:
				visited.append(n)
				stack.append(n)
def main():
	dfs(graph, 'A')
main()
```
--- 
[Abdul Bari - BFS & DFS](https://www.youtube.com/watch?v=pcKY4hjDrxk)
