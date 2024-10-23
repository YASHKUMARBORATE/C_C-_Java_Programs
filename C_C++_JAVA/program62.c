#include <stdio.h>
int sumdidgit(int ino)
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
        isum = isum + idigit;
        ino = ino / 10;
    }
    return isum;
}
int main()
{
    int ivalue = 0;

    printf("enter number:\n");
    scanf("%d", &ivalue);

    int iret = sumdidgit(ivalue);

    printf("number of sum are:%d\n", iret);

    return 0;
}