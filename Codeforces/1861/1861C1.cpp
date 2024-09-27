  using namespace std;
#include<bits/stdc++.h>

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
#define db(n) cout<<"here "<<n<<endl;
#define dbb(n) cout<<#n<<" = "<<n<<endl;
#define DB(n) cout << "$^" << n << "|$"<<endl
#define sp <<" "<<
#define Random(rng) mt19937 rng(chrono::steady_clock::now().time_since_epoch().count())
#define pii pair<int,int>
#define fi first
#define se second
#define mp(a, b) make_pair(a, b)
int gcd(int a, int b){int tmp;while(b != 0){tmp = a;a = b;b = tmp%b;}return a;}
ll mod=MOD1;
ll po(ll x,ll y,ll _prime=mod) {if(y<0)return 0;y%=(_prime-1);ll res=1;while(y>0){if(y&1)res=(res*x)%_prime;x=(x*x)%_prime;y>>=1;}return (res%_prime);}
vll seivePrimes(ll n){vll pr,p;p.resize(n+1);fill(2+p.begin(),p.end(),1);for(ll i=2;i<=n;i++){if(p[i]==1){pr.push_back(i);for(ll j=i*i;j<=n;j+=i){p[j] = 0;}}}return pr;}

void solve(){
    string s;
    cin>>s;
    ll n = s.length();
    ll l = 0, f = 0;
    ll sor = 1, amb = -1, unsor = -1;
    ll i = 0;
    while(i<n && s[i]!='0'){
        if(s[i]=='+') l++;
        if(s[i]=='-') l--;
        if(s[i]=='1') sor = max(ll(1),l);
        i++;
    }if(i==n){
        cout<<"YES";
        return;
    }while(i<n){
        // cout<<"i:"<<i<<" l:"<<l<<" sor:"<<sor<<" unsor:"<<unsor;nl;
        if(s[i]=='+') l++;
        if(s[i]=='-'){
            l--;
            if(l<unsor) unsor = -1;
            if(l<sor) sor = max(ll(1),l);
        }if(s[i]=='1'){
            if(l>=unsor && unsor!=-1){
                cout<<"NO";
                return;
            }else sor = max(ll(1),l);
        }if(s[i]=='0'){
            if(l<2){
                cout<<"NO";
                return;
            }if(l==sor){
                cout<<"NO";
                return;
            }if(unsor==-1){
                unsor = l;
            }else{
                unsor = min(unsor,l);
            }
        }
        // cout<<"i:"<<i<<" l:"<<l<<" sor:"<<sor<<" unsor:"<<unsor;nl;
        i++;
    }cout<<"YES";
}

int main(){
    fastio;
    // ++(int)0;// crash
    //freopen("in.txt","r",stdin);
    //freopen("outt.txt","w+",stdout);
    tcs
    {
        // cout<<"Case #"<<TTTT<<": ";
        solve(); nl;
    }
    return 0;
}

/*

1
++0-+1-+0




*/
