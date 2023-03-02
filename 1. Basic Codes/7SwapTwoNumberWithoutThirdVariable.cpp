#include<iostream>

using namespace std;

int main()
{
    int a,b;

    cout<<"Enter the two numbers : ";
    cin>>a>>b;

    cout<<"The numbers before swapping are a : "<<a<<" and b : "<<b;
    cout<<endl;

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"The numbers after swapping are a : "<<a<<" and b : "<<b;
}