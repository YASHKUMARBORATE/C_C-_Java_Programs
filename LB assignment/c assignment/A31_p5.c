#include <stdio.h>
void strcap(char *str)
{
    while (*str != '\0')
    {
        if(*str == ' ')
        {
            *str = *str - 32;
        }
    }
    
}
int main()
{ 
    char arr[30];
    printf("enter string:");
    scanf("%[^'\n']s",arr);
    
    strcap(arr);

printf("%s",arr);
   
    return 0;
}