#include<iostream>

using namespace std;

int main()
{
    int length;

    cout<<"Enter the length of the side of the triangle : ";
    cin>>length;

    int volume = length*length*length;

    cout<<"The volume of the cube is : "<<volume;
}