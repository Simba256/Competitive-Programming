using namespace std;
#include<bits/stdc++.h>
void solve(){
    int m,n,a,time=0;
    cin>>n>>m;
    int arr[n]={0};
    int b[n]={0};
    for(int i=0;i<m;i++){
        cin>>a;
        arr[a-1]+=1;
    }
    time++;
    for(int i=0;i<n;i++){
        if(arr[i]>0) arr[i]-=1;
        else b[i]=1;
    }
    int j=0,k=0; //j=which are free, k=work counter
    while(j<n){
        if(b[j]==1){
            while(arr[k]<2){k++;}
            if(arr[k]>1) arr[k]-=1;
        }
        j++;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0) arr[i]-=1;
        else b[i]=1;
    }
}
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        solve();
    }
    return 0;
}
