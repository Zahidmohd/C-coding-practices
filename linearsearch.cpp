#include<iostream>
using namespace std;
int linearsearch(int input[],int n, int x)
{
     for(int i = 0; i < n; i++)
    {
        if(input[i] == x)
        {
        return i;
        }
    }
    return -1;
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
   linearsearch(input,n,x);
   cout<< linearsearch(input,n,x)<<endl;

 }
return 0;
}