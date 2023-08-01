#include <stdio.h>
#include <string.h>
// Good
int main() {
    char res[100][100]; // Array to store strings with the maximum length
    int l = 0; // Number of strings stored in the 'res' array
    int max = 0; // Maximum length found

    char n[100]; // Variable to read each string from input

    // Read strings from input and store them in the 'res' array
    while (scanf("%s", &n) != -1) { // Read strings from input until the end of file (-1)
        if (strlen(n) > max) { // If the length of the current string is greater than the maximum length found so far
            strcpy(res[l], n); // Copy the current string to the 'res' array
            max = strlen(n); // Update the maximum length
            ++l; // Increase the count of stored strings in the 'res' array
        }
    }

    // Print strings with the maximum length
    for (int i = 0; i < l; ++i) {
        if (strlen(res[i]) == max) { // If the length of the string is equal to the maximum length
            printf("%s - %d", res[i], strlen(res[i])); // Print the string and its length
        }
    }

    return 0;
}

