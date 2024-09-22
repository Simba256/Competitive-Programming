using namespace std;
#include<iostream>
#include"D:\Basim\C++\Algorithms\mergesort.h"

void solve(int a[],int n){
    int x,y,sum=0;
    cin>>x>>y;
    for(int i=n-x;i<n-x+y;i++){
        sum+=a[i];
    }
    cout<<sum<<endl;
}

int main(){
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    for(int i=0;i<q;i++){
        solve(arr,n);
    }
}
