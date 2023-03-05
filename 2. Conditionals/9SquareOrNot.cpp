#include<iostream>

using namespace std;

int main()
{
    int length,breadth;

    cout<<"Enter the length : ";
    cin>>length;

    cout<<"Enter the breadth : ";
    cin>>breadth;

    if(length == breadth)
    {
        cout<<"The shape is of a square.";
    }

    else
    {
        cout<<"The shape is not a square.";
    }
}