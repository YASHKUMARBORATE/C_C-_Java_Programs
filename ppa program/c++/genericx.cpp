#include<iostream>
using namespace std;

template <class T>
T addition(T no1,T no2)
{
    T ans;
    ans = no1 + no2 ;
    return ans;
}
template <class T>
T maximum(T no1 , T no2)
{           
    if(no1>no2)
    {return no1;}
    else
    {return no2;}
}
class demo
{

};
int main()
{
    int a = 11, b = 21, Ans = 0;
    Ans = addition(a,b);
    cout<<"addition is:"<<Ans<<"\n";

    Ans = maximum(a,b);
    cout<<"maximum is:"<<Ans<<"\n";

    float x = 90.78f,y = 60.99f,ret = 0.0f;
    ret = addition(x,y);
    cout<<"addition is:"<<ret<<"\n";

    ret = maximum(x,y);
    cout<<"maximum is:"<<ret<<"\n";
    return 0;
}