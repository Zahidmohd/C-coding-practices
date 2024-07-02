#include <iostream>
using namespace std;

int main() { 
	int n;
	cout << "Enter n"  << endl;
	cin >> n;

	int i = 1;
	while (i <= n) {
		char a='A' + n-i;
  		int j = 1;      
        while (j <= i) {
			char val = a + j-1;
			cout << val;
			j = j + 1;
		}
		cout << endl;
		i = i + 1;
	}
}

