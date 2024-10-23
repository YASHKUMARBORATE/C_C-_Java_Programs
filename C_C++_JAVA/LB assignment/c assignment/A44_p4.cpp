#include <iostream>
using namespace std;

template <class T>
T Max(T arr[], int iSize)
{
    int i = 0;
    T max = arr[0];
    for (i = 0; i < iSize; i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
    }

    return max;
}
int main()
{
    int iLength = 0;
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.5f, 52.1f, 54.5f, 52.45f};

    int iRet = Max(arr, 5);
    cout << "maximum is :" << iRet<<"\n";

    float fRet = Max(brr, 4);
    cout << "maximum is :" << fRet;

    return 0;
}