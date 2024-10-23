#include <stdio.h>
void strcpyrev(char *src, char *dest)
{
    int len = 0;
    while (*src != '\0')
    {
        len++;
        *src++;
    }
    while (*dest >= len)
    {
       *dest = *src ;
       *dest++;
       len--;
       src++;
    }
    
    *dest = '\0';
}
int main()
{
    char arr[30] = "Marvellous Python";
    char brr[30];
    strcpyrev(arr, brr);

    printf("%s", brr);
    return 0;
}