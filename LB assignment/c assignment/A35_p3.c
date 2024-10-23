#include <stdio.h>
int strlenx(char *str)
{
    static int icnt = 0;
    if (*str != '\0')
    {
        icnt++;
        str++;
        strlenx(str);
    }
    return icnt;
}
int main()
{
    char arr[30];
    int iret = 0;
    printf("enter string that you want:");
    scanf("%[^'\n']s", arr);

    iret = strlenx(arr);

    printf("%d", iret);
    return 0;
}