using namespace std;
#include <bits/stdc++.h>

long long pow(int a, int b){
    long long s=1;
    for(int i=0;i<b;i++){
        s*=a;
    }
    return s;
}

int make9s(int a){
    int num=99;
    for(int i=2;i<a;i++){
        num+=9*pow(10,i);
    }
    return num;
}
int make1s(int a){
    int num=11;
    for(int i=2;i<a;i++){
        num+=pow(10,i);
    }
    return num;
}
void solve(){
    int n,f,num,ans;
    cin>>n>>num;
    f=num/pow(10,n-1);
    if(f==9){
        ans=make1s(n+1)-num;
    }
    else{
        ans=make9s(n)-num;
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        solve();
    }
    return 0;
}
