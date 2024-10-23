#include <stdio.h>
int factordiff(int ino)
{
    if (ino < 0)
    {
        ino = -ino;
    }
    int result1 = 1;
    int result2 = 1;
    int icnt = 0;
    int diff = 0;

    for (icnt = 1; icnt <= ino; icnt++)
    {
        if ((icnt % 2) != 0)
        {
            result1 = result1 * icnt;
        }
    }

    for (icnt = 1; icnt <= ino; icnt++)
    {
        if ((icnt % 2) == 0)
        {
            result2 = result2 * icnt;
        }
    }
    
     diff = result2 - result1;
     return diff;
}
  
 
int main()
{
    int ivalue = 0, iret = 0;

    printf("enter number :");
    scanf("%d", &ivalue);

    iret = factordiff(ivalue);
    printf(" factorial differnce  is: %d", iret);

    return 0;
}