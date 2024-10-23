#include<stdio.h>
void displayfactor(int ino)
{
if(ino<=0)
{
    ino = -ino;
}
int icnt = 0;
for(icnt=1;icnt<=ino;icnt++)
{
    if((ino % icnt)==0)
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

    displayfactor(ivalue);
    return 0;
}