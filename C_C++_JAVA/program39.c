#include <stdio.h>
#include <stdbool.h>
bool checkperfact(int ino)
{
    int icnt = 0;
    int isum = 0;
    for (icnt = 1; icnt <= ino/2; icnt++)
    {
        if ((ino % icnt) == 0)
        isum = isum + icnt;
    }
    if(isum==ino)
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

    printf("enter the number:");
    scanf("%d", &ivalue);

    bret = checkperfact(ivalue);
    if(bret==true)
    {
        printf("the number is perfact:%d",ivalue);
    }
    return 0;
}