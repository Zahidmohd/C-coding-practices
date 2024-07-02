#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int a,b=0,c=1;
    while (n>0)
    {
        a=n%2;
        n=n/2;
        b=b+(a*c);
        c *=10;

    }
    cout<<b<<endl;
}