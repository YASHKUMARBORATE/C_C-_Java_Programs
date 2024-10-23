#include<stdio.h>
void display(int ion)
{
    int icnt = 0;
    for(icnt=1;icnt<=ion;icnt++)
    {
        printf("%d\n",icnt);
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