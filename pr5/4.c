#include<stdio.h>
main()
{
    int rows, cols;
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter array's elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nArray:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int row_num, col_num;
    printf("\nEnter row number: ");
    scanf("%d", &row_num);
    int row_sum = 0;
    printf("Elements of row %d: ", row_num);
    for (int i = 0; i < cols; i++)
    {
        printf("%d", arr[row_num][i]);
        row_sum += arr[row_num][i];
        if (i < cols - 1)
            printf(", ");
    }
    printf("\nThe sum of row %d: %d\n", row_num, row_sum);

    printf("\nEnter column number: ");
    scanf("%d", &col_num);
    int col_sum = 0;
    printf("Elements of column %d: ", col_num);
    for (int i = 0; i < rows; i++)
    {
        printf("%d", arr[i][col_num]);
        col_sum += arr[i][col_num];
        if (i < rows - 1)
            printf(", ");
    }
    printf("\nThe sum of column %d: %d\n", col_num, col_sum);

}