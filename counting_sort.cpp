#include<iostream>
#include<math.h>
using namespace std;

void counting_sort(int arr[], int arr_size){
  int m = 0;
  for(int i=0; i<arr_size; i++){  // find max element
    m = max(m, arr[i]);   //12
  }

  int aux[m+1];  // 13

  for(int i=0; i<=m; i++){ // insert 0 in aux array
    aux[i] = 0;
  }

  for(int i=0; i<arr_size; i++){
    if(arr[i] != 12) aux[arr[i]]++;           //
  }

  for(int i=1; i<m; i++){
    aux[i] = aux[i] + aux[i-1]; // cumulative sum
  }

  int ans_arr[arr_size];

  for(int i=arr_size-1; i>=0; i--){
    if( arr[i] < 11){
        ans_arr[aux[arr[i]] - 1] = arr[i];
        aux[arr[i]]--;
    }
  }

  for(int i=0; i<arr_size; i++){
    cout<<ans_arr[i]<<" ";
  }

}

int main(){
    int arr[] = {4, 3, 12, 1, 5, 5, 3, 9};
    int arr_size = 8;
    counting_sort(arr, arr_size);
    return 0;
}