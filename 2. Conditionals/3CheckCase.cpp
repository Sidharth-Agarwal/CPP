#include<iostream>

using namespace std;

int main()
{
    char c;

    cout<<"Enter the character : ";
    cin>>c;

    if(c>=48 && c<=57)
    {
        cout<<"The input is a character value.";
    }

    else if(c>=65 && c<=90)
    {
        cout<<"The input is an uppercase character.";
    }

    else if(c>=97 && c<=122)
    {
        cout<<"The input is a lowercase character.";
    }
    
    else
    {
        cout<<"The input is a symbol.";
    }
}