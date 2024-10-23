#include <stdio.h>
void reverce(char *str)
{
    char *start = str ;
    char *end = str;
    char temp ;
  
    while (*str != '\0')
    {
        end++;
    }
    end--;
    while (start<end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    
 
}
int main()
{
    char arr[100];
    int iret = 0;

    printf("enter string:");
    scanf("%[^'\n']s",arr);

  reverce(arr);

    printf(" reverse string: %s",arr);

    return 0;
}
