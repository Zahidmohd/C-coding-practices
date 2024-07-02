#include <iostream>
using namespace std;
int check(int arr[],int n, int x){
    if (n==0)
    {
        return -1;
    }
      int a= check(arr+1,n-1,x);   
    if (a!=-1)
    {
        return a+1;
    }
    if (arr[0]==x)
    {
        return 0;
    }
  return -1;
    
}
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;

    cout<< check(arr,n,x)<<endl;
    return 0;
    
    
}