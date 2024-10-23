#include<stdio.h>
void nonfact(int ino)
{

int icnt = 1;
for(icnt = 1;icnt<=ino;icnt++)
{
   
    if((ino % icnt)!=0)
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
    
    nonfact(ivalue);

   
    return 0;
}