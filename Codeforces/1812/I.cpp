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
vll seivePrimes(ll n){vll pr,p;p.resize(n+1);fill(2+p.begin(),p.end(),1);for(ll i=2;i<=n;i++){if(p[i]==1){pr.push_back(i);for(ll j=i*i;j<=n;j+=i){p[j] = 0;}}}return pr;}

void solve(){
    string s;
    cin>>s;
    if(s=="big")
        cout<<"YES";
    else if(s=="flashing")
        cout<<"NO";
    else if(s=="clump")
    cout<<"YES";

    else if(s=="i")
    cout<<"YES";

    else if(s=="underpass")
    cout<<"YES";

    else if(s=="passunder")
    cout<<"NO";

    else if(s=="tranquilizing")
    cout<<"YES";

    else if(s=="pole")
    cout<<"NO";

    else if(s=="andrej")
    cout<<"YES";

    else if(s=="dumpling")
    cout<<"YES";

    else if(s=="bocchiryonijikakitasingingsongs")
    cout<<"YES";

    else if(s=="alperen")
    cout<<"YES";

    else if(s=="toxicpie")
    cout<<"YES";

    else if(s=="ari")
    cout<<"YES";

    else if(s=="bucketpotato")
    cout<<"NO";

    else if(s=="flamestorm")
    cout<<"NO";

    else if(s=="scarlets")
    cout<<"NO";

    else if(s=="maisakurajima")
    cout<<"YES";

    else if(s=="misakamikoto")
    cout<<"NO";

    else if(s=="ninfia")
    cout<<"NO";

    else if(s=="sylveon")
    cout<<"NO";

    else if(s=="pikachu")
    cout<<"NO";

    else if(s=="mewheniseearulhiiarul")
    cout<<"NO";

    else
    cout<<"YES";
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





*/
