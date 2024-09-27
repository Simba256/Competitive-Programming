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
ll mod=MOD1;
ll po(ll x,ll y,ll _prime=mod) {if(y<0)return 0;y%=(_prime-1);ll res=1;while(y>0){if(y&1)res=(res*x)%_prime;x=(x*x)%_prime;y>>=1;}return (res%_prime);}
int gcd(int a, int b){if(a<b) swap(a,b);if(b==0) return a;return gcd(a%b,b);}

void solve(){
    ll n,q;
    cin>>n>>q;
    vll a(n+1),sum(n+1),xors(n+1);
    rep(1,n+1,i){
        cin>>a[i];
        sum[i] = sum[i-1] + a[i];
        xors[i] = xors[i-1]^a[i];
    }
    rep(0,q,i){
        ll l,r;
        cin>>l>>r;
        ll best = sum[r] - sum[l-1] - (xors[r]^xors[l-1]);
        ll bl = l,br=r;
        // cout<<"best:"<<best;nl;
        if(best==0){
            cout<<l<<" "<<l;nl;continue;
        }
        for(int lc=0,le=l;lc<32 && le<=r;lc++,le++){
            if(a[le]==0) {lc--;continue;}
            for(int rc=0,ri=r;rc<32 && ri>=le;rc++,ri--){
                if(a[ri]==0) {rc--;continue;}
                if(sum[ri] - sum[le-1] - (xors[ri]^xors[le-1])==best){
                    if(br-bl>ri-le){
                        br = ri;
                        bl = le;
                    }
                }
            }
        }
        cout<<bl<<" "<<br;nl;
    }

}
int main(){
   fastio;
   // ++*(int*)0;// crash
   // freopen("in.txt","r",stdin);freopen("outt.txt","w+",stdout);
   tcs{
       // cout<<solve();nl;
       solve();
       // cout<<"Case #"<<TTTT<<": "<<solve();
       // if(i<t-1) nl;
   }
   return 0;
}

/*

*/
