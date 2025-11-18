/*Q140: Define a struct with enum Gender and print person's gender.

Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    enum Gender gender;
};

int main() {
    char input[50];
    char genderStr[20];
    struct Person p;

    // Read input like: Gender=MALE
    fgets(input, sizeof(input), stdin);

    // Extract the part after '='
    sscanf(input, "Gender=%s", genderStr);

    // Convert gender string to enum value
    if (strcmp(genderStr, "MALE") == 0) {
        p.gender = MALE;
    } else if (strcmp(genderStr, "FEMALE") == 0) {
        p.gender = FEMALE;
    } else {
        p.gender = OTHER;
    }

    // Print gender in proper case
    if (p.gender == MALE)
        printf("Male\n");
    else if (p.gender == FEMALE)
        printf("Female\n");
    else
        printf("Other\n");

    return 0;
}

