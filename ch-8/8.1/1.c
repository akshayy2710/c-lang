
#include <stdio.h>

main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("enter element : ", i);
        scanf("%d", &array[i]);
    }
    printf("Length of an Array : %d\n", size);
}