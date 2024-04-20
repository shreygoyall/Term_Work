#include <stdio.h>

void Uni_Ele(int arr[], int size) 
{
    printf("\n\n\tOUTPUT\n\n");
    printf("The unique elements found in the array are: ");

    for (int i = 0; i < size; i++)
    {
        int j;
        
        for (j = 0; j < size; j++) 
        {
            if (i != j && arr[i] == arr[j]) 
                break; 
        }
        
        if (j == size)
            printf("%d ", arr[i]); 
    }
    printf("\n");
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

    Uni_Ele(arr, n);

    return 0;
}
