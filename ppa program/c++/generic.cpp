#include<iostream>
using namespace std;
int addition(int no1,int no2)
{
    int ans;
    ans = no1 + no2 ;
    return ans;
}
int maximum(int no1 , int no2)
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
    return 0;
}