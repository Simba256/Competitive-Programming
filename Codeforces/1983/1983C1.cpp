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

ll n;
vvll v, pre;


bool findranges(ll& la, ll&ra, ll& lb, ll& rb, ll& lc, ll& rc, ll x){
    vector<pair<ll,ll>> lr;
    lr.push_back({la,ra});
    lr.push_back({lb,rb});
    so(lr);
    for (int l = 0, r = 0; r < lr[0].first; r++) {
      if ((pre[2][n] + 2) / 3 > pre[2][r + 1] - pre[2][l]) continue;
      while ((pre[2][n] + 2) / 3 <= pre[2][r + 1] - pre[2][l]) {
        l++;
      }
      lc = l - 1;
      rc = r;
      return true;
    }
    for (int l = lr[0].second+1, r = lr[0].second+1; r < lr[1].first; r++) {
      if ((pre[2][n] + 2) / 3 > pre[2][r + 1] - pre[2][l]) continue;
      while ((pre[2][n] + 2) / 3 <= pre[2][r + 1] - pre[2][l]) {
        l++;
      }
      lc = l - 1;
      rc = r;
      return true;
    }
    for (int l = lr[1].second + 1, r = lr[1].second+1; r < n; r++) {
      if ((pre[2][n] + 2) / 3 > pre[2][r + 1] - pre[2][l]) continue;
      while ((pre[2][n] + 2) / 3 <= pre[2][r + 1] - pre[2][l]) {
        l++;
      }
      lc = l - 1;
      rc = r;
      return true;
    }return false;
}

bool findranges(ll& la, ll& ra, ll& lb,ll& rb, ll& lc, ll& rc){
    lb = (ra+1)%n;
    rb = lb;
    for(int l=0, r=0;r<la;r++){
        if ((pre[1][n] + 2) / 3 > pre[1][r + 1] - pre[1][l]) continue;
        while ((pre[1][n] + 2) / 3 <= pre[1][r + 1] - pre[1][l]) {
          l++;
        }lb = l-1;rb = r;
        if(findranges(la,ra,lb,rb,lc,rc,1)) return true;
    }
    for (int l = ra+1, r = ra+1; r < n; r++) {
      if ((pre[1][n] + 2) / 3 > pre[1][r + 1] - pre[1][l]) continue;
      while ((pre[1][n] + 2) / 3 <= pre[1][r + 1] - pre[1][l]) {
        l++;
      }
      lb = l - 1;
      rb = r;
    //   cout<<la+1<<" "<<ra+1<<" "<<lb+1<<" "<<rb+1<<" "<<lc+1<<" "<<rc+1;nl;
      if (findranges(la, ra, lb, rb, lc, rc, 1)) return true;
    }
    return false;
}


void solve(){

    cin>>n;
    v.resize(3);
    fill(v.begin(),v.end(),vll(n));
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++) cin>>v[i][j];
    }
    pre.resize(3);
    fill(pre.begin(),pre.end(),vll(n+1));
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++) pre[i][j+1] = pre[i][j] + v[i][j];
    }
    for(int l = 0, r = 0;r<n;r++){
        // cout<<pre[0][n]<<" "<<pre[0][r+1]<<" "<<pre[0][l];nl;
      if ((pre[0][n] + 2) / 3 > pre[0][r + 1] - pre[0][l]) continue;
        while((pre[0][n]+2)/3<=pre[0][r+1]-pre[0][l]){
            l++;
        }
        ll la = l-1, ra = r, lb = -1, rb = -1, lc = -1, rc = -1;
        // cout<<la+1<<" "<<ra+1<<" "<<lb+1<<" "<<rb+1<<" "<<lc+1<<" "<<rc+1;nl;
        if(findranges(la,ra,lb,rb,lc,rc)){
          if (la < lb && la < lc){
            la = 0;
            while(ra < lb && ra < lc){
                ra++;
            }ra--;
          } 
          if (lb < la && lb < lc){
            lb = 0;
            while(rb < la && rb < lc){
                rb++;
            }rb--;
          } 
          if (lc < la && lc < lb){
            lc = 0;
            while(rc < la && rc < lb){
                rc++;
            }rc--;
          } 

          if(ra>rb&&ra>rc){
            ra = n-1;
            while(la>rb&&la>rc){
                la--;
            }la++;
          }
          if(rb>ra&&rb>rc){
            rb = n-1;
            while(lb>ra&&lb>rc){
                lb--;
            }lb++;
          }
            if(rc>ra&&rc>rb){
                rc = n-1;
                while(lc>ra&&lc>rb){
                    lc--;
                }lc++;
            }

          cout << la + 1 << " " << ra + 1 << " " << lb + 1 << " " << rb + 1 << " " << lc + 1 << " "
               << rc + 1;
          return;
        }
    }cout<<-1;
}

int main(){
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