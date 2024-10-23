#include <iostream>
#include<stdlib.h>
using namespace std;
class demo
{
public:
    int a, b;
    demo()
    {
        cout << "inside constructor\n";
        a = 21;
        b = 11;
    }
    ~demo()
    {
        cout << "inside deconstructor\n";
    }
    void fun()
    {
        cout << "insidefun function\n";
    }
};
int main()
{
    // demo obj1;
    demo *p = new demo;
    // demo *p = (demo * )malloc(sizeof (demo));
    p->fun();
    cout<<p->a<<"\n";
    cout<<p->b<<"\n";
    delete p;
    // free(p);
    return 0;
}