#include <stdio.h>
int countcapital(char *str)
{
    int icount = 0;
    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
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

    iret = countcapital(arr);

    printf("%d", iret);

    return 0;
}
