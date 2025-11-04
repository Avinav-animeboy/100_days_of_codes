/*Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    int i;
    int count1[26] = {0}, count2[26] = {0};

    // take two strings
    printf("Enter first string: ");
    scanf("%s", s);

    printf("Enter second string: ");
    scanf("%s", t);

    // if lengths not equal, can't be anagram
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    // count how many times each letter appears in s and t
    for (i = 0; s[i] != '\0'; i++) {
        count1[s[i] - 'a']++;
        count2[t[i] - 'a']++;
    }

    // now check if counts are same for all letters
    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
