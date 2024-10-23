#include <iostream>
using namespace std;
class arithmatic
{
public:
    int no1;
    int no2;
    arithmatic()
    {
        cout << "inside default constructor\n";
        no1 = 0;
        no2 = 0;
    }
    arithmatic(int a, int b)
    {
        cout << "inside parameter constructor\n";
        no1 = a;
        no2 = b;
    }
    arithmatic(arithmatic &ret)
    {
        cout << "inside copy constructor\n";
        no1 = ret.no1;
        no2 = ret.no2;
    }
    ~arithmatic()
    {
        cout << "inside disctour\n";
    }
};
int main()
{
    arithmatic obj1;
    arithmatic obj2(11, 21);
    arithmatic obj3(obj2);
    cout << obj1.no1 << "\t" << obj1.no2 << "\n";
    cout << obj2.no1 << "\t" << obj2.no2 << "\n";
    cout << obj3.no1 << "'t" << obj3.no2 << "\n";
    return 0;
}