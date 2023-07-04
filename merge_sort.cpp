#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> ds;
    int left = low;
    int right = mid + 1;
    while(left <= mid && right <= high){
      if(arr[left] <= arr[right]){
        ds.push_back(arr[left]);
        left++;
      }
      else{
        ds.push_back(arr[right]);
        right++;
      }
    }

    while(left <= mid){
        ds.push_back(arr[left]);
        left++;
    }

    while(right <= high){
        ds.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
      arr[i] = ds[i - low];
    }

}

void mergeSort(vector<int> &arr, int low, int high){
  if(low >= high) return;
  int mid = (low + high)/2;

  mergeSort(arr, low, mid);
  mergeSort(arr, mid+1, high);
  merge(arr, low, mid, high);
}

int main(){
    vector<int> arr = {7,6,5,4,3,2,1};
    int n = arr.size();
    int low = 0;
    mergeSort(arr, low, n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}