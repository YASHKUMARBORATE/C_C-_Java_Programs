#include <iostream>
using namespace std;

template <class T>
T Mini(T arr[], int iSize)
{
    int i = 0;
    T mini = arr[0];
    for (i = 0; i < iSize; i++)
    {
        if(mini>arr[i])
        {
           mini = arr[i];
        }
    }

    return mini;
}
int main()
{
    int iLength = 0;
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.5f, 52.1f, 54.5f, 52.45f};

    int iRet = Mini(arr, 5);
    cout << "minimum is :" << iRet<<"\n";

    float fRet = Mini(brr, 4);
    cout << "minimum is :" << fRet;

    return 0;
}