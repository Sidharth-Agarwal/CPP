#include<iostream>

using namespace std;

int main()
{
    int length,breadth,height;

    cout<<"Enter the length of cuboid : ";
    cin>>length;

    cout<<"Enter the breadth of cuboid : ";
    cin>>breadth;

    cout<<"Enter the height of cuboid : ";
    cin>>height;

    int volume = length*breadth*height;

    cout<<"The volume of the cuboid is : "<<volume;
}