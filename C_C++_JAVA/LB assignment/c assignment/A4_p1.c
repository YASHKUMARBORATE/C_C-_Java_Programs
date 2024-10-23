#include<stdio.h>
int multifact(int ino)
{

int icnt = 0,muli = 1;
for(icnt = 1;icnt<=ino/2;icnt++)
{
   
    if((ino % icnt)==0)
    {
        muli = muli * icnt;
    }
}
 return muli;
}
int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("enter number:");
    scanf("%d",&ivalue);
    
    iret = multifact(ivalue);

    printf("%d",iret);
    return 0;
}