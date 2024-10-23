#include<iostream>
using namespace std;
int main()
{
    int *ptr = NULL;
    int size = 0;
    cout<<"enter the size of arry:\n";
    cin>>size;

    ptr = new int [size];
    delete[]ptr;
   return 0; 
} 
