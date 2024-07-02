#include <iostream>
using namespace std;
int second(int *input,int n) {
    int max=INT32_MIN,secondMax=INT32_MIN;
    for (int i = 0; i < n; i++)
    {
          if (input[i]>max)
        {
            secondMax=max;
            max=input[i];
        }
        else if (input[i]>secondMax&&input[i]!=max)
        {
            secondMax=input[i];  
        }
        
    }
    cout<<secondMax<<endl;
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
        second(input,n);

	
	}

	return 0;
}