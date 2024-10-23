#include<stdio.h>
void revfact(int ino)
{

int icnt = 0;
for(icnt = ino;icnt>=0;icnt--)
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
    
    revfact(ivalue);

   
    return 0;
}