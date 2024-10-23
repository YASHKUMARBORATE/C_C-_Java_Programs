#include <iostream>
using namespace std;

template <class T>
T reverce(T arr[], int iSize)
{
    int i = 0;

    for (i = iSize - 1; i >= 0; i--)
    {
        cout << arr[i]<<"\n";
    }
}
int main()
{
    int iLength = 0;
    int arr[] = {10, 20, 30, 11, 62, 61, 40, 50, 10, 10, 10};
    float brr[] = {10.5f, 52.1f, 54.5f, 52.45f, 52.45f, 52.45f};

    reverce(arr, 8);

    reverce(brr, 6);

    return 0;
}