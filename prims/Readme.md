The algorithm starts with an empty spanning tree. The idea is to maintain two sets of vertices. 
The first set contains the vertices already included in the MST, and the other set contains the vertices not yet included. 
At every step, it considers all the edges that connect the two sets and picks the minimum weight edge from these edges. After picking the edge, 
it moves the other endpoint of the edge to the set containing MST.

TIME COMPLEXITY = O[(V+E)logv]
