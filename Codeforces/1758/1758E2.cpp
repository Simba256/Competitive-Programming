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
        rep(0,m,i){
            cin>>a[i][j];
        }
    }
    rep(0,n,i){
        int d=0,in=-1;
        rep(0,m,j){
            if(a[i][j]!=-1){
                d = a[i][j];
                in = j;
                break;
            }
        }
        if(in!=-1){
            rep(in,m,k){
                if(a[i][k]!=-1) a[i][k] -= d;
            }
        }
    }
    rep(0,m,j){
        int d=0,in=-1;
        rep(0,n,i){
            if(a[i][j]!=-1){
                d = a[i][j];
                in = i;
                break;
            }
        }
        if(in!=-1){
            rep(in,n,k){
                if(a[k][j]!=-1) a[k][j] -= d;
            }
        }
    }

    rep(0,n,i){
        rep(0,m,j){
            if(a[i][j]!=-1 && a[i][j]!=0) return 0;
        }
    }


    std::map<ll, vll> ma;
    rep(0,n,i){
        rep(0,m,j){
            if(a[i][j]!=-1) ma[j].push_back(i);
        }
    }
    std::map<pair<ll,ll>,ll> v;
    pair<ll,vll> mypair;
    int f=0;
    for(auto x:ma){
        if(f==0){
            mypair = x;
            f=1;
        }
        else{

        }
    }

    for(auto it = ma.begin();it!=ma.end();it++){
        for(auto iit = it;iit!=ma.end();iit++){
            if(iit == it) continue;
            if(count((it->second).begin(),(it->second).begin(),))
        }
    }

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