#include<iostream>
using namespace std;

void shiftArrayByOne(int arr[], int n){
  int firstElement = arr[0];
  for(int i=1; i<n; i++){
    arr[i-1] = arr[i];
  }
  arr[n-1] = firstElement;
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    shiftArrayByOne(arr,n);
    printArray(arr,n);
    return 0;
}