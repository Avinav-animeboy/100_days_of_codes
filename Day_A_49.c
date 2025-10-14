#include <stdio.h>

int main() {
/*Q97: Print the initials of a name.

Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
    char name[100];
    int I;

    printf("Enter your full name: ");
    fgets(name, 100, stdin);   // Read full name including spaces

    // Print the first letter of the name
    if (name[0] != ' ') {
        printf("%c.", name[0]);
    }

    // Go through each character of the name
    for (I = 0; name[I] != '\0'; I++) {
        // If we find a space, the next character is a new word
        if (name[I] == ' ') {
            // Check that the next character is not space or end of line
            if (name[I + 1] != ' ' && name[I + 1] != '\0' && name[I + 1] != '\n') {
                printf("%c.", name[I + 1]);   // Print that next character with a dot
            }
        }
    }
    printf("\n");

/*Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

    char Name[100];
    int i, lastSpace = -1, len = 0;

    printf("Enter your full name: ");
    fgets(Name, 100, stdin);   // read the full line

    // remove newline character if present
    for (i = 0; Name[i] != '\0'; i++) {
        if (Name[i] == '\n') {
            Name[i] = '\0';
            break;
        }
    }

    // compute length (len) after removing newline
    for (len = 0; Name[len] != '\0'; len++);

    // trim trailing spaces (if user typed a space before Enter)
    while (len > 0 && Name[len - 1] == ' ') {
        Name[len - 1] = '\0';
        len--;
    }

    // Find position of the last space (before surname)
    lastSpace = -1;
    for (i = 0; Name[i] != '\0'; i++) {
        if (Name[i] == ' ') {
            lastSpace = i;
        }
    }

    // Print initials (letters before last space)
    if (Name[0] != ' ') {
        printf("%c.", Name[0]);  // First initial
    }

    for (i = 0; Name[i] != '\0'; i++) {
        if (Name[i] == ' ' && i != lastSpace) {
            if (Name[i + 1] != ' ' && Name[i + 1] != '\0' && Name[i + 1] != '\n') {
                printf("%c.", Name[i + 1]);   // Print middle name initials
            }
        }
    }

    // Print the surname (the part after the last space)
    if (lastSpace != -1) {
        printf(" ");
        for (i = lastSpace + 1; Name[i] != '\0'; i++) {
            printf("%c", Name[i]);
        }
    }
printf("\n");
    return 0;
}
