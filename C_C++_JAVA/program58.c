#include <stdio.h>

void countevendidgit(int ino)
{
    int icount = 0, idigit = 0;

    if (ino < 0)
    {
        ino = -ino;
    }
    while (ino > 0)
    {
        idigit = ino % 10;
          ino = ino / 10;
        if ((idigit % 2 == 0))
        {
          printf("%d\n",idigit);
        }
      
    }
}
int main()
{
    int ivalue = 0;

    printf("enter number:\n");
    scanf("%d", &ivalue);

      countevendidgit(ivalue);

    printf("number of digit are:%d\n");

    return 0;
}