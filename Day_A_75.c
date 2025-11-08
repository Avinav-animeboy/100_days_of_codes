/*Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>

int main() {
    FILE *file;
    char filename[50], text[200];

    // Ask user for file name
    printf("Enter filename: ");
    scanf("%s", filename);

    // Open file in append mode
    file = fopen(filename, "a");

    if (file == NULL) {
        printf("Error! Could not open file.\n");
        return 1;
    }

    // Clear input buffer and take new line of text
    getchar();  // to remove leftover newline from scanf
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append text to file
    fputs(text, file);

    printf("File updated successfully with appended text.\n");

    fclose(file);
    return 0;
}
