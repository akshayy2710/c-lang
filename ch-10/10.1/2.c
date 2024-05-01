#include <stdio.h>

int Diviaible(int n)
{
    if (n % 3 == 0 && n % 5 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number;

    printf("Enter anynumber: ");
    scanf("%d", &number);

    if (Diviaible(number))
    {
        printf("The given number is divisible by both 3 & 5.\n");
    }
    else
    {
        printf("The given numberber is not divisible by both 3 & 5.\n");
    }

    return 0;
}