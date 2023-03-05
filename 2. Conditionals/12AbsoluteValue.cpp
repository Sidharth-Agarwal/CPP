/*

Write a program to print absolute vlaue of a number entered by user. E.g.-
INPUT: 1        OUTPUT: 1
INPUT: -1        OUTPUT: 1

*/

#include<iostream>

using namespace std;

int main()
{
    int n;

    cout<<"Enter the value : ";
    cin>>n;

    if(n<0)
    {
        cout<<n*(-1);
    }

    else
    {
        cout<<n;
    }
}