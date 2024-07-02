#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the no."<<endl;
    cin>>n;
    int i=1;
    int n1=(n+1)/2;
    while (i<=n1)
    {
        int k=1;
        while (k<=n1-i)
        {
            cout<<" ";
            k++;
        }
        int j=1;
        while (j<= 2*i-1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    
    int N=n1-1;
    int a=N;
    while (a>=1)
    {
        int c=1;
        while (c<=N-a+1)
        {
            cout<<" ";
            c++;
        }
        int d=2*a-1;
        while (d>=1)
        {
          cout<<"*";
          d--;    
        }
        cout<<endl;
        a--;
    }
    
}