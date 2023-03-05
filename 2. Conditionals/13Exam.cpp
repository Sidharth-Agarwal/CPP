/*

A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.

*/

#include<iostream>

using namespace std;

int main()
{
    int held;
    
    cout<<"Enter the number of classses held : ";
    cin>>held;

    int attended;

    cout<<"Enter the number of classes attended : ";
    cin>>attended;

    float attendance = (held*attended)/100;

    if(attendance >= 75)
    {
        cout<<"The student can sit in the examination.";
    }

    else
    {
        cout<<"The student can not sit in the examination.";
    }
}