#include <stdio.h>
#include <string.h>

int Alpha(char c) 
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

void rem(char *str) 
{
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++)
     {
        if (Alpha(str[i])) 
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() 
{
    char str[100];

    printf("\tINPUT\n\n");
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n') 
    {
        str[strlen(str) - 1] = '\0';
    }

    rem(str);

    printf("\n\n\tOUTPUT\n\n");
    printf("Output string: %s\n", str);

    return 0;
}
