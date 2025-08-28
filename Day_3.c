#include <stdio.h>

int main() {
/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.


Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

    float celsius, fahrenheit;

    // Read Celsius input
    scanf("%f", &celsius);

    // Convert to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Print result
    printf("Fahrenheit=%.0f\n", fahrenheit);

/*Q6: Write a program to swap two numbers using a third variable.


Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/

    int a, b, temp;

    // Read two integers from the user
    scanf("%d %d", &a, &b);

    // Swap using a third variable
    temp = a;
    a = b;
    b = temp;

    // Print the result
    printf("After swap: %d %d\n", a, b);

    return 0;
}
