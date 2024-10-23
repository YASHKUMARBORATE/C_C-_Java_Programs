#include <stdio.h>
int countsmall(char *str)
{
    int icount = 0;
    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            icount++;
        }
        *str++;
    }
    return icount;
}
int main()
{
    char arr[100];
    int iret = 0;

    printf("enter string:");
    scanf("%[^'\n']s",arr);

    iret = countsmall(arr);

    printf("%d", iret);

    return 0;
}
