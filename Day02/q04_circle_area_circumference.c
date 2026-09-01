/*
 * Q4: Write a program to calculate the area and circumference of a circle
 *     given its radius.
 *
 * Sample Test Cases:
 * Input 1: 7          Output 1: Area=153.94, Circumference=43.96
 * Input 2: 3          Output 2: Area=28.27, Circumference=18.85
 *
 * Note: with an accurate value of PI the first case gives a circumference of
 * 43.98, not the 43.96 shown on the site (43.96 comes from PI = 3.14, which
 * would in turn give Area=153.86 rather than the 153.94 they show). The
 * second sample matches accurate PI exactly, so this program uses that.
 */

#include <stdio.h>

#define PI 3.14159265358979323846

int main(void) {
    double radius;

    printf("Enter radius: ");
    scanf("%lf", &radius);

    printf("Area=%.2f, Circumference=%.2f\n", PI * radius * radius, 2 * PI * radius);
    return 0;
}
