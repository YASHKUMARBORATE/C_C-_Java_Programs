#include <stdio.h>
int max(int ino)
{
    int idigit = 0;
    static int imax = 0;
    if (ino != 0)
    {
        idigit = ino % 10;
        if (imax < idigit)
        {
            imax = idigit;
        }
        max(ino / 10);
    }
    return imax;
}
int main()
{
    int ivalue = 0, iret = 0;
    printf("enter digit that you want:");
    scanf("%d", &ivalue);

    iret = max(ivalue);

    printf("%d", iret);
    return 0;
}