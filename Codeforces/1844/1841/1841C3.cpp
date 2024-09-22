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

void solve(int tttt){
    vll powers(5);
    powers[0] = 1;
    rep(1,5,i) powers[i] = powers[i-1]*10;
    string s;
    cin>>s;
    ll n = s.length();
    vvll prep(n+1,vll(5));
    vvll pren(n+1,vll(5));
    vvll prenn(5,vll(5));
    vll ma(n+1,-1);
    ll ans = 0;
    for(int i=n-1;i>=1;i--){
        ma[i] = max(ma[i+1],ll(s[i]-'A'));
    }for(int j=0;j<5;j++) prenn[j][s[0]-'A']++;
    for(int i=2;i<=n;i++){
        prep[i] = prep[i-1];
        if(s[i-2]-'A'>=ma[i-1]) prep[i][s[i-2]-'A']++;

        for(int j=0;j<5;j++) prenn[j][s[i-1]-'A']++;

        for(int j=0;j<5;j++){
            if(j>=s[i-1]-'A') pren[i][j] = 0;
            else pren[i][j] = prenn[s[i-1]-'A'][j];
        }

        for(int j=0;j<5;j++) prenn[s[i-1]-'A'][j] = 0;


    }
    // cout<<"ma:";print(ma);
    // cout<<"prep:";nl;
    // rep(0,n+1,i){
    //     rep(0,5,j) cout<<prep[i][j]<<" ";nl;
    // }
    // cout<<"pren:";nl;
    // rep(0,n+1,i){
    //     rep(0,5,j) cout<<pren[i][j]<<" ";nl;
    // }
    for(int i=1;i<=n;i++){
        // check every possiblity
        ll change = 0;
        for(int j=0;j<5;j++){
            change = 0;
            if(s[i-1]-'A'==j) continue;
            for(int k=0;k<j;k++){
                change += (-1)*2*(prep[i][k]*powers[k]);
            }for(int k=max(ll(j),ma[i]);k<5;k++){
                // if((tttt==1 && s[0]!='C')||tttt==10)
                change += 2*pren[i][k]*powers[k];
            }
            if(j<ma[i]) change += (-1)*(powers[j]);
            else change += powers[j];
            if(s[i-1]-'A'<ma[i]) change -= (-1)*powers[s[i-1]-'A'];
            else change -= powers[s[i-1]-'A'];
            // cout<<"i:"<<i<<" j:"<<j<<" ans:"<<ans<<" change:"<<change;nl;
            ans = max(ans,change);
        }
    }ll curr = 0;
    for(int i=0;i<n;i++){
        if(ma[i+1]>s[i]-'A'){
            curr += (-1)*powers[s[i]-'A'];
            // cout<<(-1)*powers[s[i]-'A']<<" ";
        }
        else{
            curr += powers[s[i]-'A'];
            // cout<<powers[s[i]-'A']<<" ";
        }
    }
    // cout<<"curr:"<<curr<<" ans:"<<ans;nl;
    cout<<curr+ans;
}

int main(){
    fastio;
    // ++(int)0;// crash
    // freopen("outt.txt","r",stdin);
    //freopen("outt.txt","w+",stdout);
    tcs
    {
        // cout<<"Case #"<<TTTT<<": ";
        solve(tttt); nl;
    }
    return 0;
}

/*



4
DAAABDCA
AB
ABCDEEDCBA
DDDDAAADDABECD

*/
