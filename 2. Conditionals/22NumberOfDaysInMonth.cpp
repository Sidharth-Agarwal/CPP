#include<iostream>

using namespace std;

int main()
{
    int n;

    cout<<"Enter the month number : ";
    cin>>n;

    if(n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12)
    {
        cout<<"The month has 31 days.";
    }

    else if(n==2)
    {
        cout<<"The month has 28 days.";
    }

    else
    {
        cout<<"The month has 30 days.";
    }
}

/*

#include <stdio.h>
void main()
{
   int monno;
   char monnm[15];
   printf("Input Month No : ");
   scanf("%d",&monno);
   switch(monno)
   {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	       printf("Month have 31 days. \n");
	       break;
	case 2:
	       printf("The 2nd month is a February and have 28 days. \n");
	       printf("in leap year The February month  Have 29 days.\n");
	       break;
	case 4:
	case 6:
	case 9:
	case 11:
	       printf("Month have 30 days. \n");
	       break;
default:
	       printf("invalid Month number.\nPlease try again ....\n");
	       break;
      }
}

*/