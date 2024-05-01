#include <stdio.h>

void squareElements(int *arr, int size) 
{
    int i;
    for (i = 0; i < size; i++) {
        *(arr + i) *= *(arr + i);
    }
}

    int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr;
    
    printf(" This Original Array: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    
    squareElements(arr, size);
    
    printf(" This Squared Array: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    
}
