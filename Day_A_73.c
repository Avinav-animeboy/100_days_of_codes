/*Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/


#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int chars = 0, words = 0, lines = 0;
    int insideWord = 0;
    char filename[50];

    // Ask user for file name
    printf("Enter file name: ");
    scanf("%s", filename);

    // Open file for reading
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: Cannot open file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;  // count all characters

        // Count lines
        if (ch == '\n')
            lines++;

        // Handle word counting
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            // space, newline, or tab — we are outside a word
            insideWord = 0;
        } else if (insideWord == 0) {
            // first letter of a new word
            insideWord = 1;
            words++;
        }
    }

    fclose(fp);

    // If file has text but doesn’t end with newline, add 1 line
    if (chars > 0 && ch != '\n')
        lines++;

    printf("\nCharacters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
