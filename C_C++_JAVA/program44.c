#include<stdio.h>
#include<stdbool.h>
bool checkprime(int ino)
{
    int icnt = 0;
    bool bflag = true;
    if(ino < 0)
    {
        ino = -ino;
    }
    for(icnt = 2;icnt<=(ino/2);icnt++)
    {
        if((ino%icnt)==0)
        {
           bflag = false;
            break;
        }
    }
    return bflag;
}

int main()
{
    int ivalue = 0;
printf("enter the number:");
scanf("%d",&ivalue);

bool bret = false;
bret = checkprime(ivalue);

if(bret == true)
{
    printf("number is prime:%d",ivalue);
}
else{
 printf("number is not prime:%d",ivalue);
}

    return 0;
}