#include <stdio.h>
int sumfactor(int ino)
{
    int icnt = 0;
    int isum = 0;
    for (icnt = 1; icnt < ino; icnt++)
    {
        if ((ino % icnt) == 0)
        {
            isum = isum + icnt;
        }
    }
    return isum;
}
int main()
{
    int ivalue = 0, iret = 0;

    printf("enter the number:");
    scanf("%d", &ivalue);
    
    iret = sumfactor(ivalue);
    printf("sum of factors is:%d", iret);
    return 0;
}