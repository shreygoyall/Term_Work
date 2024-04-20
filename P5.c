#include <stdio.h>

void split(char str[]) 
{
    int i = 0, j = 0;

    while (str[i] != '\0') 
    {
        if (str[i] != ' ') 
        {
            printf("%c", str[i]);
        } 
        else 
        {
            printf("\n");
        }
        i++;
    }
}

int main() 
{
    char str[100];

    printf("\tINPUT\n\n");
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("\n\n\tOUTPUT\n\n");
    printf("Strings or words after split by space are:\n");

    split(str);

    return 0;
}
