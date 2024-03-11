Kruskal's Minimum Spanning Tree Algorithm
This C++ program implements Kruskal's algorithm to find the Minimum Spanning Tree (MST) of a connected, undirected graph. Kruskal's algorithm is a greedy approach that efficiently finds the subset of edges that forms a tree with the minimum possible total edge weight.

Description
The program defines a struct Edge to represent graph edges with source (src), destination (dest), and weight (weight). The key functions include compareEdges for sorting edges based on their weights, findParent for finding the parent of a given vertex in a disjoint set, unionSets for combining two disjoint sets, and MST_Kruskal for executing the Kruskal's algorithm.

Approach
Edge Structure:

The Edge structure holds information about a graph edge, including the source, destination, and weight.
Sorting Edges:

The compareEdges function is used to sort the edges based on their weights in ascending order.
Disjoint Set Operations:

findParent finds the parent of a vertex in a disjoint set.
unionSets combines two disjoint sets.
Kruskal's Algorithm:

The main function MST_Kruskal initializes an empty result vector and a parent vector to track disjoint sets.
It sorts the edges in ascending order based on their weights.
It iterates through the sorted edges, adding each edge to the result if it doesn't create a cycle in the MST.
The program outputs the edges of the Minimum Spanning Tree.
