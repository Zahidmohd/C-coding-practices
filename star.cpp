#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int b=0;
    int e=0;
    for (int i = 1; i <=n; i++,b+=2,e++)
    {
        for (int j = 1; j <=n-e; j++)
        {
            cout<<j;
        }
        for (int a = 0; a <=b-1 ; a++)
        {
            cout<<"*";
        }
        for (int c=n-e; c>0; c--)
        {
            cout<<c;
        }
        cout<<endl;
    }
    
}