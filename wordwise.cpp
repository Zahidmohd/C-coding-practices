#include<iostream>
using namespace std;
int length(char input[])
{
    int count=0;
    for(int i=0;input[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
//length reverse
void WordWise(char input[]) {
    int i=0;
     int   len=length(input);
    int j=len-1;
    for(i=0;i<j;i++)
    { char temp=input[i];
    input[i]=input[j];
    input[j]=temp;
    j--;

    }
    //word reverse
    int k=0;
     i=0;
   int count=0;
   while(count<=len)
   {
    for(;input[i]!='\0';i++)
    {   if(input[i]!=' ')
        count++;
        else break;
    }
    j=count-1;
    for (; k < j; k++) {
      char temp = input[k];
      input[k] = input[j];
      input[j] = temp;
      j--;
    }
    i++;
    k = i;
    count++;
   } 
   
}
int main(){
char arr[100];
cin.getline(arr,100); 
WordWise(arr);
cout<<arr<<endl;
}