#include <stdio.h>

int main()
{
    int size;
    int *ptr;

    printf("Enter array size : ");
    scanf("%d", &size);

    int a[size];

    printf("\n--Enter elements of the array--\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter elements : ");
        scanf("%d", &a[i]);
    }

    ptr = a;
    for (int i = 0; i < size; i++)
    {
        *ptr = (*ptr) * (*ptr);
        ptr++;
    }

    printf("Square of each element : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    return 0;
}