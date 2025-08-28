#include <stdio.h>

int main() {
/*Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

    // Declare variables:
    float p, r, t;        // p = principal, r = rate, t = time
    float si, ci;         // si = simple interest, ci = compound interest
    float amount = 1;     // amount = (1 + r/100)^t
    int i;

    // Input: principal, rate, time
    scanf("%f %f %f", &p, &r, &t);

    // Calculate simple interest
    si = (p * r * t) / 100;

    // Calculate compound interest without using math.h
    float base = 1 + r / 100;
    for (i = 0; i < t; i++) {
        amount *= base;  // amount = base^t
    }
    ci = p * amount - p;

    // Output the results
    printf("Simple Interest=%.0f, Compound Interest=%.2f\n", si, ci);

/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.


Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

    int totalSeconds, hours, minutes, seconds;

    // Input total time in seconds
    scanf("%d", &totalSeconds);

    // Calculate hours, minutes and seconds
    hours = totalSeconds / 3600;
    totalSeconds = totalSeconds % 3600;

    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;

    // Output in h:m:s format
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
