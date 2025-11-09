/*Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include <stdio.h>

int main() {
    FILE *file;
    int num, sum = 0, count = 0;
    float avg;

    // Open file in read mode
    file = fopen("numbers.txt", "r");

    if (file == NULL) {
        printf("Error: numbers.txt not found!\n");
        return 1;
    }

    // Read numbers until end of file
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(file);

    // Calculate average
    if (count > 0)
        avg = (float)sum / count;
    else
        avg = 0;

    // Print results
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
