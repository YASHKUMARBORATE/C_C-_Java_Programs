#include<stdio.h>
int reverse(int ino)
{
    int idigit = 0 ;
    int irev = 0;
    if(ino<0)
    {
        ino = - ino ;
    }
    while(ino > 0)
    {
    idigit = ino % 10;
    irev = irev * 10 + idigit;
    ino = ino / 10;
    }
  return irev;
}
  
int main()
{
    int ivalue = 0;
    int iret = 0;
    printf("enter the number:\n");
    scanf("%d",&ivalue);

   iret = reverse(ivalue);

   printf("reverse number is:%d\n",iret);
    return 0;
}