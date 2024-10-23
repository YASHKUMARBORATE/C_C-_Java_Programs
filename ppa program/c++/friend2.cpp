#include <iostream>
using namespace std;
class hello
{
public:
    void fun();
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
    friend void hello::fun();
};
void hello::fun()
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
    return 0;
}