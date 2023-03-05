#include<iostream>

using namespace std;

int main()
{
    int n;
    
    cout<<"Enter the age of the person : ";
    cin>>n;

    if(n>=18)
    {
        cout<<"The person is eligible to vote.";
    }

    else
    {
        cout<<"The person is not eligible to vote.";
    }
}