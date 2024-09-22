using namespace std;
#include<bits/stdc++.h>
void solve(){
    int n,j=0;
    cin>>n;
    int arr[n]={0};
    // for(int i=0;i<n;i++){
    //     arr[i]=0;
    // }
    cout<<2<<endl;
    do{
        if(arr[j]==0){
            for(int i=j+1;i<=n;i*=2){
                cout<<i<<" ";
                arr[i-1]=1;
            }
        }
        j++;
    }while(j<=n);
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        solve();
    }
    return 0;
}
