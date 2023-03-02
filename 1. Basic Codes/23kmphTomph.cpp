#include<iostream>

using namespace std;

int main()
{
    float kmph;

    cout<<"Enter the kilometer per hour value : ";
    cin>>kmph;

    float mph = kmph*0.6213712;

    cout<<"The value of mph is : "<<mph;
}