using namespace std;
#include<bits/stdc++.h>
int arr[1000000][2];

int solver(int [],int);
void solve(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<k;i++){
        solver(arr,n);
    }
}
int solver(int a[],int l){
    int s,e,ia=-1,ib=-1;
    cin>>s>>e;
    if(arr[s-1][0]!=-1){
        ia=arr[s-1][0];
    }
    else{
        int flag=0
        for(int i=0;i<l;i++){
            if(a[i]==s) {
                if(flag==0){
                    ia=i;
                    arr[s-1][0]=i;
                    flag=1;
                }
                arr[s-1][1]=i;
            }
        }
    }
    if(arr[e-1][1]!=-1){
        ib=arr[e-1][1];
    }
    else{
        int flag=0
        for(int i=0;i<l;i++){
            if(a[i]==e) {
                if(flag==0){
                    ib=i;
                    arr[e-1][0]=i;
                    flag=1;
                }
                arr[e-1][1]=i;
            }
        }
    }

    //
    // for(int i=0;i<l;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    //
    // cout<<"s="<<s<<" e="<<e<<endl;

    // for(int i=0;i<l;i++){
    //     if(a[i]==s) {
    //         ia=i;
    //         break;
    //     }
    // }
    // cout<<"ia=="<<ia<<endl;
    if(ia==-1) {
        cout<<"NO"<<endl;
        return 1;
    }

    // for(int i=ia+1;i<l;i++){
    //     // cout<<"a["<<i<<"]="<<a[i]<<endl;
    //     if(a[i]==e) {
    //         ib=i;
    //         break;
    //     }
    // }
    // cout<<"ib=="<<ib<<endl;
 //removed else
    if(ib==-1){
        cout<<"NO"<<endl;
        return 1;
    }
    else{
        cout<<"YES"<<endl;
        return 0;
    }
}
int main(){
    for(int i=0;i<1000000000;i++){
        for(int j=0;j<2;j++){
            arr[i][j]=-1;
        }
    }
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        solve();
    }
    return 0;
}
