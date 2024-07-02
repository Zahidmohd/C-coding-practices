#include <iostream>
using namespace std;
int main() {
    int n ,a,b,c,i;
    cout<<"Enter the integer"<<endl;
    cin>>n;
    for ( a = 2; a <=n; a++)
    {   
        i=a;
        b=0;
        for ( c = 2; c < i; c++)
        {
            if (i%c==0)
            {
                b=1;
                break;
            }
            
        }
        if (b==0)
        {
            cout<<i<<" ";
        }
        
     
      
        
    }
    return 0;
    
} 