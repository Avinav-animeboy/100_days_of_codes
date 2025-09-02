#include <stdio.h>

int main() {
/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

    int num1, num2, result;
    char op; //operator(op)

    // Input format: number1 number2 operator
    scanf("%d %d %c", &num1, &num2, &op);

    switch(op) {
        case '+':
            result = num1 + num2;
            printf("%d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d\n", result);
            break;
        case '/':
            if (num2 == 0)
                printf("Error: Division by zero\n");
            else
                printf("%d\n", num1 / num2);
            break;
        case '%':
            if (num2 == 0)
                printf("Error: Modulo by zero\n");
            else
                printf("%d\n", num1 % num2);
            break;
        default:
            printf("Invalid operator\n");
    }
/*Q26: Write a program to print numbers from 1 to n.

Sample Test Cases:
Input 1:
5
Output 1:
1 2 3 4 5

Input 2:
3
Output 2:
1 2 3

*/

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d", i);
        if (i < n)
            printf(" ");
    }

    printf("\n");
    return 0;
}