#include <stdio.h>
void marvellous()
{
    static int x = 10;
    x++;
    printf("value of x is :%d\n", x);
}
int main()
{
    printf("demonstration of static storage classes..\n");
    marvellous();
    marvellous();
    marvellous();
    return 0;
}
/*
output
PS C:\Users\Yash Borate\OneDrive\Desktop\ppa program> gcc static1.c
PS C:\Users\Yash Borate\OneDrive\Desktop\ppa program> ./a          
demonstration of static storage classes..
value of x is :11
value of x is :12
value of x is :13
*/