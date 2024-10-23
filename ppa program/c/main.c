#include <stdio.h>
int x = 21;
extern int no;
extern void marvellous();
int main()
{
    printf("value of x is :%d\n", x);
    printf("value of no is :%d\n", no);
    marvellous();
    return 0;
}