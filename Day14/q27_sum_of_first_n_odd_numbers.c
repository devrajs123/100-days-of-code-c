/*
 * Q27: Write a program to print the sum of the first n odd numbers.
 *
 * Sample Test Cases:
 * Input 1: 3          Output 1: 9
 * Input 2: 5          Output 2: 25
 */

#include <stdio.h>

int main(void) {
    int n, i, count, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    /* Walk the odd numbers 1, 3, 5, ... and stop after n of them. */
    for (i = 1, count = 0; count < n; i += 2, count++)
        sum += i;

    printf("%d\n", sum);
    return 0;
}
