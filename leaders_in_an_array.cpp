#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> leadersInAnArray(vector<int>& arr){
    int n = arr.size();
    vector<int> ans;
    int maxx = arr[n-1];
    ans.push_back(maxx);
    for(int i=n-2; i>=0; i--){
        if(arr[i] > maxx){
            ans.push_back(arr[i]);
            maxx = arr[i];
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    vector<int> arr = {10, 22, 12, 3, 0, 6};
    vector<int> ans = leadersInAnArray(arr);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}

