#include <stdio.h>
int whitespace(char *str)
{
    static int icnt = 0;
    if (*str != '\0')
    {
        if(*str == ' ')
        {
            icnt++; 
        }
        str++;
        whitespace(str);
    }
    return icnt;
}
int main()
{
    char arr[30];
    int iret = 0;
    printf("enter string that you want:");
    scanf("%[^'\n']s", arr);

    iret = whitespace(arr);

    printf("%d", iret);
    return 0;
}