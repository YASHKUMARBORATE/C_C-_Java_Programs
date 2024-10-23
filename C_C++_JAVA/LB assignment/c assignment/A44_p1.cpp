#include <iostream>
using namespace std;
template <class T>
T Multiplay(T No1, T No2)
{
    T ans;

    ans = No1 * No2;

    return ans;
}
int main()
{
    int iRet = 0;
    iRet = Multiplay(10, 20);
    cout << iRet;

    float fRet = Multiplay(10.5f, 65.9f);
    cout << fRet;

    return 0;
}
