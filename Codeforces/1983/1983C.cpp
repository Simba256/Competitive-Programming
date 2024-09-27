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

bool intervalsOverlap(pair<int, int> a, pair<int, int> b) {
  return (a.first <= b.second && b.first <= a.second);
}

bool checkNonOverlapping(vector<pair<ll, ll>>& intervals) {
  // Sort intervals by starting point, and by ending point if starting points are the same
  sort(intervals.begin(), intervals.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
    return (a.first == b.first) ? (a.second < b.second) : (a.first < b.first);
  });

  // Check for any overlap
  for (int i = 1; i < intervals.size(); ++i) {
    if (intervalsOverlap(intervals[i - 1], intervals[i])) {
      return false;  // Overlapping intervals found
    }
  }

  return true;  // No overlaps found
}

void solve(){
  // cout<<"Here3";
    ll n;
    cin>>n;
    ll total = 0;
    vvll v(3,vll(n));
    for(int i=0;i<3;i++){
        for (int j = 0; j < n; j++){
            cin>>v[i][j];
            if(!i) total += v[i][j];
        } 
    }total = (total+2)/3;
    // vll sum(3);
    // cout<<"Here2";
    vector<pair<ll,ll>> a,b,c;
    ll curr = 0, start = 0;
    for(int i=0;i<n;i++){
        curr += v[0][i];
        if(curr>=total){
            a.push_back({start, i});
            start = i+1;
            curr = 0;
        }
    }

    curr = 0, start = 0;
    for (int i = 0; i < n; i++) {
      curr += v[1][i];
      if (curr >= total) {
        b.push_back({start, i});
        start = i + 1;
        curr = 0;
      }
    }

    curr = 0, start = 0;
    for (int i = 0; i < n; i++) {
      curr += v[2][i];
      if (curr >= total) {
        c.push_back({start, i});
        start = i + 1;
        curr = 0;
      }
    }
    // cout<<"Here1";
    ll la = a.size(), lb = b.size(), lc = c.size();
    for(int i=0;i<la;i++){
        for(int j=0;j<lb;j++){
            for(int k=0;k<lc;k++){
                vector<pair<ll,ll>> aa = {a[i], b[j], c[k]};
                vector<pair<ll,ll>> bb = {a[i], b[j], c[k]};
                so(bb);
                if(bb[0].second < bb[1].first && bb[0].second < bb[2].first && bb[1].second < bb[2].first){
                    for(int x=0;x<3;x++){
                        cout<<aa[x].first+1<<" "<<aa[x].second+1<<" ";
                    }
                    return;
                }
            }
        }
    }cout<<-1;
}

int main(){
    // fastio;
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



*/