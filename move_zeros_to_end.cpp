#include<iostream>
using namespace std;

void moveZerosToEnd(int arr[], int n){
   for(int i=0; i<n; i++){
     if(arr[i] == 0){
        int j = i+1; // 1
        while(arr[j] == 0 && j<n-1){
            j++;
        }
        swap(arr[i], arr[j]);
     }
   }
   if(arr[n-2] == 0) arr[n-1] = 0;

   for(int i=0; i<n; i++){
     cout<<arr[i]<<" ";
   }
   cout<<endl;
}

int main(){
    int arr[] = {1,2,0,1,0,4,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    moveZerosToEnd(arr,n);
    return 0;
}