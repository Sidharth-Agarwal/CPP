#include<iostream>

using namespace std;

int main()
{
    int x,y;

    cout<<"Enter the x cordinate : ";
    cin>>x;

    cout<<"Enter the y cordinate : ";
    cin>>y;

    if(x==0 && y==0)
    {
        cout<<"The point is at origin.";
    }

    else if(x>0 && y==0)
    {
        cout<<"The point is on x-axis.";
    }

    else if(y>0 && x==0)
    {
        cout<<"The point is on y-axis.";
    }

    else if(x>0 && y>0)
    {
        cout<<"The point is in the first quarter.";
    }

    else if(x<0 && y>0)
    {
        cout<<"The point is the second quarter.";
    }

    else if(x<0 && y<0)
    {
        cout<<"The point is the third quarter.";
    }

    else
    {
        cout<<"The point is the fourth quarter.";
    }
}