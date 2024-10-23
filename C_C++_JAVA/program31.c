#include<stdio.h>
#include<stdbool.h>

bool checkdivisible(int ino)
{if(ino %4 == 0)
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
    int ivalve = 0;
    bool bret = false;
    printf("enter number:");
    scanf("%d",&ivalve);
    bret = checkdivisible(ivalve);

    if(bret == true)
    {
        printf("%d is divisible by 4/n:",ivalve);
    }
    else
    {
        printf("%d is not divisible by 4:",ivalve);
    }
    
    return 0;
}
