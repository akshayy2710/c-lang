#include <stdio.h>

main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("enter array element :  = ", i);
        scanf("%d", &array[i]);
    }

    printf("The squares are: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d", array[i] * array[i]);
        printf(",");
    }
    printf("\n");
}