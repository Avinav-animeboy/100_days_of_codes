#include <stdio.h>
#include <string.h>

int main() {
/*Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

    char date[20];
    int day, month, year;
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    printf("Enter date (dd/mm/yyyy): ");
    fgets(date, 20, stdin);

    // Extract day, month, year from the string
    sscanf(date, "%d/%d/%d", &day, &month, &year);

    // Check for valid month and print formatted date
    if(month >= 1 && month <= 12) {
        printf("%02d-%s-%d\n", day, months[month - 1], year);
    } else {
        printf("Invalid month!\n");
    }

/*Q100: Print all sub-strings of a string.

Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/

    char str[100];
    int i, j, k, len;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    // Remove newline if present
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    len = strlen(str);

    for(i = 0; i < len; i++) {           // starting index
        for(j = i; j < len; j++) {       // ending index
            for(k = i; k <= j; k++) {    // print characters from i to j
                printf("%c", str[k]);
            }
            if(!(i == len-1 && j == len-1))  // don't print comma after last substring
                printf(",");
        }
    }

    printf("\n");
    return 0;
}
