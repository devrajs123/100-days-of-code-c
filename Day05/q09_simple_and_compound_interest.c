/*
 * Q9: Write a program to calculate simple and compound interest for given
 *     principal, rate, and time.
 *
 * Sample Test Cases:
 * Input 1: 1000 5 2   Output 1: Simple Interest=100, Compound Interest=102.5
 * Input 2: 5000 7 3   Output 2: Simple Interest=1050, Compound Interest=1125.76
 *
 * Note: the standard formula CI = P*(1 + R/100)^T - P gives 1125.22 for the
 * second case; the sample output on the site (1125.76) does not match it.
 * This program uses the standard formula.
 *
 * Compile: gcc q09_simple_and_compound_interest.c -o q09 -lm
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    double principal, rate, time;

    printf("Enter principal, rate and time: ");
    scanf("%lf %lf %lf", &principal, &rate, &time);

    double simple = (principal * rate * time) / 100.0;
    double compound = principal * pow(1 + rate / 100.0, time) - principal;

    printf("Simple Interest=%g, Compound Interest=%g\n", simple, compound);
    return 0;
}
