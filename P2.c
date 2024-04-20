#include <stdio.h>

void sep(int arr[], int size, int eArr[], int *eSize, int oArr[], int *oSize) 
{
    *eSize = 0;
    *oSize = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0) 
        { 
            eArr[*eSize] = arr[i]; 
            (*eSize)++;
        } 
        else 
        { 
            oArr[*oSize] = arr[i]; 
            (*oSize)++;
        }
    }
}

int main() 
{
    int n;
    
    printf("\tINPUT\n\n");
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    int eArr[n], oArr[n];
    int eSize, oSize;

    sep(arr, n, eArr, &eSize, oArr, &oSize);

    printf("\n\n\tOUTPUT\n\n");
    printf("The Even elements are: ");
    for (int i = 0; i < eSize; i++) 
    {
        printf("%d ", eArr[i]);
    }
    printf("\n");

    printf("The Odd elements are: ");
    for (int i = 0; i < oSize; i++) 
    {
        printf("%d ", oArr[i]);
    }
    printf("\n");

    return 0;
}
