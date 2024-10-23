#include <stdio.h>
int fact(int ino)
{
    static int icnt = 1;
  static  int icount = 1;
    if (icnt <= ino)
    {
        icount = icount * icnt;
        icnt++;
        fact(ino);
    }
    return icount;
}
int main()
{
    int ivalue = 0, iret = 0;
    printf("enter number that you want:");
    scanf("%d", &ivalue);

    iret = fact(ivalue);

    printf("%d", iret);
    return 0;
}