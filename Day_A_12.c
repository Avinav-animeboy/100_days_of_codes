#include <stdio.h>

int main() {
/*Q23: Write a program to calculate a library fine based on late days.

Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/

    int days_late;
    scanf("%d", &days_late);

    if (days_late <= 5)
        printf("Fine ₹%d\n", days_late * 1);
    else if (days_late <= 10)
        printf("Fine ₹%d\n", days_late * 2);
    else if (days_late <= 30)
        printf("Fine ₹%d\n", days_late * 5);
    else
        printf("Membership Cancelled\n");
/*Q24: Write a program to calculate an electricity bill based on units consumed.

Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹950

Input 3:
250
Output 3:
Bill: ₹2200

*/

    int units;
    float bill = 0;

    scanf("%d", &units);

    if (units <= 50) {
        bill = units * 5;
    } else if (units <= 150) {
        bill = 50 * 5 + (units - 50) * 7;
    } else if (units <= 250) {
        bill = 50 * 5 + 100 * 7 + (units - 150) * 12.5;
    } else {
        // Optional: Handle units above 250 if required
        bill = 50 * 5 + 100 * 7 + 100 * 12.5 + (units - 250) * 15; // Example extra slab
    }

    printf("Bill: ₹%.0f\n", bill);  // .0f to round and remove decimal part
    return 0;
}