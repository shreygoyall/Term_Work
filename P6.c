#include <stdio.h>

char High_Freq(char *str) 
{
    int freq[256] = {0}; 
    int i = 0;

    while (str[i] != '\0')
    {
        if(str[i] != ' ' && str[i] != '\n' && str[i] != '\t') 
            freq[(int)str[i]]++;
        
        i++;
    }

    char hChar = '\0';
    int maxFreq = 0;

    for (i = 0; i < 256; i++) 
    {
        if (freq[i] > maxFreq) 
        {
            maxFreq = freq[i];
            hChar = (char)i;
        }
    }

    return hChar;
}

int main() 
{
    char str[100];

    printf("\tINPUT\n\n");
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    char hChar = High_Freq(str);
    
    printf("\n\n\tOUTPUT\n\n");
    if(hChar != '\0')
        printf("Highest frequency character appears in the string is %c.\n", hChar);
    else
        printf("String is empty or contains only space, newline, or tab characters.\n");
    
    return 0;
}
