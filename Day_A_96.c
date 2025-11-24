/*Q146: Create Employee structure with nested Date structure for joining date and print details.

Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date join;   // Nested structure
};

int main() {
    struct Employee e;

    // Input
    scanf("%s %d", e.name, &e.id);
    scanf("%d %d %d", &e.join.day, &e.join.month, &e.join.year);

    // Output
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
    e.name, e.id, e.join.day, e.join.month, e.join.year);

    return 0;
}
