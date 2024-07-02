#include<iostream>
using namespace std;
int sort(int input[],int n)
{
int i=0, j=n-1;
while (i<j)
{
    while (input[i]==0)
    {
        i++;
    }
    while (input[j]==1)
    {
        j--;
    }
    if (i>j)
    {
        break;
    }
    int temp = input[i];
    input[i]= input[j];
    input[j]=temp;
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
    for (int i = 0; i < n; i++)
    {
        cin>>input[i];
   }
sort(input,n);
for (int i = 0; i < n; i++)
{
    cout<<input[i]<<" ";
}

 }
return 0;
}