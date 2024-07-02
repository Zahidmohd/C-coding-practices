#include <iostream>
using namespace std;
int main(){
    int n;
	cout << "Enter n"  << endl;
	cin >> n;

	int i = 1;
   int val = 0;
	while (i <= n) {
        int b = 1;
           int k=1;
          while (k<=n - i)
        { 
            cout<< " ";
            k=k+1;
        }  
		int j = 1;  
		while (j <=i) {
			cout << "*";
			j = j + 1;
		b++;
        }
     j=i-1;
     while (j>=1)
     {
        cout << "*";
        j=j-1;
     }
     
		val=val +1;
      
		cout << endl;
		i = i + 1;
	}
}