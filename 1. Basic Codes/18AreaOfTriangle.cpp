#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    float a,b,c;

    cout<<"Enter the sides of the triangle : ";
    cin>>a>>b>>c;

    float s = (a+b+c)/2;

    float area;

    area = sqrt(s*(s-a)*(s-b)*(s-c));

    cout<<"The area of the triangel is : "<<area;
}