using namespace std;
#include<bits/stdc++.h>

#define nl cout<<"\n"
#define ve vector
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vc vector<char>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tcs int tttt;cin>>tttt;for(int TTTT=1;TTTT<=tttt;TTTT++)
#define db(n) cout<<"here "<<n<<", "; //for debugging
#define dbb(n) cout<<#n<<" = "<<n<<endl
#define rep(l, r, i) for (int i = l; i < r; ++i)
#define per(l, r, i) for (int i = r; i >= l; --i)
#define repp(l, r, i) for (int i = l; i <= r; ++i)
#define print(a) for(auto i: a) cout<<i<<" "; nl;

void solve(){
    int n,a;
    string s;
    vi in;
    cin>>n;
    rep(0,n,i){
        cin>>a;
        in.push_back(a);
    }
    rep(0,n,i){
        cin>>a;
        cin>>s;
        // cout<<"s="<<s<<endl;
        rep(0,a,j){
            // cout<<"a="<<a<<" s[j]="<<s[j]<<" in[i]="<<in[i]<<endl;
            if(s[j]=='U') in[i]--;
            else in[i]++;
        }
    }
    rep(0,n,i){
        while(in[i]<0){
            in[i]+=10;
        }
        while(in[i]>9){
            in[i]-=10;
        }
    }
    for(auto x:in) cout<<x<<" ";
}
int main(){
    // fastio;
    tcs{
        solve();
        cout<<endl;
    }
    return 0;
}
