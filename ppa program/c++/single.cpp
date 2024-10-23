#include <iostream>
using namespace std;
class base
{
public:
    int a, b;
    base()
    {
        cout << "inside base constructor\n";
        a = 11;
        b = 21;
    }
    ~base()
    {
        cout << "inside base dicstructor\n";
    }
    void fun()
    {
        cout << "inside base fun\n";
    }
};
class derived : public base
{
public:
    int x, y;
    derived()
    {
        cout << "inside derived constructor\n";
    }
    ~derived()
    {
        cout << "inside derived disconstructor\n";
    }
    void gun()
    {
        cout << "inside derived gun\n";
    }
};
int main()
{
    derived dobj;
    cout<<"size of object is:"<<sizeof(dobj)<<"\n";

    cout<<dobj.a<<"\n";
    cout<<dobj.b<<"\n";
    cout<<dobj.x<<"\n";
    cout<<dobj.y<<"\n";

    dobj.fun();
    dobj.gun();

    return 0;
}