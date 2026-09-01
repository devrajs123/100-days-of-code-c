/*
 * Q44: Write a program to find the sum of the series:
 *      1 + 3/4 + 5/6 + 7/8 + ... up to n terms.
 *
 * Sample Test Cases:
 * Input 1: 3          Output 1: Approximate sum: 3.3
 * Input 2: 5          Output 2: Approximate sum: 4.4
 *
 * Note: summing the series exactly as written gives 2.58 for n=3 and 4.36 for
 * n=5. The n=5 sample rounds to 4.4 as shown, but the n=3 sample on the site
 * (3.3) does not match the series. This program follows the series as written.
 */

#include <stdio.h>

int main(void) {
    int n, k;
    double sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    /* First term is 1; every later term k is (2k-1)/(2k). */
    for (k = 1; k <= n; k++) {
        if (k == 1)
            sum += 1.0;
        else
            sum += (2.0 * k - 1) / (2.0 * k);
    }

    printf("Approximate sum: %.2f\n", sum);
    return 0;
}
