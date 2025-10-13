#include<stdio.h>
int main(){

/*Q91: Remove all vowels from a string.

Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // simple input (for beginners)

    printf("String after removing vowels: ");

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' &&
            str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U') {
            printf("%c", str[i]);
        }
    }
    printf("\n");

/*Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

    char Str[100];
    int k, j, found = 0;

    printf("Enter a string: ");
    fgets(Str, sizeof(Str), stdin);  // safe input, includes '\n' at end

    // Loop through each character
    for (k = 0; Str[k] != '\0'; k++) {
        // Skip newline if present
        if (Str[k] == '\n')
            continue;

        for (j = k + 1; Str[j] != '\0'; j++) {
            if (Str[j] == '\n')
                continue;

            if (Str[k] == Str[j]) {
                printf("First repeating lowercase alphabet: %c\n", Str[k]);
                found = 1;
                break;
            }
        }
        if (found)
            break;
    }

    if (!found)
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
