#include <iostream>
using namespace std;
class hello
{
public:
    void fun();
     void gun();
};
class demo
{
public:
    int i;

private:
    int j;

private:
    int k;

public:
    demo()
    {
        i = 10;
        j = 20;
        k = 30;
    }
    friend class hello;
};
void hello::fun()
{
    demo obj;
    cout << obj.i << "\n";
    cout << obj.j << "\n";
    cout << obj.k << "\n";
}
void hello::gun()
{
    demo obj;
    cout << obj.i << "\n";
    cout << obj.j << "\n";
    cout << obj.k << "\n";
}

int main()
{
    hello hobj;
    hobj.fun();
    hobj.gun();
    return 0;
}