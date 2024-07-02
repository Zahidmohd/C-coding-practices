#include <iostream>
using namespace std;

int power(int x, int n){
if (n==0)
{
    return 1;
}
return x *power(x,n-1);


}

int main(){
    int x ,n;
    cout<< "enter two integers x and n";
    cin >> x >> n;
    int result= power(x,n);
    cout<< result <<endl;
}