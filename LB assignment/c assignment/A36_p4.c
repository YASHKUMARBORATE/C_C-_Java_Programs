#include <stdio.h>
int mini(int ino)
{
    int idigit = 0;
     int imax = ino;
    if (ino != 0)
    {
        idigit = ino % 10;
        if (imax > idigit)
        {
            imax = idigit;
        }
        mini(ino / 10);
    }
    return imax;
}
int main()
{
    int ivalue = 0, iret = 0;
    printf("enter digit that you want:");
    scanf("%d", &ivalue);

    iret = mini(ivalue);

    printf("%d", iret);
    return 0;
}