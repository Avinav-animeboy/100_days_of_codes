#include <stdio.h>

int main() {
/*Q81: Count characters in a string without using built-in length functions.

Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:

Output 2:
1

*/

    char str[100];  // to store the string
    int count = 0;  // to count characters

    printf("Enter a string: ");
    gets(str);  // read the string (includes spaces)

    // count characters one by one
    while (str[count] != '\0') {
        count++;
    }

    // if nothing is entered, count as 1
    if (count == 0) {
        count = 1;
    }

    printf("Number of characters: %d\n", count);

/*Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/

    char Str[100];  // to store the string
    int i = 0;      // index to go through each character

    printf("Enter a string: ");
    gets(Str);  // read string from user (includes spaces)

    // loop through each character until end of string
    while (Str[i] != '\0') {
        printf("%c\n", Str[i]);  // print character and move to new line
        i++;
    }

    return 0;
}
