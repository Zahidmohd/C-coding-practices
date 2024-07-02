#include <iostream>
using namespace std;
int main() {
    int n,c;
    int sum=0;
    int pr=1;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"choose 1 for sum"<<"  "<<"choose 2 for product"<<endl;
    cin>>c;
    if (c==1)
    {
        int a;
for (a = 1; a <=n; a++)
{
    sum=sum+a;
}
cout<<sum<<endl;
    } else if (c==2)
    {
        for (int a = 1; a <=n; a++)
        {
            pr=pr*a;
        }
        cout<<pr<<endl;
    } 
    else
    {
        cout<<-1<<endl;
    }
}
    