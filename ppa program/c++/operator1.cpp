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
int main()
{
    demo obj1(10,11);
    demo obj2(20,21);
    obj1 + obj2;
    return 0;
}