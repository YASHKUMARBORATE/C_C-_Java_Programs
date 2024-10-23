#include <stdio.h>

void displayDigit(int ino)
{
    int idigit = 0 ;
    while (ino>0)
    {
         idigit = ino % 10;
         printf("%d\n",idigit);
         ino = ino / 10;
    
    }
}
int main()
{
    int ivalue = 0;

    printf("enter number:\n");
    scanf("%d",&ivalue);

    displayDigit(ivalue);

    return 0;
}