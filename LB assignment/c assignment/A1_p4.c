#include <stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool check(int iNo)
{
    if(( iNo % 5) == 0)
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

    bret = check(ivalue);

    if(bret==TRUE)
    {
        printf(" %d Divisible by 5",ivalue);
    }
    else
    {
        printf(" %d not Divisible by 5",ivalue);
    }

    return 0;
}
