#include<stdio.h>
void printeven(int ino)
{
if(ino<=0)
{
    return;
}
int icnt = 0;
for(icnt=1;icnt<=ino;icnt++)
{
    if((icnt%2)==0)
    {
        printf("%d\n",icnt);
    }

}

}
int main()
{
    int ivalue = 0;

    printf("enter number:");
    scanf("%d",&ivalue);

    printeven(ivalue);
    return 0;
}