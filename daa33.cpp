#include <stdio.h>
int main() {
    int n, coef = 1;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int space = 1; space <= n - i; space++)
            printf("  ");  
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                coef = 1; 
            else
                coef = coef * (i - j + 1) / j;  
            printf("%4d", coef);  
        }
        printf("\n");  
    }
    return 0;
}

