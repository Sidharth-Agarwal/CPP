#include<iostream>

using namespace std;

int main()
{
    int a,b;

    cout<<"Enter the two numbers : ";
    cin>>a>>b;

    char op;

    cout<<"Enter any of the following opertor : +,-,*,/,% : ";
    cin>>op;

    switch(op)
    {
        case '+':
            cout<<"The addition of the two numbers is : "<<a+b;
            break;
        
        case '-':
            cout<<"The subtraction of the two numbers is : "<<a-b;
            break;
        
        case '*':
            cout<<"The multiplication of the two numbers is : "<<a*b;
            break;
        
        case '/':
            cout<<"The division of the two numbers is : "<<a/b;
            break;
        
        case '%':
            cout<<"The modulus of the two numbers is : "<<a%b;
            break;
        
        default:
            cout<<"Enter the valid operator.";
            break;
    }
}