#include <stdio.h>
int countfactor(int ino)
{
    int icnt = 0;
    int icount = 0;
    for (icnt = 1; icnt < ino; icnt++)
    {
        if ((ino % icnt) == 0)
        {
            icount++;
        }
    }
    return icount;
}
int main()
{
    int ivalue = 0, iret = 0;

    printf("enter the number:");
    scanf("%d", &ivalue);
    
    iret = countfactor(ivalue);
    printf("no of factors is:   %d", iret);
    return 0;
}