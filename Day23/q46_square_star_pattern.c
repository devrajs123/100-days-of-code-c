/*
 * Q46: Write a program to print the following pattern:
 *      *****
 *      *****
 *      *****
 *      *****
 *      *****
 *
 * Sample Test Cases:
 * Input 1: (no input) Output 1: *****
 *                               *****
 *                               *****
 *                               *****
 *                               *****
 */

#include <stdio.h>

#define SIZE 5

int main(void) {
    int row, col;

    for (row = 1; row <= SIZE; row++) {
        for (col = 1; col <= SIZE; col++)
            printf("*");
        printf("\n");
    }

    return 0;
}
