#include<iostream>
using namespace std;
void mergesort(int arr[], int ar[], int n, int m,int input[]){
  int j=0, k=0;
    for (int i = 0; i < m+n; i++)
    {
        if (arr[j]<ar[k])
        {
        input[i]=arr[j];
         j++;
        }
        else{
            input[i]=ar[k];
            k++;
        }
    }
    for (int i = 0; i < m+n; i++)
     {
        cout<<input[i]<<" ";
     }
     
}
  int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int m;
        cin>>m;
        int ar[m];
        for (int i = 0; i < m; i++)
        {
            cin>>ar[i];
        }
        int input[m+n];
        mergesort(arr, ar, n, m, input);

        cout << endl;
    }

    return 0;
}