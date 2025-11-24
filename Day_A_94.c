/*Q144: Write a function that accepts a structure as parameter and prints its members.

Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function that accepts structure and prints it
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student st;

    // Read data
    printf("Enter name: ");
    scanf("%s", st.name);

    printf("Enter roll: ");
    scanf("%d", &st.roll);

    printf("Enter marks: ");
    scanf("%d", &st.marks);

    // Call function
    printStudent(st);

    return 0;
}
