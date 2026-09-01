/*
 * Q29: Write a program to calculate the factorial of a number.
 *
 * Sample Test Cases:
 * Input 1: 5          Output 1: 120
 * Input 2: 3          Output 2: 6
 */

#include <stdio.h>

int main(void) {
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers\n");
        return 0;
    }

    for (i = 2; i <= n; i++)
        factorial *= i;

    printf("%llu\n", factorial);
    return 0;
}
