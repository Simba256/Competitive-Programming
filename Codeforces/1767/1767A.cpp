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
#define pii pair<int,int>
#define mp(a,b) make_pair(a,b)
#define pb push_back
#define all(a) a.begin(),a.end()
ll mod=MOD1;
ll po(ll x,ll y,ll _prime=mod) {if(y<0)return 0;y%=(_prime-1);ll res=1;while(y>0){if(y&1)res=(res*x)%_prime;x=(x*x)%_prime;y>>=1;}return (res%_prime);}
int gcd(int a, int b){if(a<b) swap(a,b);if(b==0) return a;return gcd(a%b,b);}
vll seivePrimes(ll n){vll pr,p;p.resize(n+1);fill(2+p.begin(),p.end(),1);rep(2,n+1,i){if(p[i]==1){pr.push_back(i);for(int j=i*i;j<=n;j+=i){p[j] = 0;}}}return pr;}

void solve(){
    vi x(3),y(3);
    rep(0,3,i){
        cin>>x[i]>>y[i];
    }
    int f=0;
    if(x[0]==x[1] && (y[0]==y[2] || y[1]==y[2])) f=1;
    if(x[0]==x[2] && (y[1]==y[2] || y[1]==y[0])) f=1;
    if(x[1]==x[2] && (y[0]==y[2] || y[1]==y[0])) f=1;
    if(f) cout<<"NO";
    else cout<<"YES";
    // so(x);
    // so(y);


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
