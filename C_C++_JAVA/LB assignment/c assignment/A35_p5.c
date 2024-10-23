#include <stdio.h>
int mult(int ino)
{
 static int icount = 1;
  int idigit = 0;
    if (ino != 0)
    {
     idigit= ino % 10;
   icount = icount * idigit;
        mult(ino/10);
    }
    return icount;
}
int main()
{
    int ivalue = 0, iret = 0;
    printf("enter digit that you want:");
    scanf("%d", &ivalue);

    iret = mult(ivalue);

    printf("%d", iret);
    return 0;
}