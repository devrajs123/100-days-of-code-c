/*
 * Q24: Write a program to calculate electricity bill based on units consumed
 *      with these rates:
 *      First 100 units at ₹5/unit
 *      Next 100 units at ₹7/unit
 *      Next 100 units at ₹10/unit
 *      Above at ₹12/unit
 *
 * Sample Test Cases:
 * Input 1: 50         Output 1: Bill: ₹250
 * Input 2: 150        Output 2: Bill: ₹850
 * Input 3: 250        Output 3: Bill: ₹1700
 *
 * Note: this file is UTF-8. If the ₹ symbol shows as garbage in the Windows
 * console, run `chcp 65001` before executing the program.
 */

#include <stdio.h>

int main(void) {
    int units, bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100)
        bill = units * 5;
    else if (units <= 200)
        bill = 100 * 5 + (units - 100) * 7;
    else if (units <= 300)
        bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
    else
        bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;

    printf("Bill: ₹%d\n", bill);
    return 0;
}
