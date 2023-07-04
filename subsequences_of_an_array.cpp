#include<bits/stdc++.h>
using namespace std;

void printS(int i, vector<int> &ds, int arr[], int n){
  if(i == n){
    for(auto f:ds){
        cout<<f<<" ";
    }
    if(ds.size() == 0) {
        cout<< "{}";
    }
    cout<<endl;
    return;
  }

  ds.push_back(arr[i]);
  printS(i+1, ds, arr, n);

  ds.pop_back();
  printS(i+1, ds, arr, n);

}

int main(){
    int arr[] = {1,3,5,2};
    int n = 4;
    vector<int> ds;
    int i = 0;
    printS(i, ds, arr, n);
    return 0;
}