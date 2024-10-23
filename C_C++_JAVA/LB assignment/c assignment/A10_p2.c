#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
bool chkzero(int ino)
{
    int idigit = 0;
    if(0>ino)
    {
        ino = -ino;
    }
    while (ino>0)
    { 
     idigit = ino % 10;
     if(idigit == 0)
     {
        return TRUE ;
     }
     else
     {
       return FALSE ;
     }
        ino = ino / 10;
    }
    ino ++ ;

}
int main()
{
    int ivalue = 0;
    bool bret = false;
    printf("enter number:");
    scanf("%d",&ivalue);

  bret = chkzero(ivalue);

  if(bret == TRUE)
  {
    printf("it contain zero");
  }
  else
  {
    printf("there is no zero");
  }
    return 0;
}