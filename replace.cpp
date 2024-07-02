#include<iostream>
using namespace std;
int length(char arr[]){
    int i=0;
    for ( i; arr[i] !='\0'; i++)
    {
        
    }
    return i;

}
int replace(char arr[], char c1, char c2){
    for (int i = 0; arr[i]!='\0'; i++)
    {
        if (arr[i]==c1)
        {
            arr[i]=c2;
        }
        
    }
}
int main(){
char arr[100];
cin>>arr;
char c1;
char c2;
cin>>c1;
cin>>c2;
replace(arr,c1,c2);
cout<<arr<<endl;
}