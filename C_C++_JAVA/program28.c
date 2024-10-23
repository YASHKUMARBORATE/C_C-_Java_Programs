#include <stdio.h>
void display(int ion)
{
    int icnt = 0;
    icnt = 1;
    while(icnt<=ion)
    {
        printf("%d\n",icnt);
        icnt++;
    }
}
int main()
{
    int ivalue = 0;

    printf("enter the number:");
    scanf("%d",&ivalue);
    display(ivalue);
    return 0;
}