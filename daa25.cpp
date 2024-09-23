#include <stdio.h>
void sumOfSubsets(int set[], int n, int target, int index, int currentSum) {
    if (currentSum == target) {  
        printf("Subset found\n");
        return;
    }
    for (int i = index; i < n; i++) {
        if (currentSum + set[i] <= target) { 
            sumOfSubsets(set, n, target, i + 1, currentSum + set[i]);
        }
    }
}
int main() {
    int set[] = {10, 7, 5, 18, 12, 20, 15};
    int n = sizeof(set) / sizeof(set[0]);
    int target = 35;
    sumOfSubsets(set, n, target, 0, 0);
    return 0;
}

