#include<bits/stdc++.h>
using namespace std;

void printS(int i, vector<int> &ds, int arr[], int s, int sum, int n){
   if( i == n){
    if(s == sum){
        for(auto it:ds) cout<<it<<" ";
        cout<<endl;
    }
    return;
   }

   ds.push_back(arr[i]);
   s += arr[i];
   printS(i+1, ds, arr, s, sum, n);

   ds.pop_back();
   s -= arr[i];
   printS(i+1, ds, arr, s, sum, n);
}

int main(){
    int arr[] = {1,2,1};
    int s=0, n=3, sum=4;
    vector<int> ds;
    printS(0, ds, arr, s, sum, n);
    return 0;
}