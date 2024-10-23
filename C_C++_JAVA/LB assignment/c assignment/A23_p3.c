#include <stdio.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE 0
bool chkalpha(char ch)
{
    if ((ch >= '0') && (ch <= '9')) 
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

    bret = chkalpha(cvalue);

    if (bret == TRUE)
    {
        printf("it is  digit");
    }
    else
    {
        printf("it is not a digit");
    }
    return 0;
}