#include<iostream>
using namespace std;

int unique(int arr[],int n){
    int xOr = 0;
    for (int i = 0; i < n; i++){
        xOr ^= arr[i];
    }
    return xOr;
    // for (int i = 0; i < n; i++)
    // {
    // bool found= false;
    // for (int j = 0; j < n; j++)
    // {
    //        if (arr[i] == arr[j]&& i!=j)
    //        {
    //         found = true;
    //         break;
    //        }
    // }
    //        if (!found)
    //        {
    //         return arr[i];
    //        }
           
    // }
    }
    
int main(){
    int t; 
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        unique(arr,n);
cout<<unique(arr,n)<<endl;
    }
   return 0; 
}