#include <iostream>
#include <climits>
using namespace std;

int findfcost(int** cost, int n, int k, int* fcost, int* d, int* p) {
    for (int j = n - 2; j >= 0; j--) {
        int r = INT_MAX;

        int minCost = INT_MAX;
        for (int i = j + 1; i < n; i++) {
            if (cost[j][i] != 0 && cost[j][i] != INT_MAX) {
                if (cost[j][i] + fcost[i] < minCost) {
                    r = i;
                    minCost = cost[j][i] + fcost[i];
                }
            }
        }

        if (r != INT_MAX) {
                fcost[j] = cost[j][r] + fcost[r];
                d[j] = r;
            }
    }

    p[0] = 0;
    p[k - 1] = n - 1;

    for (int j = 1; j < k - 1; j++) {
        p[j] = d[p[j - 1]];
    }

    return fcost[0];
}

int main() {
    int n = 8;
    int k = 4;
    int** cost = new int*[n];

    for (int i = 0; i < n; ++i) {
        cost[i] = new int[n];
        for (int j = 0; j < n; ++j) {
            cost[i][j] = (i == j) ? 0 : INT_MAX;
        }
    }

    cost[0][1] = 2;
    cost[0][2] = 1;
    cost[0][3] = 4;
    cost[0][4] = 6;
    cost[1][5] = 5;
    cost[1][6] = 8;
    cost[2][5] = 5;
    cost[2][6] = 6;
    cost[3][6] = 6;
    cost[3][5] = 8;
    cost[4][6] = 4;
    cost[5][7] = 3;
    cost[6][7] = 7;

    int* fcost = new int[n];
    int* d = new int[n];
    int* p = new int[k];

    int minCost = findfcost(cost, n, k, fcost, d, p);

    cout << "Path: ";
    for (int i = 0; i < k; i++) {
        cout << p[i] << " ";
    }

 //   cout << "\nMinimum cost is: " << minCost;

    for (int i = 0; i < n; ++i) {
        delete[] cost[i];
    }
    delete[] cost;
    delete[] fcost;
    delete[] d;
    delete[] p;

    return 0;
}
