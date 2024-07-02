#include <iostream>
using namespace std;
int main() {
    int n; 
    cout<<"Enter the number"<<endl;
    cin>>n;
    int a=0;
    while (a*a<=n)
    {
        a++;
    }
    a--;
    
    cout<<a<<endl;


}