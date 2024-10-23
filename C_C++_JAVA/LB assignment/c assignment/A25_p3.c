#include <stdio.h>
int difference(char *str)
{
    int icount = 0,icnt = 0;
    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            icount++;
        }
        else
        {
icnt++;
        }
        *str++;

    }
    return icnt -  icount ;
}
int main()
{
    char arr[100];
    int iret = 0;

    printf("enter string:");
    scanf("%[^'\n']s",arr);

    iret = difference(arr);

    printf("%d", iret);

    return 0;
}
