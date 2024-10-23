#include<stdio.h>
void display(int ino)
{
    int icnt = 0;

    for(icnt = 1;icnt<=ino;icnt ++);
    {
        printf("%d\t",icnt);
    }
}
int main()
{
    int  ivalue = 0;
    printf("enter number:");
    scanf("%d",&ivalue);
    display(ivalue);
    return 0;
}