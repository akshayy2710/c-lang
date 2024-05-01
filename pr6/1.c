#include <stdio.h>
main()
{

    char name[100];
    printf("Enter any name: ");
    scanf("%s", name);

    int len = 0;
    while (name[len] != '\0')
    {
        len++;
    }

    int palindrome = 1;
    for (int i = 0; i < len / 2; i++)
    {
        if (name[i] != name[len - i - 1])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
    {
        printf("Given name is a Palindrome.\n");
    }
    else
    {
        printf("Given name is not a Palindrome.\n");
    }
}