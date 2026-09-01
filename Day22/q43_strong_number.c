/*
 * Q43: Write a program to check if a number is a strong number.
 *
 * Sample Test Cases:
 * Input 1: 145        Output 1: Strong number      (1! + 4! + 5! = 145)
 * Input 2: 123        Output 2: Not strong number
 */

#include <stdio.h>

int main(void) {
    int n, original, digit, i;
    long long sum = 0, factorial;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n > 0) {
        digit = n % 10;

        factorial = 1;
        for (i = 2; i <= digit; i++)
            factorial *= i;

        sum += factorial;
        n /= 10;
    }

    if (sum == original)
        printf("Strong number\n");
    else
        printf("Not strong number\n");

    return 0;
}
