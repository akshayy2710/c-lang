#include <stdio.h>
main()
{
    int r, c;
    printf("enter row : ");
    scanf("%d", &r);
    printf("enter column : ");
    scanf("%d", &c);

    int a[r][c];
    int i, j;
    float avg, sum = 0;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("eneter element :");
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
        printf("\n");
    }
    int element = r * c;

    avg = sum / element;
    printf("Average of an Array: %.2f\n", avg);
}