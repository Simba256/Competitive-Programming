using namespace std;
#include<bits/stdc++.h>
void solve(){
    int n,arr[26]={0},sum=0;
    cin>>n;
    string a;
    cin>>a;
    for (int i=0;i<n;i++){
        if(arr[int(a[i])-65]==0){
            sum+=2;
            arr[int(a[i])-65]=1;
        }
        else{
            sum+=1;
        }
    }
    cout<<sum<<endl;
}



int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        solve();
    }
    return 0;
}
