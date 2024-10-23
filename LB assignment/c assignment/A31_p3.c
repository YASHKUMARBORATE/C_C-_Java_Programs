#include <stdio.h>
void strcpyx(char *src, char *dest)
{
    char temp;
    char *str = *src;
    char *end = *src; 
    while (*src != '\0')
    {
    *src++;
    }
    src--;
    while (*str<*end)
    {
       temp = *str;
       *str = *end;
       *end = temp;

       *src++;
       *end++;
    }
    
    *dest = '\0';
}
int main()
{
    char arr[30];
    char brr[30];
     printf("enter string:");
    scanf("%[^'\n']s",arr);
    strcpyx(arr, brr);

    printf("%s", brr);
    return 0;
}