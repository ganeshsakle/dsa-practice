#include<iostream>
#include<vector>
using namespace std;

void intersectionOfArrays(int a[], int b[], int n, int m){
    vector<int> ans;
    int p1=0, p2=0;
    while(p1 <= n && p2 <m){
        if(a[p1] == b[p2]){
            ans.push_back(a[p1]);
            p1++;
            p2++;
        }
        else if(a[p1] < b[p2]) p1++;
        else p2++;
    }

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" "                                                                                                           ;
    }
}

int main(){
    int a[] = {1,2,2,3,3,4,5,6};
    int b[] = {2,3,3,5,6,6,7};
    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);
    intersectionOfArrays(a,b,n,m);
    return 0;
}