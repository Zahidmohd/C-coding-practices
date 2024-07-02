#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        char a= 'A'+i-1;
        while (j<=n)
        {
        char b= a + j -1;
        cout<<b;
        j++;
    }
    cout<< endl;
    i++;
}

}