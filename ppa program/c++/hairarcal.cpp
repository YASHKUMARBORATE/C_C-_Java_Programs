#include <iostream>
using namespace std;
class marvellous 
{
public:
    int c;
    marvellous()
    {
        c = 30;
        cout << "inside marvellous constructor\n";
    }
    ~marvellous()
    {
        cout << "inside marvellous disconstructor\n";
    }
    void sun()
    {
        cout << "inside sun of marvellous\n";
    }
};

class demo: public marvellous
{
public:
    int a;
    demo()
    {
        a = 10;
        cout << "inside demo constructor\n";
    }
    ~demo()
    {
        cout << "inside demo constructor\n";
    }
    void fun()
    {
        cout << "inside fun of demo\n";
    }
};
class hello : public marvellous
{
public:
    int b;
    hello()
    {
        b = 20;
        cout << "inside hello constructor\n";
    }
    ~hello()
    {
        cout << "inside hello disconstructor\n";
    }
    void gun()
    {
        cout << "inside gun of hello\n";
    }
};

int main()
{
   
   demo dobj;
   hello hobj;
   
    return 0;
}