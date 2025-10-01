
#include <stdio.h>

int main() {
/*Q83: Count vowels and consonants in a string.

Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/

    char str[100];
    int i = 0;
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string (includes spaces)

    while (str[i] != '\0') {
        char ch = str[i];

        // check if ch is a letter
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            // check if vowel
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
                ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

/*Q84: Convert a lowercase string to uppercase without using built-in functions.

Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
    char Str[100];
    int I = 0;

    printf("Enter a lowercase string: ");
    fgets(Str, sizeof(Str), stdin);  // read string

    while (Str[I] != '\0') {
        // if character is lowercase letter, convert to uppercase
        if (Str[I] >= 'a' && Str[I] <= 'z') {
            Str[I] = Str[I] - 32;  // ASCII difference between lowercase and uppercase
        }
        I++;
    }

    printf("Uppercase string: %s\n", Str);

    return 0;
}
