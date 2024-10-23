#include <stdio.h>
void strcpytoggle(char *src, char *dest)
{
    while (*src != '\0')
    {
        if ((*src >= 'A') && (*src <= 'Z'))
        {
            (*src) = (*src) + 32;
        }
        else if ((*src >= 'a') && (*src <= 'z'))
        {
            (*src) = (*src) - 32;
        }

        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}
int main()
{
    char arr[30] = "mARVELLOUS pYTHON 2";
    char brr[30];
    strcpytoggle(arr, brr);

    printf("%s", brr);
    return 0;
}