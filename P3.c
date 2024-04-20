#include <stdio.h>

int main() 
{
    int rows, cols;

    printf("\tINPUT\n\n"); 
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    
    printf("Enter the elements of the matrix:\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("\n\n\tOUTPUT\n\n");
    printf("The given array is:\n");

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("The elements being summed of the lower triangular matrix are: ");

    int sum = 0;
    
    for (int i = 1; i < rows; i++) 
    {
        for (int j = 0; j < i; j++) 
        {
            printf("%d ", matrix[i][j]);
            sum += matrix[i][j];
        }
    }
    printf("\n");
    
    printf("The Sum of the lower triangular Matrix Elements is: %d\n", sum);
    
    return 0;
}
