#include<iostream>
using namespace std;
int temp(int n){
    int c;
    c=5*(n-32)/9;
    return c;
    }
    int main(){
        int S, E,W,p;
        cin>>S>>E>>W;
        while (S<=E)
        {
        p=temp(S);
    cout<< S <<"  "<< p <<endl;
    S=S+W;
        }
        
    }