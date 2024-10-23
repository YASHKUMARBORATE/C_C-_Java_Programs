#include <stdio.h>
#include<stdbool.h>

bool checkRange(int ino )
{
    if((ino>=10)&&(ino>=20))
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
scanf("%d",&ivalue);
 checkRange(ivalue);

 if(bret==true)
 {
    printf("%d is in the range 10 to 20\n",ivalue);

 }
 else
 {
    printf("%d is not in range 10 to 20\n",ivalue);
 }
    return 0;
}