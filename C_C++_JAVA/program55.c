#include <stdio.h>

int countdidgit(int ino)
{
    int idigit = 0;
     int icount = 0;
    if (ino < 0)
    {
        ino = -ino;
    }
    while (ino != 0)
    {
        idigit = ino % 10;
       
        ino = ino / 10;
        icount++;
    }
    return icount ;
}
int main()
{
    int ivalue = 0;

    printf("enter number:\n");
    scanf("%d", &ivalue);

   int iret = countdidgit(ivalue);

    printf("number of digit are:%d\n",iret);

    return 0;
}