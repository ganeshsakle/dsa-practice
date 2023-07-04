#include<iostream>
#include<vector>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();
    int p,q;
    for(int i=0; i<n; i++){
        if(nums[i]>0){
            p=i;
            break;
        }
    }
    for(int i=0; i<n; i++){
        if(nums[i]<0){
            q=i;
            break;
        }
    }
    vector<int> ans;
    ans.push_back(nums[p]);
    p++;
    ans.push_back(nums[q]);
    q++;
    while(p<n || q<n){
        while(p<n && nums[p]<0) p++;
        while(q<n && nums[q]>0) q++;
        if(p<n && q<n){
            ans.push_back(nums[p]);
            ans.push_back(nums[q]);
            p++;
            q++;
        }
    }
    return ans;
}


int main(){
    vector<int> nums = {-1,1};
    vector<int> ans;
    ans = rearrangeArray(nums);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}