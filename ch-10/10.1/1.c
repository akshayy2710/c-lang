#include <stdio.h>

int cube(int num)
{
    return num * num * num;
}

int main()
{
    int number;

    printf("Enter any number: ");
    scanf("%d", &number);

    int result = cube(number);

    printf("Cube is: %d\n", result);

    return 0;
}