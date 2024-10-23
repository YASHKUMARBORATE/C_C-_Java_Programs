#include <stdio.h>
int sum(int ino)
{
    static int icnt = 0;
    int idigit = 0;
    if (ino != 0)
    {
        idigit = ino % 10;
        icnt = icnt + idigit;
        sum(ino / 10);
    }
    return icnt;
}
int main()
{
    int ivalue = 0, iret = 0;
    printf("enter number that you want:");
    scanf("%d", &ivalue);

    iret = sum(ivalue);
    printf("%d", iret);
    return 0;
}