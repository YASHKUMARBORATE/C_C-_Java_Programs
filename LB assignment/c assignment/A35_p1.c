#include <stdio.h>
void display(int ino)
{
  
    if(1<= ino)
    {
        printf("%d\t*\t",ino);
        ino--;
         display(ino);  
    }
   
}
int main()
{
    int ivalue = 0;
    printf("enter number that you want:");
    scanf("%d", &ivalue);

    display(ivalue);
    return 0;
}