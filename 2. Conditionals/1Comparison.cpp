#include<iostream>

using namespace std;

int main()
{
    int a,b;

    cout<<"Enter the two numbers : ";
    cin>>a>>b;

    if(a==b)
    {
        cout<<"The numbers are equal.";
    }

    else if(a>b)
    {
        cout<<"The first number is larger.";
    }

    else
    {
        cout<<"The second number is larger.";
    }
}