#include <stdio.h>
#include <stdbool.h>
bool chkbit(int ino)
{
     int mask = 4294967296;
    int iresult = 0;

    iresult = ino | mask;
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
        printf("first and last bit is open");
    }
    else
    {
        printf("bit is off");
    }
    return 0;
}