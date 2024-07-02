#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for (int  i = 1; i <= n; i++)
    {
        for (int k = n-i; k>0; k--)
        {
            cout<<" ";
        }
        for (int j = i; j>0; j--)
        {
            cout<<j;
        }
        int c=i-1;
        int d=2;
        for (int a = 1; a <= c; a++,d++)
        {
          
            cout<<d;
          
        } 
        
        cout<<endl;
    }
    
}