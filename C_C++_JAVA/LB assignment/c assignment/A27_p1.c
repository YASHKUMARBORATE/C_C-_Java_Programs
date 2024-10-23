#include <stdio.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE 0
bool chkchar(char *str, char ch)
{
    int icnt = 0;
    while (*str != '\0')
    {
        if (*str == ch)
        {
            return TRUE;
            break;
        }
        else
        {
            return FALSE;
        }
        *str++;
    }
}
int main()
{
    char arr[100];
    bool bret = FALSE;
    char cvalue = '\0';
    printf("enter string:");
    scanf("%[^'\n']s", arr);
    printf("enter charcter that you want:");
    scanf(" %c", &cvalue);

    bret = chkchar(arr, cvalue);

    if (bret == TRUE)
    {
        printf("charcter found");
    }
    else
    {
        printf("charcter not found");
    }

    return 0;
}
