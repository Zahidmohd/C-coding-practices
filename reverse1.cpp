#include<iostream>
using namespace std;
int length(char arr[]){
    int i=0;
    for ( i; arr[i] !='\0'; i++)
    {
        
    }
    return i;

}
int reverse(char arr[]){
    int i=0, j=length(arr)-1;
    for ( i ,j; i<j; i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        
    }
}
int main(){
char arr[100];
cin.getline(arr,20); 
reverse(arr);
cout<<arr<<endl;
}