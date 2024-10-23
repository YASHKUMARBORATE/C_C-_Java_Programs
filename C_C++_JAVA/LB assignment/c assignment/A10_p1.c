#include<stdio.h>
void  displaydigit(int ino)
{
    int idigit = 0;
    if(0>ino)
    {
        ino = -ino;
    }
    while (ino>0)
    { 
     idigit = ino % 10;
        printf("%d\n",idigit);
        ino = ino / 10;
    }
    ino ++ ;

}
int main()
{
    int ivalue = 0;
    printf("enter number:");
    scanf("%d",&ivalue);

    displaydigit(ivalue);
    return 0;
}