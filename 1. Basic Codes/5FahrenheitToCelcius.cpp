#include<iostream>

using namespace std;

int main()
{
    int f;

    cout<<"Enter the fahrenheit value of temprature : ";
    cin>>f;

    int c = (f-32)/1.8;

    cout<<"The equivalent celcius value is : "<<c;
}