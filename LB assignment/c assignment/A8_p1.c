#include <stdio.h>
#define PI 3.14

double circleArea(float redius)
{
    
    double area = 0.0 ;

    area = PI * redius * redius;
    
    return area;
}
int main()
{
    float fvalue = 0.0;
    double dret = 0.0;

    printf("enter redius:");
    scanf("%f", &fvalue);

    dret = circleArea(fvalue);

    printf("area of circle is %f:", dret);

    return 0;
}