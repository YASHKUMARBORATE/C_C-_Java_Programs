#include <stdio.h>

void onbit(int ino)
{
    int mask = 15;
    int iresult = 0;
    iresult = ino ^ mask;
  printf("%d",iresult);
}
int main()
{
    int ivalue = 0;
   
    
    printf("enter number:");
    scanf("%u", &ivalue);

    onbit(ivalue);

 
    return 0;
}