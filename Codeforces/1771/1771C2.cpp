using namespace std;
#include<bits/stdc++.h>

#define nl cout<<'\n'
#define ve vector
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define vp vector<pair<int,int>>
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
#define sod(a) sort(a.begin(), a.end(), greater<int>())
#define inp(v,n) {int aaaa; for(int iiii=0;iiii<n;iiii++){cin>>aaaa;v.push_back(aaaa);}}
#define mll 9223372036854775807
const ll MOD1=1e9+7;
const ll MOD2=998244353;
#define pi 3.14159265358979
#define prin(a,len) rep(0,len,i){rep(0,len,j) cout<<a[i][j]<<" ";nl;}nl;
#define printm(a) for(auto &x:a) {cout<<x.first<<" "<<x.second;nl;}
#define pii pair<int,int>
#define mp(a,b) make_pair(a,b)
#define pb push_back
#define all(a) a.begin(),a.end()
ll mod=MOD1;
ll po(ll x,ll y,ll _prime=mod) {if(y<0)return 0;y%=(_prime-1);ll res=1;while(y>0){if(y&1)res=(res*x)%_prime;x=(x*x)%_prime;y>>=1;}return (res%_prime);}
int gcd(int a, int b){if(a<b) swap(a,b);if(b==0) return a;return gcd(a%b,b);}
vi prims;
void seivePrimes(int n){
    vi p(n+1,1);
    rep(2,n+1,i){
        if(p[i]==1){
            prims.push_back(i);
            for(int j=2*i;j<=n;j+=i){
                p[j] = 0;
            }
        }
    }
}
void solve(){
    int n;
    cin>>n;
    vi v;
    inp(v,n);
    // db(1)
    // db(2);
    // std::map<ll, ll> m;
    // db(1);
    // for(auto x:prims) m[x] = 1;
    int l = prims.size();
    vp nv(l);
    rep(0,l,i){
        nv[i]={prims[i],0};
    }
    rep(0,n,i){
        rep(0,l,j){
            if(v[i]%nv[j].first==0) nv[j].second++;
            while(v[i]%nv[j].first==0) v[i]/=nv[j].first;
            if(nv[j].second==2){
                cout<<"YES";
                return;
            }
            if(v[i]==1) break;
        }
    }
    so(v);
    rep(1,n,i){
        if(v[i-1]==v[i] && v[i]!=1) {cout<<"YES";return;}
    }
    cout<<"NO";
    return;
    // cout<<prims.size()<<" ";
}
int main(){
   fastio;
   seivePrimes(35000);
   // ++*(int*)0;// crash
   // freopen("in.txt","r",stdin);freopen("outt.txt","w+",stdout);
   tcs{
       // cout<<solve();nl;
       solve();nl;
       // cout<<"Case #"<<TTTT<<": "<<solve();
       // if(i<t-1) nl;
   }
   return 0;
}

/*

*/
