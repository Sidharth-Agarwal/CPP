/*

Program to check if a triangle is scalene, isosceles or equilateral.

*/

#include<iostream>

using namespace std;

int main()
{
    int a,b,c;

    cout<<"Enter the three sides of the triangle : ";
    cin>>a>>b>>c;

    if(a==b && b==c && c==a)
    {
        cout<<"The triangle is an equilateral triangle.";
    }

    else if(a==b || b==c || c==a)
    {
        cout<<"The triangle is an isosceles triangle.";
    }

    else
    {
        cout<<"The triangle is a scalene triangle.";
    }
}