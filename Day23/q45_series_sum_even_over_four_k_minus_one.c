/*
 * Q45: Write a program to find the sum of the series:
 *      2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
 *
 * Sample Test Cases:
 * Input 1: 3          Output 1: Approximate sum: 1.56
 * Input 2: 5          Output 2: Approximate sum: 2.22
 *
 * Note: the k-th term is 2k/(4k-1), which sums to 1.78 for n=3 and 2.84 for
 * n=5 — the sample outputs on the site do not match the series as written.
 * This program follows the series as written.
 */

#include <stdio.h>

int main(void) {
    int n, k;
    double sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    /* Numerators go 2, 4, 6, ... and denominators go 3, 7, 11, ... */
    for (k = 1; k <= n; k++)
        sum += (2.0 * k) / (4.0 * k - 1);

    printf("Approximate sum: %.2f\n", sum);
    return 0;
}
