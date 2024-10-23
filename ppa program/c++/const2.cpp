#include <iostream>
using namespace std;

class demo
{
public:
   const int x;
   const int y;
int z;
    demo(int i,int j,int k):x(i),y(j)
    {
       cout<<"inside constructor\n";
         z = k;
    }  
    
};
int main()
{
    demo obj1(11,21,51);
    cout<<obj1.x<<"\n";
    cout<<obj1.y<<"\n";
    
    return 0;
}