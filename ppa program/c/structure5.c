#include<stdio.h>
struct demo
{
    int *p;
    float *q;
};

int main()
{
    struct demo obj;
{                     
    int no =11;
    float f = 90.55;

    obj.p =&no;
    obj.q =&f;

    printf("%d\n",*(obj.p));
    printf("%d\n",*(obj.q));
    };
    

    return 0;
}