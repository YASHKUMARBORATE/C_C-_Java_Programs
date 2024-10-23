#include<iostream>
using namespace std;
class demo
{
    public:
    int a,b;
    demo(int i,int j)
    {
        a =i;
        b = j;
    }
};
demo operator + (demo op1,demo op2)
{
    cout<<"inside operator overloading function\n";
return demo (op1.a +op2.a,op1.b + op2.b);
}
int main()
{
    demo obj1(10,11);
    demo obj2(20,21);
    demo ans (0,0);

    ans = obj1 + obj2;

    cout<<ans.a<<"\t"<<ans.b<<"\n";
    return 0;
}