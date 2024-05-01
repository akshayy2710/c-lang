#include <stdio.h>

int main() {
    char input[100];
    printf("Enter any string: ");
    scanf("%[^\n]", input);

 
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] >= '97' && input[i] <= '122') {
            input[i] = input[i] - 32;
        }
    }

    printf("Uppercase string: %s\n", input);
    return 0;
}