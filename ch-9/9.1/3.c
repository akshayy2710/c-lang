#include <stdio.h>

int main() {
    char input[100];
    printf("Enter any string: ");
    scanf("%[^\n]", input);


    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            input[i] = input[i] + 32; 
        } else if (input[i] >= 'a' && input[i] <= 'z') {
            input[i] = input[i] - 32; 
        }
    }

    printf("Toggle case string: %s\n", input);
    return 0;
}