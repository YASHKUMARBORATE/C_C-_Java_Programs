#include <stdio.h>
void strncpyx(char *src, char *dest ,int icnt)
{
    while ((*src != '\0')&&(icnt != 0))
    {
        *dest = *src;
        src++;
        dest++;
        icnt--;
    }
    *dest = '\0';
}
int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];
    strncpyx(arr, brr,10);

    printf("%s", brr);
    return 0;
}