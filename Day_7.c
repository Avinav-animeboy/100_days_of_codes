#include <stdio.h>

int main() {
/*Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/

    int year;

    // Input
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check leap year conditions
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }

/*Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

    char ch;

    // Input
    printf("Enter a character: ");
    scanf(" %c", &ch);  // Note: space before %c to consume any leftover whitespace

    // Check if it's a letter
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } else {
        printf("Not an alphabet character\n");
    }

    return 0;
}