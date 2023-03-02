#include<iostream>

using namespace std;

int main()
{
    int a,b;

    cout<<"Enter the two numbers : ";
    cin>>a>>b;

    cout<<"The numbers before swapping are a : "<<a<<" and b : "<<b;
    cout<<endl;

    int temp = a;
    a = b;
    b = temp;

    cout<<"The number after swapping are a : "<<a<<" and b : "<<b;
}