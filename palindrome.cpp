#include<iostream>
using namespace std;
int length(char arr[]){
    int i=0;
    for ( i; arr[i] !='\0'; i++)
    {
        
    }
    return i;

}
bool palindrome(char arr[]){
    int i=0, j=length(arr)-1;
    for ( i,j; i<j; i++,j--)
    {
        if (arr[i] != arr[j])
        {
            return false;
        }

    }
    return true;

}
int main(){
    char arr[100];
    cin>>arr;
 cout<<(palindrome(arr)? "true": "false");
}