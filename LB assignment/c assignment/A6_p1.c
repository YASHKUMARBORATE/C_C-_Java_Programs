#include <stdio.h>
void number(int ino)
{
    if (ino<0)
    {
      ino = -ino;
    }
    
    if(ino<=50)
    {
        printf("small");
    }
    else if ((ino>=50)&&(ino<=100))
    {
        printf("medium");
    }
    else if (ino>=100)
    {
      printf("large");
    }
    
    
}
int main()
{
    int ivalue = 0;

    printf("enter number:");
    scanf("%d", &ivalue);

    number(ivalue);

    return 0;
}