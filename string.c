#include <stdio.h>
#include <string.h>
#include <ctype.h>

void concatenateStrings(char s1[], char s2[]) {
    strcat(s1, s2);
    printf("Concatenated String: %s\n", s1);
}

void reverseString(char str[]) {
    int i, len = strlen(str);
    printf("Reversed String: ");
    for (i = len - 1; i >= 0; i--)
        printf("%c", str[i]);
    printf("\n");
}

void deleteVowels(char str[]) {
    char res[100];
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!(strchr("AEIOUaeiou", str[i])))
            res[j++] = str[i];
    }
    res[j] = '\0';
    printf("String without vowels: %s\n", res);
}

void sortStrings(char arr[][100], int n) {
    char temp[100];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
    printf("Strings in alphabetical order:\n");
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
}

void convertToLowercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++)
        str[i] = tolower(str[i]);
    printf("Lowercase String: %s\n", str);
}

int main() {
    char s1[100] = "Hello";
    char s2[100] = "World";
    concatenateStrings(s1, s2);

    char s3[100] = "Programming";
    reverseString(s3);

    char s4[100] = "Education";
    deleteVowels(s4);

    char arr[5][100] = {"Banana", "Apple", "Grapes", "Mango", "Cherry"};
    sortStrings(arr, 5);

    char s5[100] = "UPPERCASE";
    convertToLowercase(s5);

    return 0;
}
