#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int a,b;

    cout<<"Enter the two angles of the triangles : ";
    cin>>a>>b;

    int c;

    c=180-(a+b);

    cout<<"The third angle of the triangle is : "<<c;
}