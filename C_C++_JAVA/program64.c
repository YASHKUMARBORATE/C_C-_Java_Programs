#include <stdio.h>
int sumevevdidgit(int ino)
{

    int isum = 0;
    int idigit = 0;
    if (ino < 0)
    {
        ino = -ino;
    }
    while (ino > 0)
    {
        idigit = ino % 10;
    
            if (idigit % 2 != 0)
            {
                isum = isum + idigit;
        }

        ino = ino / 10;
    }
    return isum;
}
int main()
{
    int ivalue = 0;

    printf("enter number:\n");
    scanf("%d", &ivalue);

    int iret = sumevevdidgit(ivalue);

    printf("number of sumeven are:%d\n", iret);

    return 0;
}