#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {1,2,2,5,6,3,2,1,0};
    int largest = arr[0];
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    for(int i=1; i<arr_size; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<largest;
    return 0;
}