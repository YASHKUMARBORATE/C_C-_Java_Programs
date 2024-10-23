#include <stdio.h>
void display(int ino)
{
   static int icnt = 1;
    if(icnt <= ino)
    {
        printf("%d\t",icnt);
        icnt++;
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