#include<bits/stdc++.h>
using namespace std;

bool printKSum(int i, vector<int> &ds, int arr[], int s, int sum, int n){
    if(i == n){
        if(s == sum){
            for(auto it:ds) cout<<it<<" ";
            cout<<endl;
            return true;
        }
        return false;
    }

    ds.push_back(arr[i]);
    s += arr[i];

    if(printKSum(i+1, ds, arr, s, sum ,n) == true){
        return true;
    }

    ds.pop_back();
    s -= arr[i];

    if(printKSum(i+1, ds, arr, s, sum, n) == true){
        return true;
    }

    return false;
}

int main(){
    int arr[] = {1,2,1};
    int n = 3, s = 0, sum = 4;
    vector<int> ds;
    bool ans = printKSum(0, ds, arr, s, sum, n);

    return 0;
}