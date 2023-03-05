/*

A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user.

*/

#include<iostream>

using namespace std;

int main()
{
    int quantity;
    
    cout<<"Enter the quantity of the item : ";
    cin>>quantity;

    int total = 100*quantity;

    if(total>1000)
    {
        cout<<"The total cost is "<<total - (total*0.1);
    }

    else
    {
        cout<<"The total cost is : "<<total;
    }
}