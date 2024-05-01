#include <stdio.h>

int main() {
    char input[100];
    printf("Enter any string: ");
    scanf("%[^\n]", input);

    // Convert to lowercase without using string functions
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] >= '65' && input[i] <= '90') {
            input[i] = input[i] + 32;
        }
    }

    printf("Lowercase string: %s\n", input);
    return 0;
}