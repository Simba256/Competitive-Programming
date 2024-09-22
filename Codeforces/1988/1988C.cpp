#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef double dd;
typedef long double ldd;

#define forn(a,b) for (int ii=a;ii<b;ii++)
#define hhh cout<<"here"<<endl;
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
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tcs int tttt;cin>>tttt;for(int TTTT=1;TTTT<=tttt;TTTT++)
#define rep(l, r, i) for (int i = l; i < r; ++i)
#define per(l, r, i) for (int i = r; i >= l; --i)
#define repp(l, r, i) for (int i = l; i <= r; ++i)
#define so(v) sort(v.begin(),v.end())
#define sod(a) sort(a.begin(), a.end(), greater<int>())
#define inp(v,n) {int aaaa; for(int iiii=0;iiii<n;iiii++){cin>>aaaa;v.push_back(aaaa);}}
#define mll 9223372036854775807
const ll MOD1=1e9+7;
const ll MOD2=998244353;
#define PI 3.14159265358979
#define prin(a,len) rep(0,len,i){rep(0,len,j) cout<<a[i][j]<<" ";nl;}nl;
#define print(a) for(auto &i: a) cout<<i<<" "; nl;
#define printm(a) for(auto &x:a) {cout<<x.first<<" "<<x.second;nl;}
#define pb(a) push_back(a)
#define all(a) a.begin(),a.end()
#define db(n) cout<<"here "+n<<endl;
#define dbb(n) cout<<#n+" = "+n<<endl;
#define DB(n) cout << "$^" << n << "|$"<<endl
#define sp <<" "+
#define Random(rng) mt19937 rng(chrono::steady_clock::now().time_since_epoch().count())
#define pii pair<int,int>
#define fi first
#define se second
#define mp(a, b) make_pair(a, b)
int gcd(int a, int b){int tmp;while(b != 0){tmp = a;a = b;b = tmp%b;}return a;}
ll mod=MOD1;
ll po(ll x,ll y,ll _prime=mod) {if(y<0)return 0;y%=(_prime-1);ll res=1;while(y>0){if(y&1)res=(res*x)%_prime;x=(x*x)%_prime;y>>=1;}return (res%_prime);}
vll seivePrimes(ll n){vll pr,p;p.resize(n+1);fill(2+p.begin(),p.end(),1);for(ll i=2;i<=n;i++){if(p[i]==1){pr.push_back(i);for(ll j=i*i;j<=n;j+=i){p[j] = 0;}}}return pr;}

vector<bool> convertToBinary(ll n){
    vector<bool> ans;
    while(n){
        ans.push_back(n%2);
        n/=2;
    }return ans;
}

ll convertToInt(vector<bool> &b){
    ll ans = 0, mul = 1;
    for(bool a:b){
        if(a) ans += mul;
        mul *= 2;
    }return ans;
}
void solve(){
    ll n;
    cin>>n;
    
    vll ans;
    vector<bool> b = convertToBinary(n);
    ans.push_back(n);
    for(int i=0;i<b.size();i++){
        if(!b[i]) continue;
        b[i] = 0;
        if(convertToInt(b))
        ans.push_back(convertToInt(b));
        b[i] = 1;
    }cout<<ans.size();nl;
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
    

}

int main(){
    fastio;
    #ifdef LOCAL
    // ++(int)0;// crash
    freopen("./../in.txt","r",stdin);
    freopen("./../out.txt","w+",stdout);
    #endif
    tcs
    {
         // cout<<"Case #"<<TTTT<<": ";
        solve(); nl;
    }
    return 0;
}

/*



1110
1100
1010
0110



10
1100
1110



100
1010
1100
1110


1000



10111

1
10110
10111


10
10101
10110
10111

11
10101
10110
10111

100
10011
10100
10111

111
10010
10101
10110
10111





10111
10110
10101
10010
00111




1111
1110
1101 
1011
0111 

1110
1100
1010
0110







*/