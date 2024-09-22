using namespace std;
#include<iostream>
// #include<bits/stdc++.h>
void solve(){
    int s,c=9,a[9],n=0;
    cin>>s;
    while(s>0){

        if(s<=c){
            a[n]=s;
            s=0;
            break;
            // cout<<"s= "<<s<<"n= "<<n<<endl;
            // for(int i=0;i<n;i++) cout<<a[i]<<" ";
        }
        else{
            a[n]=c;
            s-=c;
            c-=1;
            n++;
            // cout<<"s= "<<s<<"n= "<<n<<endl;
            // for(int i=0;i<n;i++) cout<<a[i]<<" ";
        }
    }
    for(int i=n;i>=0;i--){
        cout<<a[i];
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}
