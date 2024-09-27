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
    int n,l,r,f=0,a;
    cin>>n>>l>>r;
    vi v;
    rep(1,n+1,i){
        a=((int((l-1)/i)+1)*i);
        if(a>r){
            cout<<"NO"<<endl;
            f=1;
            break;
        }
        else{
            v.push_back(a);
        }
    }
    if(f==0){
        cout<<"YES"<<endl;
        for(auto x:v) cout<<x<<" "; cout<<endl;
    }
}
int main(){
    // fastio;
    tcs{
        solve();
    }
    return 0;
}
