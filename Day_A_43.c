#include <stdio.h>

int main() {
/*Q85: Reverse a string.

Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

    char str[100];
    int i, len = 0;
    char temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer input (includes spaces)

    // find the length of the string manually
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    // reverse the string
    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    printf("Reversed string: %s\n", str);

/*Q86: Check if a string is a palindrome.

Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

    char Str[100];
    int j, Len = 0, flag = 0;

    printf("Enter a string: ");
    fgets(Str, sizeof(Str), stdin);  // read input safely

    // find the length of the string manually
    while (Str[Len] != '\0' && Str[Len] != '\n') {
        Len++;
    }

    // check palindrome
    for (j = 0; j < Len / 2; j++) {
        if (str[i] != str[Len - j - 1]) {
            flag = 1;  // not palindrome
            break;
        }
    }

    if (flag == 0){
        printf("Palindrome\n");
    }
    else {
        printf("Not palindrome\n");
    }

    return 0;
}