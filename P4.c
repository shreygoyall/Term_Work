#include <stdio.h>

void MaxEle(int rows, int cols, int matrix[rows][cols]) 
{
    int i, j, max;

    printf("\n\n\tOUTPUT\n\n");
    printf("The given array is:\n");
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("The maximum element of each row of matrix are: ");
    for (i = 0; i < rows; i++) 
    {
        max = matrix[i][0]; 
        for (j = 1; j < cols; j++) 
        {
            if (matrix[i][j] > max) 
            {
                max = matrix[i][j]; 
            }
        }
        printf("%d ", max);
    }
}

int main() 
{
    int rows, cols;
    
    printf("\tINPUT\n\n");
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    MaxEle(rows, cols, matrix);

    return 0;
}
