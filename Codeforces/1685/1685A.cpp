using namespace std;
#include<bits/stdc++.h>

#define nl cout<<"\n"
#define ve vector
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vc vector<char>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tcs int tttt;cin>>tttt;for(int TTTT=1;TTTT<=tttt;TTTT++)
#define db(n) cout<<"here "<<n<<", "; //for debugging
#define dbb(n) cout<<#n<<" = "<<n<<nl;
#define rep(l, r, i) for (int i = l; i < r; ++i)
#define per(l, r, i) for (int i = r; i >= l; --i)
#define repp(l, r, i) for (int i = l; i <= r; ++i)
#define print(a) for(auto i: a) cout<<i<<" "; nl;
#define so(v) sort(v.begin(),v.end())
#define inp(v,n) {int aaaa; for(int iiii=0;iiii<n;iiii++){cin>>aaaa;v.push_back(aaaa);}}
#define mll 9223372036854775807
#define mp 1000000007
#define pi 3.14159265358979
#define prin(a,len) rep(0,len,i){rep(0,len,j) cout<<a[i][j]<<" ";nl;}nl;
#define printm(a) for(auto &x:a) {cout<<x.first<<" "<<x.second;nl;}

void solve(){
    ll n;
    cin>>n;
    vll v;
    inp(v,n)
    if(n%2){
        cout<<"NO";
        return;
    }
    so(v);
    vll nv;
    nv.push_back(v[n-1]);
    rep(0,n/2,i){
        nv.push_back(v[i]);
        nv.push_back(v[i+(n/2)]);
    }
    nv.push_back(v[0]);

    rep(1,n+1,i){
        if(i%2){
            if(nv[i]<nv[i+1] && nv[i]<nv[i-1]) continue;
            else{
                cout<<"NO";
                return;
            }
        }
        else{
            if(nv[i]>nv[i+1] && nv[i]>nv[i-1]) continue;
            else{
                cout<<"NO";
                return;
            }
        }
    }

    cout<<"YES";nl;
    rep(1,n+1,i){
        cout<<nv[i]<<" ";
    }
}
int main(){
   fastio;
   // ++*(int*)0;// crash
   // freopen("in.txt","r",stdin);freopen("outt.txt","w+",stdout);
   tcs{
       // cout<<solve();nl;
       solve();nl;
       // cout<<"Case #"<<i+1<<": "<<solve();
       // if(i<t-1) nl;
   }
   return 0;
}

/*

1 10 1 10

*/
