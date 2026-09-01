/*
 * Q14: Write a program to input a character and check whether it is a vowel or
 *      consonant using if-else.
 *
 * Sample Test Cases:
 * Input 1: a          Output 1: Vowel
 * Input 2: b          Output 2: Consonant
 */

#include <stdio.h>

int main(void) {
    char ch, lower;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    /* Work on the lowercase form so both cases are handled the same way. */
    lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

    if (lower < 'a' || lower > 'z')
        printf("Not an alphabet\n");
    else if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
        printf("Vowel\n");
    else
        printf("Consonant\n");

    return 0;
}
