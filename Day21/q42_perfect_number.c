/*
 * Q42: Write a program to check if a number is a perfect number.
 *
 * Sample Test Cases:
 * Input 1: 6          Output 1: Perfect number
 * Input 2: 10         Output 2: Not perfect number
 */

#include <stdio.h>

int main(void) {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    /* A perfect number equals the sum of its proper divisors. */
    for (i = 1; i < n; i++) {
        if (n % i == 0)
            sum += i;
    }

    if (n > 0 && sum == n)
        printf("Perfect number\n");
    else
        printf("Not perfect number\n");

    return 0;
}
