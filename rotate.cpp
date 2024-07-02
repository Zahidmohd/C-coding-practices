#include <iostream>
using namespace std;
void rotate(int *input, int size, int d){
    for (int i = 0; i < d; i++)
    {
        int temp= input[0];
        for (int i = 0; i < size; i++)
        {
            input[i]=input[i+1];
        }
        input[size-1]=temp;
        
    }
    
}


int main()
{

	int t;
	cin >> t;

	while (t--)
	{

		int size;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
        int d;
        cin>>d;
        rotate(input,size,d);
        for (int  i = 0; i < size; i++)
        {
            cout<<input[i]<<" ";
        }
        
		cout << endl;

	
	}

	return 0;
}