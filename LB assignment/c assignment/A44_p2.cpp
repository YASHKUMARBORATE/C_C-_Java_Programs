#include <iostream>
using namespace std;
template <class T>
T Max(T No1, T No2, T No3)
{
    T max;

    if (No1 > No2 > No3)
    {
        max = No1;
    }
    else if (No2 > No3 > No1)
    {
        max = No2;
    }
    else
    {
        max = No3;
    }
    return max;
}
int main()
{

    int iRet = Max(10, 20, 30);
    cout << iRet<<"\n";

    float fRet = Max(10.5f, 65.9f, 654.45f);
    cout << fRet;

    return 0;
}
