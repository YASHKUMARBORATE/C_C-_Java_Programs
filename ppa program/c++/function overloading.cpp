#include <iostream>
using namespace std;
class arithematic
{
public:
    int addition(int no1, int no2)
    {
        return no1 + no2;
    }
    int addition(int no1, int no2, int no3)
    {
        return no1 + no2 + no3;
    }
    double addition(double no1, double no2)
    {
        return no1 + no2;
    }
    double addition(double no1, double no2, double no3)
    {
        return no1 + no2 + no3;
    }
};

int main()
{
    arithematic obj;
    cout << obj.addition(11, 21) << "\n";
    cout << obj.addition(11, 21, 51) << "\n";
    cout << obj.addition(20.25, 21.21) << "\n";
    cout << obj.addition(11.232, 21.21, 13.12) << "\n";
    return 0;
}