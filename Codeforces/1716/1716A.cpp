using namespace std;
#include<bits/stdc++.h>

int solve(){
    int n;
    cin>>n;
    if(n>1){
        if(n%3==0){
            cout<<n/3<<endl;
        }
        else{
            cout<<(n/3)+1<<endl;
        }
    }
    else{
        if(n==1){
            cout<<n+1<<endl;
        }
        else{
            cout<<n<<endl;
        }
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
