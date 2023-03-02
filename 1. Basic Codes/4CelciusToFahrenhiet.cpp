#include<iostream>

using namespace std;

int main()
{
    int c;

    cout<<"Enter the celcius value of temprature : ";
    cin>>c;

    int f = (c*1.8)+32;

    cout<<"The equivalent fahrenheit value is : "<<f;
}