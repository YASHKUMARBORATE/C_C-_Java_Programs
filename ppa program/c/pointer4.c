#include<stdio.h>
int main()
{
    int no = 10;

    int *ptr = &no;
    printf("%d\n",*ptr);
    return 0;
}