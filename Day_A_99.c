/*Q149: Use malloc() to allocate structure memory dynamically and print details.

Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/
#include <stdio.h>
#include <stdlib.h>   // for malloc()

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student *s;

    // Allocate memory dynamically
    s = (struct Student*) malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Taking input
    scanf("%s %d %f", s->name, &s->roll, &s->marks);

    // Printing output
    printf("Name: %s | Roll: %d | Marks: %.2f\n",
    s->name, s->roll, s->marks);

    // Free the allocated memory
    free(s);

    return 0;
}
