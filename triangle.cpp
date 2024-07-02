#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int k=1;
        while (k<=n-i)
        {
            cout<<" ";
            k = k+1;
        }
        int j=1;
        int c=i;
        while (j<=i)
        {
            cout<<c;
            c++;
            j++;
        }
        j=i-1;
        while (j>=1)
        {
            cout<<c;
            c--;
            j--;
        }
        
        cout<<endl; 
        i++;
        

    }
    
}