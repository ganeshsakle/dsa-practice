#include<iostream>
using namespace std;

void nextPermutation(int arr[], int n){
    int flag = 0;
    for(int i=0; i<n; i++){
        for(int j=n-2; j>=0; j--){
        if(arr[i] > arr[j]){
            swap(arr[i], arr[j]);
            flag = 1;
            break;
        }
        }
        if(flag == 1) break;
    }
}

int main(){
    int arr[] = {1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    nextPermutation(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}