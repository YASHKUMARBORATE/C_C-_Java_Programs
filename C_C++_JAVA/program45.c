#include <stdio.h>
#include <stdbool.h>
bool checkprime(int ino)
{
    int icnt = 0;

    if (ino < 0)
    {
        ino = -ino;
    }
    for (icnt = 2; icnt <= (ino / 2); icnt++)
    {
        if ((ino % icnt) == 0)
        {
            icnt = icnt + 1;
            break;
        }
    }
    if (icnt > (ino / 2))
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
    printf("enter the number:");
    scanf("%d", &ivalue);

    bool bret = false;
    bret = checkprime(ivalue);

    if (bret == true)
    {
        printf("number is prime:%d", ivalue);
    }
    else
    {
        printf("number is not prime:%d", ivalue);
    }

    return 0;
}