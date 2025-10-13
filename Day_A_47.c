#include <stdio.h>

int main() {
/*Q93: Check if two strings are anagrams of each other.

Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

    char str1[100], str2[100];
    int count1[26] = {0}, count2[26] = {0};
    int i, isAnagram = 1;

    printf("Enter first string: ");
    fgets(str1, 100, stdin);

    printf("Enter second string: ");
    fgets(str2, 100, stdin);

    // Count frequency of each lowercase letter in first string
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z')
            count1[str1[i] - 'a']++;
    }

    // Count frequency of each lowercase letter in second string
    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] >= 'a' && str2[i] <= 'z')
            count2[str2[i] - 'a']++;
    }

    // Compare both frequency arrays
    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");

/*Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

    char Str[200], longest[50], word[50];
    int x = 0, j, maxLen = 0, len;

    printf("Enter a sentence: ");
    fgets(Str, 200, stdin);

    while (Str[x] != '\0' && Str[x] != '\n') {
        j = 0;

        while (Str[x] != ' ' && Str[x] != '\0' && Str[x] != '\n')
            word[j++] = Str[x++];
        word[j] = '\0';

        if (j > maxLen) {
            maxLen = j;
            int k;
            for (k = 0; k <= j; k++)
                longest[k] = word[k];
        }

        if (Str[x] == ' ') x++;
    }

    printf("Longest word: %s\n", longest);
    return 0;
}