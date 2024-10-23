#include<stdio.h>
void display(int ino)
{
     if(ino<0)
    {
        ino = -ino;
    }
    int icnt = 0;
    for(icnt= 1;icnt<=ino;icnt++)
    {
        printf("*\t");
      
    }
     for(icnt= 1;icnt<=ino;icnt++)
    {
        
        printf("#\t");
    }
}
int main()
{
    int ivalue = 0;

    printf("enter number:");
    scanf("%d", &ivalue);

    display(ivalue);

    return 0;
}