#include <stdio.h>
void strtoggle(char *str)
{
    
    while (*str != '\0')
    {
      if ((*str<='A')&&(*str<='Z'))
      {
        *str = *str - 32 ;
      }
      else if ((*str<='a')&&(*str<='z'))
      {
       *str = *str +32 ;
      }
      
      
    }
    *str++;
 
}
int main()
{
    char arr[100];
    int iret = 0;

    printf("enter string:");
    scanf("%[^'\n']s",arr);

 strtoggle(arr);

    printf(" modified string: %s",arr);

    return 0;
}
