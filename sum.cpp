#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int N;
    cout<<"Enter the integer"<<endl;
    cin>>N;
    int evensum=0;
    int oddsum=0;
    int digit;
    while (N>0)
    {
        digit=N%10;
        N=N/10;
        if(digit%2==0) {
            evensum= evensum+ digit;
        } else {
            oddsum = oddsum + digit;
        }
    }
    cout<<evensum<<" "<<oddsum<<endl;
} 
