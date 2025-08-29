#include <stdio.h>
#include <math.h>
int main() {
/*Q17: Write a program to find the roots of a quadratic equation and categorize them.

Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

    float a, b, c;     // Coefficients of the quadratic equation
    float d;           // Discriminant
    float r1, r2;      // Roots of the equation

    // Read input values for a, b, and c
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    // Check the nature of the roots using the discriminant
    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different: %.0f, %.0f\n", r1, r2);
    } else if (d == 0) {
        r1 = -b / (2 * a);
        printf("Roots are real and same: %.0f\n", r1);
    } else {
        printf("Roots are complex\n");
    }
/*Q18: Write a program to assign grades based on a percentage input.

Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/

    int percentage;

    // Read percentage
    scanf("%d", &percentage);

    // Check grade based on percentage
    if (percentage >= 90)
        printf("Grade A\n");
    else if (percentage >= 80)
        printf("Grade B\n");
    else if (percentage >= 70)
        printf("Grade C\n");
    else if (percentage >= 60)
        printf("Grade D\n");
    else
        printf("Grade F\n");

    return 0;
}