/*Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int vowels = 0, consonants = 0;

    // Open file for reading
    file = fopen("text.txt", "r");

    if (file == NULL) {
        printf("Error: text.txt not found!\n");
        return 1;
    }

    // Read each character
    while ((ch = fgetc(file)) != EOF) {
        // Check if character is alphabet
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // Convert uppercase to lowercase for simplicity
            if (ch >= 'A' && ch <= 'Z') {
                ch = ch + 32;
            }

            // Check if vowel or consonant
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(file);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
