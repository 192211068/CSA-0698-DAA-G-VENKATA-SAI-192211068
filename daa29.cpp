#include <stdio.h>
#include <limits.h>
#define N 4  
int findMinCost(int cost[N][N], int assignment[N], int n, int assigned[N], int worker) {
    if (worker == n) {
        return 0; 
    }
    int minCost = INT_MAX;
    for (int task = 0; task < n; task++) {
        if (!assigned[task]) {  
            assigned[task] = 1;
            assignment[worker] = task;
            int currentCost = cost[worker][task] + findMinCost(cost, assignment, n, assigned, worker + 1);
            if (currentCost < minCost) {
                minCost = currentCost;
            }
            assigned[task] = 0; 
        }
    }
    return minCost;
}
int main() {
    int cost[N][N] = {
        {9, 2, 7, 8},
        {6, 4, 3, 7},
        {5, 8, 1, 8},
        {7, 6, 9, 4}
    };
    int assignment[N];
    int assigned[N] = {0};
    int minCost = findMinCost(cost, assignment, N, assigned, 0);
    printf("Minimum assignment cost: %d\n", minCost);
    return 0;
}

