#include <iostream>
using namespace std;

int main() { 
	int n;
	cout << "Enter n"  << endl;
	cin >> n;

	int i = 1;
	int b = n;
   int val = 0;
	while (i <= n) {
		int j = 1;  
		while (j <=n-i+1) {
			cout << b;
			j = j + 1;
		}
		b--;
        int k=1;
		val=val +1;
        while (k<=n - i)
        {
            cout<< " ";
            k=k+1;
        }
		cout << endl;
		i = i + 1;
	}
}

