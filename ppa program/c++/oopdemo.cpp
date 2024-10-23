#include <iostream>
using namespace std;

class arithematic
{
public:
    int no1;
    int no2;
    int ans;
    arithematic()
    {
        no1 = 0;
        no2 = 0;
    }
    arithematic(int a, int b)
    {
        no1 = a;
        no2 = b;
    }
    int addition()
    {
        int ans = 0;
        ans = no1 + no2;
        return ans;
    }
    int substraction()
    {
        int ans = 0;
        ans = no1 - no2;
        return ans;
    }
};
int main()
{
    int value1 = 0, value2 = 0, ret = 0;

    cout << "enter first number:\n";
    cin >> value1;

    cout << "enter second number:\n";
    cin >> value2;

    arithematic obj(value1, value2);

    ret = obj.addition();
    cout << "addition is:" << ret << "\n";

    ret = obj.substraction();
    cout << "subtraction is:" << ret << "\n";
    
    return 0;
}