#include <stdio.h>

int main() {
/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.


Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

    int length, breadth;
    
    // Read input
    scanf("%d %d", &length, &breadth);
    
    // Calculate area and perimeter
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    
    // Print results
    printf("Area=%d, Perimeter=%d\n", area, perimeter);


/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.


Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
    
    float radius;
    float Area;
    float circumference;

    // Ask user for radius
    scanf("%f", &radius);

    // Use 3.14 for PI (simple approximation)
    Area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    // Print results
    printf("Area=%.2f, Circumference=%.2f\n", Area, circumference);

    return 0;
}