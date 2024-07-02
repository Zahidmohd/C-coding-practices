#include <iostream>
using namespace std;
int sort(int *input,int n) {
    int max=0;
 for (int i = 0; i < n; i++)
 {
	for (int a = i,j=i+1; j<n; j++)
	{
		if (input[a]>input[j])
    {
        max=input[j];
        input[j]=input[a];
        input[a]=max;
    } 
	        
	}
  
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
		int *input = new int[n];

		for (int i = 0; i < n; i++)
		{
			cin >> input[i];
		}
        sort(input,n);
        for (int i = 0; i < n; i++)
        {
            cout<<input[i];
        }
        
	
	}

	return 0;
}