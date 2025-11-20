/*Q142: Store details of 5 students in an array of structures and print all.

Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s[5];
    int i;

    printf("Enter details of 5 students:\n");

    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    printf("\n--------------------------------------------\n");
    printf(" Name\t\tRoll\tMarks\n");
    printf("--------------------------------------------\n");

    for (i = 0; i < 5; i++) {
        printf(" %s\t\t%d\t%d\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
