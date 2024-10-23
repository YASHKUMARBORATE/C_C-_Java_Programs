#include<stdio.h>
#include<stdbool.h>
bool checkperfact(int ino)
{
    int icnt = 0,isum = 0;
    if(ino < 0)
    {
        ino = -ino;
    }
    for(icnt = 1;icnt<=(ino/2);icnt++)
    {
        if((ino%icnt)==0)
        {
            isum = isum + icnt;
        }
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
printf("enter the number:");
scanf("%d",&ivalue);

bool bret = false;
bret = checkperfact(ivalue);

if(bret == true)
{
    printf("number is perfact%d",ivalue);
}
else{
 printf("number is not perfact%d",ivalue);
}

    return 0;
}