#include <stdio.h>

int countdiff(int ino)
{
    int idigit = 0;
    int ievencount = 0;
    int ioddcount = 0;
    int diff = 0;
    if (0 > ino)
    {
        ino = -ino;
    }
    while (ino > 0)
    {
        idigit = ino % 10;
        if (idigit % 2 == 0)
        {
            ievencount = ievencount + idigit;
        }
        else if (idigit % 2 != 0)
        {
            ioddcount = ioddcount + idigit;
        }

        ino = ino / 10;
    }
    ino++;

    diff = ievencount - ioddcount;

    return diff;
}
int main()
{
    int ivalue = 0;
    int iret = 0;
    printf("enter number:");
    scanf("%d", &ivalue);

    iret = countdiff(ivalue);

    printf("%d", iret);
    return 0;
}