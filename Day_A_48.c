#include <stdio.h>

int main() {
/*Q95: Check if one string is a rotation of another.

Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

    char str1[100], str2[100];
    int i, j, len = 0, isRotation = 0;

    printf("Enter first string: ");
    fgets(str1, 100, stdin);
    printf("Enter second string: ");
    fgets(str2, 100, stdin);

    for(i = 0; str1[i] != '\0'; i++) {
        if(str1[i] == '\n') str1[i] = '\0';
    }
    for(i = 0; str2[i] != '\0'; i++) {
        if(str2[i] == '\n') str2[i] = '\0';
    }

    // Calculate length
    for(len = 0; str1[len] != '\0'; len++);

    // If lengths differ, not rotation
    for(i = 0; str2[i] != '\0'; i++);
    if(i != len) {
        printf("Not rotation\n");
        return 0;
    }

    // Check all rotations
    for(i = 0; i < len; i++) {
        isRotation = 1;
        for(j = 0; j < len; j++) {
            if(str1[j] != str2[(i + j) % len]) {
                isRotation = 0;
                break;
            }
        }
        if(isRotation) break;
    }

    if(isRotation)
        printf("Rotation\n");
    else
        printf("Not rotation\n");

/*Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

    char Str[200];
    int I,J,start;

    printf("Enter a sentence: ");
    fgets(Str, 200, stdin);

    printf("Reversed sentence: ");

    I = 0;
    while (Str[I] != '\0' && Str[I] != '\n') {
        // Skip spaces
        while (Str[I] == ' ')
            I++;

        start = I;

        // Move to end of the word
        while (Str[I] != ' ' && Str[I] != '\0' && Str[I] != '\n')
            I++;

        // Print the word in reverse
        for (J = I - 1; J >= start; J--)
            printf("%c", Str[J]);

        // Print the space (if not end of sentence)
        if (Str[I] == ' ')
            printf(" ");
    }

    printf("\n");

    return 0;
}
