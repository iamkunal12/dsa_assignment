# Dijkstra's Algorithm for Shortest Path

## Data Structure

- The graph is represented using a 2D array (adjacency matrix).  
- `graph[i][j]` contains the weight of the edge between vertex `i` and `j`.  
- `INT_MAX` is used to represent no connection (infinity).


## Functions

- `minDistance()` – Finds the unvisited vertex with minimum distance.  
- `dijkstra()` – Implements Dijkstra’s algorithm to compute shortest distances from the source.  


##  main() Method

- Initializes a weighted graph as an adjacency matrix.  
- Chooses a source vertex.  
- Calls `dijkstra()` to compute and print shortest distances.


## Sample Output

Vertex  Distance from Source  
0       0  
1       5  
2       3  
3       6  
4       8