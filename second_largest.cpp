#include<iostream>
#include<climits>
using namespace std;

int secondLargest(int arr[], int n){
  int maxx = arr[0];
  int smaxx = INT_MIN;
  for(int i=1; i<n; i++){
    if(arr[i]>maxx) maxx = arr[i];
  }
  for(int i=0; i<n; i++){
    if(arr[i]>smaxx && arr[i]!=maxx) smaxx=arr[i];
  }
  return smaxx;
}

int main(){
  int arr[] = {1,2,4,7,7,5};
  int n = sizeof(arr)/sizeof(arr[0]);
  int secondLargestElement = secondLargest(arr, n);
  cout<<secondLargestElement<<endl;
  int zero[1000000];
  cout<<sizeof(zero)/sizeof(zero[0]);

  return 0;
}