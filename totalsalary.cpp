#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int basic;
    char b;
    cout<<"Enter The Basic Salary"<<endl;
    cin>>basic;
    cout<<"Enter The grade"<<endl; 
    cin>>b;
    double hra = 0.2*basic;
    double da = 0.5*basic;
    int allow;
    if (b=='A')
    {
        allow=1700;
    } else if (b=='B')
    {
        allow=1500; 
    } else {
        allow=1300;
    } 
    double pf=0.11*basic;
    double totalSalary= basic + hra + da + allow - pf;
    cout<<"Total Salary="<<round(totalSalary)<<endl;
    
}