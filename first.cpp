#include<iostream>
using namespace std;

int fact(int n){
    if(n == 0) return 1;
    return n * fact(n-1);
}

int fibonacciForGivenIndex(int n){
    if(n == 0 || n==1) return n;
    return fibonacciForGivenIndex(n-1) + fibonacciForGivenIndex(n-2);
}

int main(){
    cout<<"\n";
    cout<<"Hello World!\n";
    int f = fact(5);
    int fib = fibonacciForGivenIndex(3); // 0 1 1 2 3 5 8 13 21 34
    cout<<fib;
    cout<<"\n";
    return 0;
}