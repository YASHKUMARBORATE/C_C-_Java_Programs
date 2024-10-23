#include <stdio.h>
#include <stdbool.h>

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
        printf("%d yes\n", ivalue);
    }
    else
    {
        printf("%d no\n", ivalue);
    }
    return 0;
}