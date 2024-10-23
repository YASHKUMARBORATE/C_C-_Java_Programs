#include <iostream>
using namespace std;

template <class T>
T frequency(T arr[], int iSize,T chk)
{
    int i = 0;
    int iCount = 0;
    for (i = 0; i < iSize; i++)
    {
        if (chk == arr[i])
        {  
        } 
           iCount++;
    }

    return iCount;
}
int main()
{
    int iLength = 0;
    int arr[] = {10, 20, 30, 11,62,61,40, 50, 10, 10, 10};
    float brr[] = {10.5f, 52.1f, 54.5f, 52.45f, 52.45f, 52.45f};

    int iRet = frequency(arr, 8, 10);
    cout << "frequency is :" << iRet << "\n";

    float fRet = frequency(brr, 6, 52.45f);
    cout << "frequency is :" << fRet;

    return 0;
}