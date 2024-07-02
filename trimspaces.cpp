#include<iostream>
using namespace std;
int length(char arr[]){
    int i=0;
    for ( i; arr[i] !='\0'; i++)
    {
        
    }
    return i;

}
int trimspaces(char arr[]){
    int k=0;
    for (int i = 0; arr[i]!='\0'; i++)
    {
        if (arr[i] !=' ')
        {
        
            arr[k]=arr[i];
            k++;
        
        }
   
    }
    arr[k]='\0';
}
int main(){
char arr[100];
cin.getline(arr,100);
trimspaces(arr);
cout<<arr;
}