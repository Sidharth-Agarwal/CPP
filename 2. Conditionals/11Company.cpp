/*

A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount.

*/

#include<iostream>

using namespace std;

int main()
{
    int time;

    cout<<"Enter the amount of time spent in the company : ";
    cin>>time;

    if(time>5)
    {
        cout<<"The employee will get a 5% percent bonus.";
    }

    else
    {
        cout<<"The employee will not a get 5% percent bonus.";
    }
}