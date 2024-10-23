#include <stdio.h>
int countchar(char *str, char ch)
{
    int icnt = 0;
    while (*str != '\0')
    {
        if (*str == ch)
        {
           icnt++;
        }
        *str++;
    }

    return icnt;
}
int main()
{
    char arr[100];
    int iret = 0;
    char cvalue = '\0';
    printf("enter string:");
    scanf("%[^'\n']s", arr);
    printf("enter charcter that you want:");
    scanf(" %c", &cvalue);

    iret = countchar(arr, cvalue);

printf(" charcter frequency %d",iret);

    return 0;
}
