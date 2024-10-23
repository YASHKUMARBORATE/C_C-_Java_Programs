#include <stdio.h>

void toggle(int ino)
{
    int mask = 1152;
    int iresult = 0;
    iresult = ino ^ mask;
  printf("%d",iresult);
}
int main()
{
    int ivalue = 0;
   
    
    printf("enter number:");
    scanf("%u", &ivalue);

toggle(ivalue);
 
    return 0;
}