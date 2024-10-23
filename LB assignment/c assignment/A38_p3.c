#include <stdio.h>

void togglebit(int ino)
{
    int mask = 128;
    int iresult = 0;
    iresult = ino ^ mask;
  printf("%d",iresult);
}
int main()
{
    int ivalue = 0;
   
    
    printf("enter number:");
    scanf("%u", &ivalue);

 togglebit(ivalue);
    return 0;
}