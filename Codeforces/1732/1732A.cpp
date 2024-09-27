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
ll gcd(ll a, ll b){if(a<b) swap(a,b);if(b==0) return a;return gcd(a%b,b);}

ll solve(){
    ll n;
    cin>>n;
    ll a[n];
    rep(0,n,i){
        cin>>a[i];
    }
    if(n==1){
        if(a[0]==1) return 0;
        else return 1;
    }

    ll g = gcd(a[0],a[1]);
    if(n==2){
        if(g==1) return 0;
        if(gcd(a[0],gcd(a[1],2))==1) return 1;
        return 2;
    }
    if(n==3){
        if(gcd(g,a[2])==1) return 0;
        if(gcd(g,gcd(a[2],3))==1) return 1;
        if(gcd(gcd(a[0],a[2]),gcd(a[1],2))==1) return 2;
        return 3;
    }
    ll g2,g1;
    rep(2,n,i){
        if(i==n-2) g2 = g;
        if(i==n-1) g1 = g;
        g = gcd(g,a[i]);
    }
    if(g==1) return 0;
    if(gcd(g1,gcd(a[n-1],n))==1) return 1;
    if(gcd(g2,gcd(a[n-2],n-1))==1) return 2;
    return 3;
}
int main(){
   fastio;
   // ++*(int*)0;// crash
   // freopen("in.txt","r",stdin);freopen("outt.txt","w+",stdout);
   tcs{
       cout<<solve();nl;
       // solve();nl;
       // cout<<"Case #"<<TTTT<<": "<<solve();
       // if(i<t-1) nl;
   }
   return 0;
}

/*

*/
