/*Q147: Store employee data in a binary file using fwrite() and read using fread().

Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e1, e2;
    FILE *fp;

    // --- Writing to binary file ---
    fp = fopen("employee.bin", "wb");  // open file for writing in binary mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter name: ");
    scanf("%s", e1.name);

    printf("Enter ID: ");
    scanf("%d", &e1.id);

    printf("Enter salary: ");
    scanf("%f", &e1.salary);

    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee details stored in file.\n\n");

    fp = fopen("employee.bin", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("Reading data from file...\n");
    printf("Name: %s\n", e2.name);
    printf("ID: %d\n", e2.id);
    printf("Salary: %.2f\n", e2.salary);

    return 0;
}
