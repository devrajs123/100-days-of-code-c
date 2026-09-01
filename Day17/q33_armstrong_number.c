/*
 * Q33: Write a program to check if a number is an Armstrong number.
 *
 * Sample Test Cases:
 * Input 1: 153        Output 1: Armstrong
 * Input 2: 123        Output 2: Not Armstrong
 */

#include <stdio.h>

int main(void) {
    int n, original, temp, digits = 0, digit, i;
    long long sum = 0, power;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    /* First pass: count the digits, which is the power to raise each digit to. */
    for (temp = n; temp > 0; temp /= 10)
        digits++;

    /* Second pass: add up each digit raised to that power. */
    for (temp = n; temp > 0; temp /= 10) {
        digit = temp % 10;
        power = 1;
        for (i = 0; i < digits; i++)
            power *= digit;
        sum += power;
    }

    if (sum == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
