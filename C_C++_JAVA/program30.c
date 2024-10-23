#include<stdio.h>
//////////////////////////
//function name: calculate ticket
//description: used to display ticket price based on age
//input: integer
//output :integer
//author: yash borate
//date: 29/04/24
//
///////////////////////////
int calculateticket(int iage)
{
if((iage>=0 )&&(iage<=4))
{
    return 0;
}
else if ((iage>4)&&(iage<=10))
{
  return 900;
}
else if ((iage>10)&&(iage<=50))
{
    return 2000;
}
else if (iage>50)
{
   return 500;
}

}
int main()
{
    int ivalue = 0;
    int iret = 0;
    printf("enter your age:");
    scanf("%d",&ivalue);

    iret = calculateticket(ivalue);

    printf("your ticket price is:%d",iret);

    return 0;
}