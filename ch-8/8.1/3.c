#include <stdio.h>

main()
{
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    int a1[size], a2[size], a3[size];

    printf("Enter array A's elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("enter array element : ", i);
        scanf("%d", &a1[i]);
    }

    printf("Enter array B's elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("enter array element : ", i);
        scanf("%d", &a2[i]);
    }
    for (int i = 0; i < size; i++)
    {
        a3[i] = a1[i] + a2[i];
    }

    printf("Array C is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d", a3[i]);
        printf(",");
    }
    printf("\n");
}