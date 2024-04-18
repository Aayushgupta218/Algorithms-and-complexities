#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check if it's safe to color vertex v with color c
bool isSafe(int v, const vector<vector<int>>& graph, const vector<int>& color, int c) {
    for (int i = 0; i < graph[v].size(); ++i) {
        if (graph[v][i] && c == color[i]) {
            return false;
        }
    }
    return true;
}

// Recursive function to assign colors to vertices using backtracking
bool graphColoringUtil(int v, int V, const vector<vector<int>>& graph, vector<int>& color, int m) {
    if (v == V) {
        // All vertices are colored
        return true;
    }

    // Try different colors for vertex v
    for (int c = 1; c <= m; ++c) {
        // Check if color c can be assigned to vertex v
        if (isSafe(v, graph, color, c)) {
            color[v] = c;
            // Recur to assign colors to remaining vertices
            if (graphColoringUtil(v + 1, V, graph, color, m)) {
                return true;
            }
            // If assigning color c doesn't lead to a solution, backtrack
            color[v] = 0;
        }
    }

    // If no color can be assigned to vertex v
    return false;
}

// Function to solve the graph coloring problem
void graphColoring(const vector<vector<int>>& graph, int m) {
    int V = graph.size();
    vector<int> color(V, 0); // Initialize all colors as 0 (unassigned)
    
    if (graphColoringUtil(0, V, graph, color, m)) {
        // Print the solution
        cout << "Solution exists. The coloring of vertices is:\n";
        for (int i = 0; i < V; ++i) {
            cout << "Vertex " << i << " is colored with color " << color[i] << endl;
        }
    } else {
        cout << "Solution does not exist for the given number of colors.\n";
    }
}

int main() {
    // Example graph represented as an adjacency matrix
    vector<vector<int>> graph = {
        {0, 1, 1, 1},
        {1, 0, 1, 0},
        {1, 1, 0, 1},
        {1, 0, 1, 0}
    };

    int m = 3; // Number of colors

    graphColoring(graph, m);

    return 0;
}
