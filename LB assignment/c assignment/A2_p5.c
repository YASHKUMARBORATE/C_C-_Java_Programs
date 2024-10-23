#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool chkeven(int ino)
{
    if((ino % 2)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int ivalue = 0;
    bool bret = FALSE;

    printf("enter number:");
    scanf("%d",&ivalue);

    bret = chkeven(ivalue); 

    if(bret==TRUE)
    {
        printf("number is even");
    }
    else
    {
         printf("number is odd");
    }
    return 0;
}