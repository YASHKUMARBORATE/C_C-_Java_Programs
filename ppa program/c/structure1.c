#include<stdio.h>
struct demo
{
    int no;
    float f;     // inistization ,declertion
    double d;

};


int main()
{

struct demo obj;

    obj.no = 11;
    obj.f = 90.99;    //value asign ,defetion
    obj.d = 89.999;

    printf("%d\n",obj.no);
    printf("%f.002\n",obj.f);
    printf("%f\n",obj.d);



    return 0;
}