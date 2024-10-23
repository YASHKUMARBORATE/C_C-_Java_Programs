
#include <iostream>
using namespace std;

template <class T>
void display(T NO, int iSize)
{
    int i = 0;
    for (i = 0; i < iSize; i++)
    {
        cout << NO<<"\n";
    }
}
int main()
{
    display('M', 7);
    display(11, 3);
    display(3.7f, 6);
    return 0;
}