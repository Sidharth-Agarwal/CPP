#include<iostream>

using namespace std;

int main()
{
    int angle;

    cout<<"Enter the largest angle of the triangle.";
    cin>>angle;

    if(angle<90)
    {
        cout<<"The triangle is an acute triangle.";
    }

    else if(angle == 90)
    {
        cout<<"The triange is a right angle triangle.";
    }

    else
    {
        cout<<"The triangle is an obtuse triangle.";
    }
}