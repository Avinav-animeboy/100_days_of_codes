#include <stdio.h>

int main() {
/*Q71: Read and print a matrix.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
    int rows, cols, i, j;

    printf("Input matrix size: ");
    scanf("%d %d", &rows, &cols);

    int matrix[100][100]; // maximum size, safe for beginners

    // Step 2: Input elements
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Step 3: Print elements
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n"); // new line after each row
    }

/*Q72: Find the sum of all elements in a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

    int Rows, Cols, I, J, sum = 0;

    printf("Input matrix size: ");
    scanf("%d %d", &Rows, &Cols);

    int Matrix[100][100]; // Safe max size for beginners

    // Step 2: Input elements and add to sum
    for(I = 0; I < Rows; I++) {
        for(J = 0; J < Cols; J++) {
            scanf("%d", &Matrix[I][J]);
            sum += Matrix[I][J]; // add each element to sum
        }
    }

    printf("%d\n", sum);

    return 0;
}
