#include <stdio.h>
#include <string.h>
void main()
{
    char str[20];
    char rev[20];
    int len;
    printf("Enter the String :\n");
    scanf("%s", str);
    len = strlen(str);
    int i = 0;
    while (str[i] != '\0')
    {
        rev[i] = str[len - 1];
        i++;
        len--;
    }

    if(strcmp(str, rev) == 0)
    {
        printf("The string is Palindrome");
    }
    else
    {
        printf("The String is not Palindrome");
    }   
}