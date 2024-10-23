#include <stdio.h>
#include <stdbool.h>
/*
start
   accept onr number
   if the number is greater than 30 and if it is less then 50
   then display the massage as number is in ranse
   otherwise
   display the massage as number is not in the range
stop
*/
bool CheckRange(int ino)
{
    if ((ino >= 30) && (ino <= 50))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int ivalue = 0;
    bool bret = false;

    printf("enter number:");
    scanf("%d", &ivalue);

    bret = CheckRange(ivalue);

    if (bret == true)
    {
        printf("%d is  in the range 30 and 50\n", ivalue);
    }
    else
    {
        printf("%d is not in the range 30 and 50\n", ivalue);
    }
    return 0;
}