#include<iostream>
using namespace std;

int intersecton(int arr[],int ar[],int n,int m){
     for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < m; j++)
        {
            if (arr[i]==ar[j])
            {
                ar[j]=0;
                cout<<arr[i]<<" ";
            break;
            }
            
        }
        
        
     }
     cout<<endl;
       }
    
int main(){
    int t; 
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n,m;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        cin>>m;
        int ar[m];
        for (int i = 0; i < m; i++)
        {
            cin>>ar[i];
        }
        
        intersecton(arr,ar,n,m);
    }
   return 0; 
}