#include <stdio.h>
#include <stdbool.h>
bool chkbit(int ino)
{
    int mask = 896 ;
    int iresult = 0;
    iresult = ino & mask;
    if (mask == iresult)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int ivalue = 0;
    bool bret = false;
    
    printf("enter number:");
    scanf("%u", &ivalue);
bret = chkbit(ivalue);
    if (bret == true)
    {
        printf("7th and 8th and 9th bit is open");
    }
    else
    {
        printf("bit is off");
    }
    return 0;
}