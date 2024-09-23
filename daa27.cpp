#include <stdio.h>
void containerLoader(int weights[], int n, int capacity) {
    int totalWeight = 0;
    printf("Selected weights: ");
    for (int i = 0; i < n; i++) {
        if (totalWeight + weights[i] <= capacity) {
            totalWeight += weights[i];
            printf("%d ", weights[i]);
        }
    }
    printf("\nTotal weight in container: %d\n", totalWeight);
}
int main() {
    int weights[] = {10, 20, 30, 40, 50};
    int n = sizeof(weights) / sizeof(weights[0]);
    int capacity = 60;
    containerLoader(weights, n, capacity);
    return 0;
}

