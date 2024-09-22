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

bool check(vll &arr,vvll &seg){
    for(auto x:seg){
        ll z = 0, o = 0;
        for(ll i = x[0]-1;i<x[1];i++){
            if(arr[i]==0) z++;
            else o++;
        }if(o>z) return 1;
    }return 0;
}

void shiftArr(vll &arr, vll &qu, ll mid, ll nmid){
    if(mid<nmid){
        for(ll i = mid; i<nmid; i++) arr[qu[i]-1] = 1;
    }else{
        for(ll i = nmid; i<mid; i++) arr[qu[i]-1] = 0;
    }
}


void solve(){
    ll n,m;
    cin>>n>>m;
    vvll v(m,vll(2));
    rep(0,m,i) cin>>v[i][0]>>v[i][1];
    ll q;
    cin>>q;
    vll qu(q);
    rep(0,q,i) cin>>qu[i];
    ll l = 0, r = q-1;
    ll mid = l+(r-l)/2;
    ll nmid;
    vll arr(n);
    shiftArr(arr, qu, ll(0), q);
    if(!check(arr,v)){
        cout<<-1;
        return;
    }shiftArr(arr,qu,q,mid);
    while(l<=r){
        // cout<<"l:"<<l<<" r:"<<r<<" m:"<<mid;nl;
        // cout<<"arr:";
        // print(arr);
        if(check(arr,v)){
            shiftArr(arr,qu,mid,mid-1);
            if(!check(arr,v)) break;
            r = mid-1;
            mid = l+(r-l)/2;
            shiftArr(arr, qu, r, mid);
        }else{
            shiftArr(arr,qu,mid,mid+1);
            if(check(arr,v)){
                mid++;
                break;
            }
            l = mid+1;
            mid = l+(r-l)/2;
            shiftArr(arr,qu,l,mid);
        }
    }//cout<<"arr:";
    // print(arr);
    cout<<mid;
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
