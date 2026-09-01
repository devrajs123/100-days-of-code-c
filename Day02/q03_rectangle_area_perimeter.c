/*
 * Q3: Write a program to calculate the area and perimeter of a rectangle
 *     given its length and breadth.
 *
 * Sample Test Cases:
 * Input 1: 5 10       Output 1: Area=50, Perimeter=30
 * Input 2: 3 7        Output 2: Area=21, Perimeter=20
 */

#include <stdio.h>

int main(void) {
    double length, breadth;

    printf("Enter length and breadth: ");
    scanf("%lf %lf", &length, &breadth);

    printf("Area=%g, Perimeter=%g\n", length * breadth, 2 * (length + breadth));
    return 0;
}
