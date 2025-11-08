#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char result[100];
    int j = 0;
    printf("Enter String :");
    fgets(str,100,stdin); 
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i]!=' ' && str[i]!='\n')
        {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    printf("%s",result);
    return 0;
}