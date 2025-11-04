/*Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>    // for string length function

int main() {
    char s[100];       // to store the string
    int i, j, n, max = 0;   // variables for loop and max length

    printf("Enter a string: ");  // ask user for input
    scanf("%s", s);              // take string input

    n = strlen(s);   // find length of string

    // outer loop - start from each character
    for(i = 0; i < n; i++) {

        int used[256] = {0};   // mark all characters unused
        int count = 0;          // count for current substring

        // inner loop - move forward and check repeating
        for(j = i; j < n; j++) {

            if(used[s[j]] == 1) // if character repeated
                break;           // stop counting further

            used[s[j]] = 1;     // mark character as used
            count++;             // increase count
        }

        if(count > max)          // check if this is biggest length
            max = count;         // store as max
    }

    printf("Longest substring length = %d\n", max); // final output

    return 0;
}
