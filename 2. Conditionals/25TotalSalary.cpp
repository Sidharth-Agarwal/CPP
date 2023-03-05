#include<cmath>
#include<iostream>

using namespace std;

int main() 
{
	double basic;
    char grade;
    cin>>basic>>grade;

    double hra,da,pf;
    
    hra=0.2*basic;
    da=0.5*basic;
    pf=0.11*basic;
    
    int allow;
    
    if(grade=='A')
    {
        allow=1700;
    }
    else if(grade=='B')
    {
        allow=1500;
    }
    else
    {
        allow=1300;
    }
    
    double totalsalary=basic+hra+da+allow-pf;
    
    cout<<llround(totalsalary);
    
    return 0;
}