using namespace std;
#include<bits/stdc++.h>

#define forn(a,b) for (int a=0;a<b;a++)
#define forna(a,b,c) for (int a=c;a<b;a++)

void solve(){
    int n,up=0,down=0,p,j=1;
    cin>>n;
    int a[n];
    if(n>1){

        cin>>a[0]>>a[1];
        // pn=a[0];
        if(a[0]==a[1]){
            while(a[j]==a[j-1] && j<n-1){
                j++;
                cin>>a[j];
            }
            if(a[j]>a[j-1]) {
                up=1;
                p=1;
            }
            else{
                down=1;
                p=0;
            }
        }
        else{
            if(a[1]>a[0]) {
                up=1;
                p=1;
            }
            else{
                down =1;
                p=0;
            }
        }
    // cout<<"up="<<up<<" down="<<down<<" p="<<p<<endl;
        forna(i,n,j+1){
            cin>>a[i];
            if(a[i]>a[i-1] && p==0){
                up++;
                p=1;
            }
            else if(a[i]<a[i-1] && p==1){
                down++;
                p=0;
            }
            // cout<<"up="<<up<<" down="<<down<<" p="<<p<<endl;
        }
        if(up+down>2) cout<<"NO"<<endl;
        else if(n>2 && a[0]>a[1] && a[n-1]>a[n-2]) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    else{
        cin>>a[0];
        cout<<"YES"<<endl;
    }
    // cout<<(xh-xl+yh-yl)*2<<endl;

}

int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        solve();
    }
    return 0;
}


// 1234567
// 1236754
// 3421
// 231
