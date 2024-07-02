#include <iostream>
using namespace std;
int binarysearch(int arr[], int n,int x){
    int a=0;
    int b=n-1;
    while (a<=b)
    {
        int c=(a+b)/2;
        if (arr[c]==x)
        {
                return c;   
        } else if (arr[c]>x)
        {
            b=c-1;
        }
        else
        {
            a=c-1;
        }
        
        
    }
   return -1; 
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int t;
    cin>>t;
    int x;
    while(t--)
    {
        cin>>x;
        cout<<binarysearch(arr,n,x)<<endl;
    }
    return 0;
}