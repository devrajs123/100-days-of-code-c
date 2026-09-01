/*
 * Q17: Write a program to find the roots of a quadratic equation and
 *      categorize them.
 *
 * Sample Test Cases:
 * Input 1: 1 -3 2     Output 1: Roots are real and different: 2, 1
 * Input 2: 1 -2 1     Output 2: Roots are real and same: 1
 * Input 3: 1 2 5      Output 3: Roots are complex
 *
 * Compile: gcc q17_quadratic_roots.c -o q17 -lm
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: %g, %g\n", root1, root2);
    } else if (discriminant == 0) {
        printf("Roots are real and same: %g\n", -b / (2 * a));
    } else {
        printf("Roots are complex\n");
    }

    return 0;
}
