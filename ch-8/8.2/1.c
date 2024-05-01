#include <stdio.h>
main()
{
    int sizeA, sizeB;

    printf("Enter array A's size : ");
    scanf("%d", &sizeA);
    printf("\nEnter array B's size : ");
    scanf("%d", &sizeB);

    int arrayA[sizeA], arrayB[sizeB];

    printf("Enter array A's elements :\n");
    for (int i = 0; i < sizeA; i++)
    {
        printf("enter any element : ", i);
        scanf("%d", &arrayA[i]);
    }

    printf("Enter array B's elements :\n");
    for (int i = 0; i < sizeB; i++)
    {
        printf("enter any element : ", i);
        scanf("%d", &arrayB[i]);
    }

    int sizeC = sizeA + sizeB;
    int arrayC[sizeC];

    for (int i = 0; i < sizeA; i++)
    {
        arrayC[i] = arrayA[i];
    }

    for (int i = 0; i < sizeB; i++)
    {
        arrayC[sizeA + i] = arrayB[i];
    }

    printf("\nArray C is: ");
    for (int i = 0; i < sizeC; i++)
    {
        printf("%d", arrayC[i]);
        printf(",");
    }
    printf("\n");
}