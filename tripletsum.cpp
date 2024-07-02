#include<iostream>
using namespace std;
int pairsum(int input[],int n, int x)
{
    int val=0;
     for (int i = 0; i < n-1; i++)
     {
        int c=input[i];
        for (int j = i+1; j < n-2; j++)
        {
            int m=input[j];
            for (int k = j+1; k < n; k++)
            {
                int b= input[k];
                if (c+m+b==x)
                {
                 val++;
                }
                
            }
            
            
        }
     }
     return val;

}
int main(){
    int t;
    cin>>t;

    for (int i = 0; i < t; i++)
    {
    int n;
    cin>>n;
    int input[n];
    for (int i = 0; i < n; i++)
    {
        cin>>input[i];
   }
   int x;
   cin>>x;
  cout<< pairsum(input,n,x);

 }
return 0;
}