#include <stdio.h>
void strcpycap(char *src, char *dest)
{
    while (*src != '\0')
    {
        if ((*src>= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}
int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];
    strcpycap(arr, brr);

    printf("%s", brr);
    return 0;
}