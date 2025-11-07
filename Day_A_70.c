/*Q120: Write a program to take a string input. Change it to sentence case.

Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include <stdio.h>

int main() {
    char str[200];
    int i;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);  // safe input (replaces gets)

    // Capitalize first letter if it's lowercase
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;

    // Go through each character
    for (i = 1; str[i] != '\0'; i++) {
        // If previous character was space, capitalize this one
        if (str[i - 1] == ' ' && (str[i] >= 'a' && str[i] <= 'z'))
            str[i] = str[i] - 32;
        // Otherwise, make sure letters stay lowercase
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }

    printf("Sentence case: %s", str);
    return 0;
}
