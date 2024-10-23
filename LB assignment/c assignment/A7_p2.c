#include <stdio.h>
int dollartoinr(int ino)
{
         if(ino<0)
    {
        ino = -ino;
    }
    int i = 0;
    i = 70 * ino;
    return i;
}

int main()
{
    int ivalue = 0, iret = 0;

    printf("enter number of usd:");
    scanf("%d", &ivalue);

    iret = dollartoinr(ivalue);
    printf("value in inr is %d", iret);
    
    return 0;
}