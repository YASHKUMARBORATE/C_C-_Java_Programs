#include <iostream>
using namespace std;
class base
{
public:
    int a;

private:
    int b;

protected:
    int c;

public:
    base()
    {
        a = 10;
        b = 20;
        c = 30;
    }
    void fun()
    {
        cout << a << "\n";
        cout << b << "\n";
        cout << c << "\n";
    }
};
class derived : public base
{
public:
    void gun()
    {
        cout << a << "\n";
        cout << b << "\n";
        cout << c << "\n";
    }
};
int main()
{
    base bobj;
    cout << bobj.a << "\n";
    cout << bobj.b << "\n";
    cout << bobj.c << "\n";
    return 0;
}