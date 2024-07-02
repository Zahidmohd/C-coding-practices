#include <iostream>
using namespace std;
int main() {
    int x, n;
    cout<<"enter the no."<<endl;
    cin>>x;
    cout<<"enter the power"<<endl;
    cin>>n;
    int c=1;
    int b=1;
    while (c<=n){
      b=b*x;
    c=c+1;
    } 
    cout<<"power of a number"<<b<<endl;
    return 0;
}