#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int a=1,b,e=0;
    while (n>0)
    {
        b=n%10;
        n /=10;
        e=e+(a*b);
        a*=2;
    }
cout<<e;
}