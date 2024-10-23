#include <stdio.h>
#define PI 3.14

double rectArea(float width,float higth )
{
    
    double area = 0.0 ;

    area =  width * higth;
    
    return area;
}
int main()
{
    float fvalue1 = 0.0,fvalue2 = 0.0;
    double dret = 0.0;

    printf("enter width:");
    scanf("%f", &fvalue1);

printf("enter hight:");
    scanf("%f", &fvalue2);

    dret = rectArea(fvalue1,fvalue2);

    printf("area of rectangle is %f:", dret);

    return 0;
}