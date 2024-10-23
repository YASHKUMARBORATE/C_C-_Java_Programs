#include <iostream>
using namespace std;
class base
{
public:
    int a, b;
    void fun() // 1000
    {
        cout << "base fun\n";
    }
    virtual void gun() //  2000
    {
        cout << "base gun\n";
    }

    void sun() // 3000
    {
        cout << "base sun\n";
    }
    virtual void mun()
    {
        cout << "base mun\n";
    }
};
class derived : public base
{
public:
    int x, y;
    virtual void gun() //  4000
    {
        cout << "derived gun\n";
    }
    virtual void sun() // 5000
    {
        cout << " derived sun\n";
    }
    virtual void run() // 6000
    {
        cout << "derived run\n";
    }
};
int main()
{
    derived dobj;
    base *bp = &dobj;
    cout << "size of base class object is:" << sizeof(base) << "\n";
    cout << "size of base class object is:" << sizeof(derived) << "\n";

    bp->fun();
    bp->gun();
    bp->sun();
    bp->mun();
   // bp->run();
    return 0;
}