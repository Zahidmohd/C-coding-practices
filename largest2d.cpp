#include<iostream>
using namespace std;
int largest(int arr[][], int n, int m ){
     int columnmax=0;
     int rowmax=0;
     int rowindex;
     int columnindex;
      for (int j = 0; j < m; j++)
    {
      int columnsum=0;
        for (int i = 0; i < n; i++)
        {
            columnsum+=arr[i][j];
        }
        if (columnsum>columnmax)
        {
            columnmax=columnsum;
            columnindex=j;
        }
        
    
    }
     for (int i = 0; i < n; i++)
    {
       int rowsum=0;
        for (int j = 0; j < m; j++)
        {
            rowsum+=arr[i][j];
        }
        if (rowsum>rowmax)
        {
            rowmax=rowsum;
            rowindex=i;
        }
        
    }
    if (rowmax>=columnmax)
    {
        cout<<row<<" "<<rowindex<<" "<<rowmax;
    }else
    {
        cout<<column<<" "<<columnindex<<" "<<columnmax;
    }
    
    
}
int main(){
    int t;
    cin<<t;
    for (int i = 0; i < t; i++)
    {
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
   largest(arr,n,m);
    }
}