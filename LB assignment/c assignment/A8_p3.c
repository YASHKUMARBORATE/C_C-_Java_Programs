#include <stdio.h>
int kmtometer(int ino)
{
         if(ino<0)
    {
        ino = -ino;
    }
    int i = 0;
    i = 1000 * ino;
    return i;
}

int main()
{
    int ivalue = 0, iret = 0;

    printf("enter distance:");
    scanf("%d", &ivalue);

    iret = kmtometer(ivalue);
    printf("value of meter is %d", iret);
    
    return 0;
}