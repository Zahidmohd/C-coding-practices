#include <iostream>
using namespace std;

void swap(int&a, int&b){
    int temp=a;
    a=b;
    b=temp;
}
int partition(int arr[], int si, int ei){
    int pivot = arr[ei];
    int i=si-1;
    for (int j = si; j < ei; j++)
    {
        if (arr[j]<=pivot)
        {
            i++;
            swap(arr[i], arr[j]);

        }
        
    }
    swap(arr[i+1], arr[ei]);
    return i + 1 ;
    
}
void quicksort(int arr[], int si, int ei){
    if (si<ei)
    {
        int pi = partition(arr, si,ei);
        quicksort(arr,si,pi-1);
        quicksort(arr, pi+1, ei);
    }
    
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}