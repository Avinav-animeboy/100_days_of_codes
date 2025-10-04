#include <stdio.h>

int main() {
/*Q87: Count spaces, digits, and special characters in a string.

Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/

    char str[100];
    int i = 0, spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safe input

    // loop through each character
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            spaces++;  // count spaces
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;  // count digits
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            // do nothing for letters
        }
        else if (str[i] != '\n') {
            special++;  // count special characters (exclude newline)
        }
        i++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

/*Q88: Replace spaces with hyphens in a string.

Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/

    char Str[100];
    int j= 0;

    printf("Enter a string: ");
    fgets(Str, sizeof(Str), stdin);  // safe input (reads spaces too)

    // loop through each character
    while (Str[j] != '\0') {
        if (Str[j] == ' ') {
            Str[j] = '-';  // replace space with hyphen
        }
        j++;
    }

    printf("Modified string: %s\n", Str);

    return 0;
}
