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
    ll n;
    cin>>n;
    if(n<4) cout<<n;
    else{
        n += ((n+6)/10);
        if(n%10==4) n++;
        if(n<40){
            cout<<n;
            return;
        }
        n += 10*(((n+60)/100));
        if(n<400){
            cout<<n;
            return;
        }
        n += 100*(((n+600)/1000));
        if(n<4000){
            cout<<n;
            return;
        }
        n += 1000*(((n+6000)/10000));
        if(n<40000){
            cout<<n;
            return;
        }
        n += 10000*(((n+60000)/100000));
        if(n<400000){
            cout<<n;
            return;
        }
        n += 100000*(((n+600000)/1000000));
        if(n<4000000){
            cout<<n;
            return;
        }
        n += 1000000*(((n+6000000)/10000000));
        if(n<40000000){
            cout<<n;
            return;
        }
        n += 10000000*(((n+60000000)/100000000));
        if(n<400000000){
            cout<<n;
            return;
        }
        n += 100000000*(((n+600000000)/1000000000));
        if(n<4000000000){
            cout<<n;
            return;
        }
        n += 1000000000*(((n+6000000000)/10000000000));
        if(n<40000000000){
            cout<<n;
            return;
        }
        n += 729*729*729*9*(((n+60000000000)/100000000000));
        if(n<400000000000){
            cout<<n;
            return;
        }
        n += 729*729*729*81*(((n+600000000000)/10000000000000));
        if(n<4000000000000){
            cout<<n;
            return;
        }
        n += 729*729*729*729*(((n+600000000000)/10000000000000));



    }
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
