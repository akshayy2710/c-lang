#include <stdio.h>
main()
{
    int size, i;
    printf("enter array size : ");
    scanf("%d", &size);

    int a[size];

    for (i = 0; i < size; i++)
    {
        printf("enter element :", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < size; i++)
    {
        if (a[i] < 0)
        {
            printf("%d,", a[i]);
        }
    }
}