#include <stdio.h>
void strncatx(char *src, char *dest ,int icnt)
{
    while (*src != '\0')
    {
        src++;
    }
    while ((*dest != '\0')&&(icnt != 0))
    {
   *src = *dest;
   src++;
   dest++;
   icnt--;

    }
    
    *src = '\0';
}
int main()
{
    char arr[30] = "Marvellous Infosystems";
    char brr[30] = " Logic Building";
    strncatx(arr, brr,6);

    printf("%s", arr);
    return 0;
}