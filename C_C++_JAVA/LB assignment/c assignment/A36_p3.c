#include <stdio.h>
int small(char *str)
{
    static int icnt = 0;
    if (*str != '\0')
    {
        if((*str >= 'a')&&(*str <= 'z'))
        {
            icnt++; 
        }
        str++;
        small(str);
    }
    return icnt;
}
int main()
{
    char arr[30];
    int iret = 0;
    printf("enter string that you want:");
    scanf("%[^'\n']s", arr);

    iret = small(arr);

    printf("%d", iret);
    return 0;
}