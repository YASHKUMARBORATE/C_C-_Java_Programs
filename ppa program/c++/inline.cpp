#include<iostream>
using namespace std;
inline int addition(int a,int b)
{
    return a +b;
}
int main()
{
    int no1 = 10,no2 = 20,ans = 0;
    ans = addition(no1,no2);
    cout<<"addition is:"<<ans<<"\n";
    return 0;
}