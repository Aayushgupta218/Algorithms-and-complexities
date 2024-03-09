The algorithm maintains a set of visited vertices and a set of unvisited vertices.
It starts at the source vertex and iteratively selects the unvisited vertex with the smallest tentative distance from the source.
It then visits the neighbors of this vertex and updates their tentative distances if a shorter path is found.
This process continues until the destination vertex is reached, or all reachable vertices have been visited.

TIME COMPLEXITY = O(V^2)
