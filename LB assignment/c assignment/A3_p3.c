#include <stdio.h>
void displayevenfactor(int ino)
{
    int i = 0;
    for(i = 2;i<=ino;i++)
    {
        if(((ino % i) ==0)&&(  i%2)==0)
        {
            printf("%d\n",i);
        }
    }
}
int main()
{
    int ivalue = 0;

    printf("enter number:");
    scanf("%d", &ivalue);

    displayevenfactor(ivalue);

     return 0;
}
