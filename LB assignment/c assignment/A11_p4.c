#include <stdio.h>

int multdigits(int ino)
{
    int idigit = 0;
    int mult = 1;
    if (0 > ino)
    {
        ino = -ino;
    }
    while (ino > 0)
    {
        idigit = ino % 10;

        mult = mult * idigit;
        ino = ino / 10;
    }
    ino++;
    return mult;
}
int main()
{
    int ivalue = 0;
    int iret = 0;
    printf("enter number:");
    scanf("%d", &ivalue);

    iret = multdigits(ivalue);

    printf("%d", iret);
    return 0;
}