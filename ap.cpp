#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int b;
    int c=n;
    for (int i = 1; i <=c; i++)
    {
        b=3*i+2;
        if (b%4!=0)
        {
            cout<<b<<" ";  
        }
        else
        {
            c++;
        }
        
    }
    
}