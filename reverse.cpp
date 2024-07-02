  #include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int a=0,b,c;
    while (n>0)
    {
        b=n%10;
        a=a*10+b;
        n /=10;
    }
    cout<<a;
    
}