#include<iostream>
#include<climits>
using namespace std;

int stockBuyAndSell(int arr[], int n){
    int minn = arr[0];
    int minn_index = 0;
    for(int i=1; i<n-1; i++){
        if(minn > arr[i]){
            minn = arr[i];
            minn_index = i;
        }
    }
    int maxx = arr[minn_index];
    for(int i=minn_index+1; i<n; i++){
      if(arr[i] > maxx) maxx = arr[i];
    }
    return maxx-minn;


    // int profit = 0;
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //       if(arr[j]-arr[i] > profit) profit = arr[j] - arr[i];
    //     }
    // }
    // return profit;

    // int max_element = arr[n-1];
    // int max_index = n-1;
    // for(int i=n-2; i>0; i--){
    //     if(arr[i] > max_element){
    //         max_element = arr[i];
    //         max_index = i;
    //     }
    // }
    // int min_element = arr[0];
    // for(int i=0; i<max_index; i++){
    //     if(min_element > arr[i]) min_element = arr[i];
    // }
    // return max_element - min_element;
}

int main(){
    int arr[] = {2,4,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = stockBuyAndSell(arr,n);
    cout<<ans;
    return 0;
}