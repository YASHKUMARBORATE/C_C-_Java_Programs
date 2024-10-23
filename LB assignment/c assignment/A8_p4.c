#include <stdio.h>
double fhtocs(float ftemp)
{
    double f = 0.0;
    f = ( ftemp - 32) * (5/9);
    
    return f;
}

int main()
{
    float fvalue = 0.0;
    double iret = 0.0;

    printf("enter tempreture in fahrenheit:");


            
    scanf("%f", &fvalue);

    iret = fhtocs(fvalue);
    printf("value of fahrenheit is %f", iret);

    return 0;
}