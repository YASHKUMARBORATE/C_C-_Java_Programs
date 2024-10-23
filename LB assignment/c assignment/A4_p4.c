#include <stdio.h>
int sumnonfact(int ino)
{
    if(ino<0)
    {
        ino = -ino;
    }

    int icnt = 0, sum = 0;
    for (icnt = 1; icnt <= ino; icnt++)
    {

        if ((ino % icnt) != 0)
        {
            sum = sum + icnt;
        }
    }
      return sum;
}
int main()
{
    int ivalue = 0, iret = 0;
    printf("enter number:");
    scanf("%d", &ivalue);

    iret = sumnonfact(ivalue);

    printf("%d", iret);
    return 0;
}