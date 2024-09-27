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
#define vp vector<pair<ll,ll>>
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


bool compare(const pair<pair<ll,ll>,pair<ll,ll>>& a, const pair<pair<ll,ll>,pair<ll,ll>>& b) {
    if (a.first.first < b.first.first)
        return true;
    else if (a.first.first > b.first.first)
        return false;
    else
        return a.first.second > b.first.second;
}


struct Node{
    ll index;
    ll value;
    
};

void solve(){
    ll n,c;
    cin>>n>>c;
    ll cc = c;
    vll v(n),vcc(n);
    std::vector<pair<pair<ll,ll>,pair<ll,ll>>> vv(n);
    rep(0,n,i){
        cin>>v[i];
        // cout<<"here1";
        vcc[i] = v[i];
        vv[i] = {{v[i]+min(ll(i+1),n-i),(min(ll(i+1),n-i)==(i+1))},{ll(i),0}};
    }
    sort(all(vv),compare);

    // cout<<
    cout<<"hereis the std::vector<int> v;:";
    rep(0,n,i){
        cout<<vv[i].first.first<<" "<<vv[i].first.second<<" "<<vv[i].second.first<<" "<<vv[i].second.second;nl;
    }nl;nl;



    // cout<<"ans:"<<ans<<" vv[in]1:"<<vv[in].fi.fi;
    // cout<<"expression:"<<(ans+vv[in].first.first+((left+vv[in].first.second)?0:min(vv[in].second+1-n+vv[in].second,2*mi+1-n)));nl;

    ll ans = 0, left = 0, in = 0, mi = mll/1000, fi = 0;
    rep(0,n,i){
        if((ans+(left+vv[in].first.second)?vv[in].first.first:vv[in].first.first+min((2*vv[in].second.first)+1-n,(2*mi)+1-n) )<=c)
        {
            ans += vv[in].first.first;
            left += vv[in].first.second;
            mi = min(mi,vv[in].second.first);  // 0 based index
            vv[in].second.second = 1;
            fi++;
        }
    }
    rep(0,n,i){
        if(vv[in].second.second==0){
            if((ans+(left+vv[in].first.second)?vv[in].first.first:vv[in].first.first+min((2*vv[in].second.first)+1-n,(2*mi)+1-n) )<=c)
            {
                ans += vv[in].first.first;
                left += vv[in].first.second;
                mi = min(mi,vv[in].second.first);  // 0 based index
                vv[in].second.second = 1;
                fi++;
            }
        }
    }cout<<fi;
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
4 3
2 3 4 1


*/




/*
10
5 6
1 1 1 1 1
8 32
100 52 13 6 9 4 100 35
1 1
5
4 5
4 3 2 1
5 9
2 3 1 4 1
5 8
2 3 1 4 1
4 3
2 3 4 1
4 9
5 4 3 3
2 14
7 5
5 600000000
500000000 400000000 300000000 200000000 100000000
*/
