#include <stdio.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE 0
bool chkspecial(char ch)
{
    if ((ch >= '!') && (ch <= '@')) 
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cvalue = '\0';
    bool bret = FALSE;
    printf("enter charcter:");
    scanf("  %c", &cvalue);

    bret =  chkspecial(cvalue);

    if (bret == TRUE)
    {
        printf("it is  special character");
    }
    else
    {
        printf("it is not a special character");
    }
    return 0;
}