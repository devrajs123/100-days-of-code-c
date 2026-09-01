/*
 * Q31: Write a program to take a number as input and print its equivalent
 *      binary representation.
 *
 * Sample Test Cases:
 * Input 1: 10         Output 1: 1010
 * Input 2: 7          Output 2: 111
 */

#include <stdio.h>

int main(void) {
    int n, i, index = 0;
    int bits[32];

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    /* Collect the remainders, then print them in reverse order. */
    while (n > 0) {
        bits[index++] = n % 2;
        n /= 2;
    }

    for (i = index - 1; i >= 0; i--)
        printf("%d", bits[i]);

    printf("\n");
    return 0;
}
