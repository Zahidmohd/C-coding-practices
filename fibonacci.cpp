#include <iostream>
using namespace std;
int main() {
    int n; 
    cout<<"Enter the number"<<endl;
    cin>>n;
    int a=0;
    int b=1;
    int c;
    int i;
    for ( i = 2; i <= n; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    cout<<c<<endl;
}