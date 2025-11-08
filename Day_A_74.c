/*Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main() {
    char source[100], dest[100];
    FILE *src, *dst;
    char ch;

    // Get filenames from user
    printf("Enter source filename: ");
    scanf("%s", source);
    printf("Enter destination filename: ");
    scanf("%s", dest);

    // Open files
    src = fopen(source, "r");
    if (src == NULL) {
        printf("Error: Cannot open source file!\n");
        return 1;
    }

    dst = fopen(dest, "w");
    if (dst == NULL) {
        printf("Error: Cannot create destination file!\n");
        fclose(src);
        return 1;
    }

    // Copy content character by character
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dst);
    }

    printf("File copied successfully to %s\n", dest);

    // Close files
    fclose(src);
    fclose(dst);

    return 0;
}
