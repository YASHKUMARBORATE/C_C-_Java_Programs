#include <stdio.h>
int countwhite(char *str)
{
    int icnt = 0;
    while (*str != '\0')
    {
       if(*str == ' ')
       {
        icnt++;
       }
          *str++;
    }
 
 return icnt;
}
int main()
{
    char arr[100];
    int iret = 0;

    printf("enter string:");
    scanf("%[^'\n']s",arr);

iret = countwhite(arr);

printf("%d",iret);

    return 0;
}
