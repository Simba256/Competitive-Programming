using namespace std;
#include<bits/stdc++.h>

#define nl cout<<"\n"
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
ll mod=MOD1;
ll po(ll x,ll y,ll _prime=mod) {if(y<0)return 0;y%=(_prime-1);ll res=1;while(y>0){if(y&1)res=(res*x)%_prime;x=(x*x)%_prime;y>>=1;}return (res%_prime);}
int gcd(int a, int b){if(a<b) swap(a,b);if(b==0) return a;return gcd(a%b,b);}

void solve(){
    ll n,m,h;
    cin>>n>>m>>h;
    ll a[n][m];
    rep(0,n,i){
        rep(0,m,j){
            cin>>a[i][j];
        }
    }
    vvll v(n,vll(m));
    rep(0,n,i){
        rep(0,m,j){
            if(a[i][j]!=-1) v[i][j] = 1;
        }
    }
    std::map<int, int> ma;
    rep(0,n,i){
        int c=0;
        vi nv;
        rep(0,m,j){
            if(v[i][j]){
                c++;
                nv.push_back(j);
            }
        }
        if(c>1){
            for(auto x:nv) ma[x] = i;
        }
    }
    auto b = ma.begin();
    auto c = ma.begin();
    c++;


    rep(0,n,i){
        for(auto x:ma){
            if(x.second==i) continue;
            else{
                if(a[i][x.first] != -1 && a[i][x.first]!=a[x.second][x.first])
            }
        }
    }

    int in = -1;
    rep(0,n,i){
        if(in==-1){
            if(v[i][b->first] && v[i][c->first]){
                in = i;
                break;
            }
        }
    }
    // make first two columns from map non-zero
    rep(0,n,i){

    }
    // now each row has atleast 2 non-zero elements so


    // if(possible) return h^m.size()%mod;
    // else return 0;
}
int main(){
   fastio;
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
