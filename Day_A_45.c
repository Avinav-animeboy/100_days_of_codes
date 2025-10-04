#include <stdio.h>

int main() {
/*Q89: Count frequency of a given character in a string.

Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

    char str[100], ch;
    int i = 0, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safe input

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);  // read the character

    // loop through each character
    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;  // increase count if match found
        }
        i++;
    }

    printf("Frequency of '%c' = %d\n", ch, count);

/*Q90: Toggle case of each character in a string.

Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/

    char Str[100];
    int j = 0;

    printf("Enter a string: ");
    fgets(Str, sizeof(Str), stdin);  // safe input

    // remove newline character at the end if present
    while (Str[j] != '\0') {
        if (Str[j] == '\n') {
            Str[j] = '\0';
            break;
        }
        j++;
    }

    // toggle case
    j = 0;
    while (Str[j] != '\0') {
        if (Str[j] >= 'a' && Str[j] <= 'z') {
            Str[j] = Str[j] - 32;  // lowercase → uppercase
        }
        else if (Str[j] >= 'A' && Str[j] <= 'Z') {
            Str[j] = Str[j] + 32;  // uppercase → lowercase
        }
        j++;
    }

    printf("Toggled string: %s\n", Str);

    return 0;
}

