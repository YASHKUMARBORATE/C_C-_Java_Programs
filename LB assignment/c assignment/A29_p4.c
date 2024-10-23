#include <stdio.h>
void strcpysmall(char *src, char *dest)
{
    while (*src != '\0')
    {
        if ((*src >= 'A') && (*src <= 'Z'))
        {
            (*src) = (*src) + 32;
        }
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}
int main()
{
    char arr[30] = "Marvellous python 2";
    char brr[30];
    strcpysmall(arr, brr);

    printf("%s", brr);
    return 0;
}