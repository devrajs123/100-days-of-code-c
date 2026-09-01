/*
 * Q22: Write a program to find profit or loss percentage given cost price and
 *      selling price.
 *
 * Sample Test Cases:
 * Input 1: 1000 1200  Output 1: Profit 20%
 * Input 2: 1000 800   Output 2: Loss 20%
 * Input 3: 1000 1000  Output 3: No Profit No Loss
 */

#include <stdio.h>

int main(void) {
    double costPrice, sellingPrice;

    printf("Enter cost price and selling price: ");
    scanf("%lf %lf", &costPrice, &sellingPrice);

    if (sellingPrice > costPrice)
        printf("Profit %g%%\n", (sellingPrice - costPrice) * 100.0 / costPrice);
    else if (sellingPrice < costPrice)
        printf("Loss %g%%\n", (costPrice - sellingPrice) * 100.0 / costPrice);
    else
        printf("No Profit No Loss\n");

    return 0;
}
