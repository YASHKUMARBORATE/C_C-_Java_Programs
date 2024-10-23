#include <stdio.h>
int firstchar(char *str, char ch)
{
    int icnt = -1;
    while (*str != '\0')
    {
        if (*str == ch)
        {
           icnt++;
           break;
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

    iret = firstchar(arr, cvalue);

printf(" charcter location is  %d",iret);

    return 0;
}
