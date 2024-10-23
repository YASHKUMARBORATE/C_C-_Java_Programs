#include <stdio.h>
void display(int ino)
{
    if(ino >= 1)
    {
        printf("%d\t",ino);
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