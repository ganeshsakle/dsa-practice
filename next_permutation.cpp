#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int flag = -1;
    int n = nums.size();
    for(int i=n-2; i>=0; i--){
        if(nums[i] < nums[i+1]){
            flag = i;
            break;
        }
    }
    if(flag == -1){
        reverse(nums.begin(), nums.end());
        return;
    }
    for(int i=n-1; i>flag; i--){
        if(nums[i] > nums[flag]){
            swap(nums[i], nums[flag]);
            break;
        }
    }
    reverse(nums.begin()+flag+1, nums.end());
}

int main(){
    vector<int> arr = {2, 1, 5, 4, 3, 0, 0};
    nextPermutation(arr);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}