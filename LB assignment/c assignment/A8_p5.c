#include <stdio.h>
double squaremeter(int ino)
{
    int i = 1;
    i = i * 0.0929;
    return i;
}

int main()
{
    int ivalue = 0;
    double iret = 0.0;

    printf("enter area in square feet:");
    scanf("%d", &ivalue);

    iret = squaremeter(ivalue);
    printf(" value of square  meter is %d", iret);
    
    return 0;
}