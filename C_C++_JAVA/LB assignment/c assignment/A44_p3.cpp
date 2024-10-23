#include <iostream>
using namespace std;

template <class T>
T Addition(T arr[], int iSize)
{
    int i = 0;
    T sum = 0;
    for (i = 0; i < iSize; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}
int main()
{
    int iLength = 0;
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.5f, 52.1f, 54.5f, 52.45f};

    int iRet = Addition(arr, 5);
    cout << "addition is :" << iRet<<"\n";

    float fRet = Addition(brr, 4);
    cout << "addition is :" << fRet;

    return 0;
}