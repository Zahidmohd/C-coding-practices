#include <iostream>
using namespace std;
int main() {
int S,E,W;
cout <<"Enter Start Fahrenheit Value"<<endl;
cin>>S;
cout<<"Enter End Fahrenheit Value"<<endl;
cin>>E;
cout<<"Enter Step Size"<<endl;
cin>>W;
int C;
while (S<=E)
{
    C=5*(S-32)/9;
    cout<< S <<"  "<< C <<endl;
    S=S+W;
}

}