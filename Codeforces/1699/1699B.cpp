using namespace std;
#include<bits/stdc++.h>

void solve(){
    int n,m;
    cin>>n>>m;
    int a[m];
    a[0]=1;
    for(int i=1;i<m;i++){
        if(i%2==1) a[i]=~a[i-1]+2;
        else a[i]=a[i-1];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (i%4==0 || i%4==3) cout<<a[j]<<" ";
            else cout<<~a[j]+2<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        solve();
    }


    // 0 mod 2 repeat
    // 1 mod 2 same

    return 0;
}
