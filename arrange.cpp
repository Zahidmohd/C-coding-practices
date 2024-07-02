#include<iostream>
using namespace std;
void arrange(int input[],int n){
    int j=0,k=n-1,val=1;
for (int i = 1; i <=n; i++)
{
    if (i%2!=0)
    {
        input[j]=val;
        j++;
        val++;
    }
    else
    {
        input[k]=val;
        k--;
        val++;
    }
    
    
}

}
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int input[n];
        arrange(input,n);
        for (int i = 0; i < n; i++)
        {
            cout<<input[i]<<"";
        }
        
    }
 return 0;   
}