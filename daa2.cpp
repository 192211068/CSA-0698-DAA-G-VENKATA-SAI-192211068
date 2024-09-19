#include <stdio.h>
#include <math.h>
int countDigits(int num) {
    if (num == 0)
        return 0;
    return 1 + countDigits(num / 10);
}
int sumOfPowers(int num, int power) {
    if (num == 0)
        return 0;
    return pow(num % 10, power) + sumOfPowers(num / 10, power);
}
int isArmstrong(int num) {
    int numDigits = countDigits(num);
    return num == sumOfPowers(num, numDigits);
}
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
