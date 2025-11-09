/*Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>

int main() {
    FILE *input, *output;
    char ch;

    // Open input file for reading
    input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("Error: input.txt not found!\n");
        return 1;
    }

    // Open output file for writing
    output = fopen("output.txt", "w");
    if (output == NULL) {
        printf("Error: could not create output.txt!\n");
        fclose(input);
        return 1;
    }

    // Read each character and convert to uppercase
    while ((ch = fgetc(input)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;  // convert lowercase to uppercase
        }
        fputc(ch, output);
    }

    printf("File converted successfully! Check output.txt\n");

    fclose(input);
    fclose(output);
    return 0;
}
