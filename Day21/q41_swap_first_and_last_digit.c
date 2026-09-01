/*
 * Q41: Write a program to swap the first and last digit of a number.
 *
 * Sample Test Cases:
 * Input 1: 1234       Output 1: 4231
 * Input 2: 1001       Output 2: 1001
 */

#include <stdio.h>

int main(void) {
    int n, temp, divisor = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    /* Build the place value of the first digit, e.g. 1000 for a 4-digit number. */
    for (temp = n; temp >= 10; temp /= 10)
        divisor *= 10;

    int first = n / divisor;
    int last = n % 10;
    int middle = n - first * divisor - last;

    printf("%d\n", last * divisor + middle + first);
    return 0;
}
