#include <stdio.h>
#include <conio.h>
main()
{
    int a, b, c, d;
    clrscr();

    printf("Enter number of a: ");
    scanf("%d", &a);
    printf("Enter number of b: ");
    scanf("%d", &b);
    printf("Enter number of c: ");
    scanf("%d", &c);
    printf("Enter number of d: ");
    scanf("%d", &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("A is max");
            }
            else
            {
                printf("d is max");
            }
        }
        else
        {
            if (c > d)
            {
                printf("c is max");
            }
            else
            {
                printf("d is max");
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("b is max");
            }
            else
            {
                printf("d is max");
            }
        }
        else
        {
            if (c > d)
            {
                printf("c is max");
            }
            else
            {
                printf("d is max");
            }
        }
    }

    getch();
}