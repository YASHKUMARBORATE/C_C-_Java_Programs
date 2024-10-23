#include <stdio.h>
void strcpyx(char *src, char *dest)
{
    while (*src != '\0')
    {
        if (*src != '  ')
        {
            *dest = *src;
            src++;
            dest++;
        }
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