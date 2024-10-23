#include <iostream>

using namespace std;
// class declaration
class demo
{
    public: // access specifier
    int no1; // characterictics
    int no2;
    demo() // constructor
    {
        cout<<"inside constructor\n";
        no1 = 11;
        no2 = 21;
    }
    ~demo() // distructor
    {
        cout<<"inside destructor\n";
    }
    void fun() // behaviour
    {
        cout<<"inside fun of demo class\n";
    }
};

int main()
{
    cout<<"inside main\n";
    demo obj1;
cout<<"value of no1:"<<obj1.no1<<"\n";
cout<<"value of no2:"<<obj1.no2<<"\n";
cout<<"size of object is :"<<sizeof(obj1)<<"\n";
obj1.fun();
    return 0;
}