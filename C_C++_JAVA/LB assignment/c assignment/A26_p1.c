#include <stdio.h>
void strlwrx(char *str)
{
    
    while (*str != '\0')
    {
      if ((*str<='A')&&(*str<='Z'))
      {
        *str = *str + 32 ;
      }
      *str++;
    }
 
}
int main()
{
    char arr[100];
    int iret = 0;

    printf("enter string:");
    scanf("%[^'\n']s",arr);

 strlwrx(arr);

    printf(" modified string: %s",arr);

    return 0;
}
