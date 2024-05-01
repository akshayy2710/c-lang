#include <stdio.h>
main()
{
    int fy, sy;
    printf("Enter the first number: ");
    scanf("%d", &fy);

    printf("Enter the second number: ");
    scanf("%d", &sy);
    if (fy > sy)
    {
        int n = fy;
        fy = sy;
        sy = n;
    }

    int ly[100];
    int lc = 0;

    for (int year = fy; year <= sy; year++)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            ly[lc++] = year;
        }
    }

    printf("The array is: ");
    for (int i = 0; i < lc; i++)
    {
        printf("%d", ly[i]);
        printf(",");
    }
    printf("\n");
}