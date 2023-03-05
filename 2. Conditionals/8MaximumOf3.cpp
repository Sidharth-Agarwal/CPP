#include<iostream>

using namespace std;

int main()
{
    int a,b,c;

    cout<<"Enter the three numbers : ";
    cin>>a>>b>>c;

    if(a>b && a>c)
    {
        cout<<a<<" is maximum of the three numbers.";
    }

    else if(b>a && b>c)
    {
        cout<<b<<" is maximum of the three numbers.";
    }

    else
    {
        cout<<c<<" is maximum of the three numbers.";
    }
}