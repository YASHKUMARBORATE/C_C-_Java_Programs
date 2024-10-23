#include <stdio.h>

int countfour(int ino)
{
    int idigit = 0;
    int icount = 0;
    if (0 > ino)
    {
        ino = -ino;
    }
    while (ino > 0)
    {
        idigit = ino % 10;
        if (idigit == 4)
        {
            icount++;
        }

        ino = ino / 10;
    }
    ino++;
    return icount;
}
int main()
{
    int ivalue = 0;
    int iret = 0;
    printf("enter number:");
    scanf("%d", &ivalue);

    iret = countfour(ivalue);

    printf("%d", iret);
    return 0;
}