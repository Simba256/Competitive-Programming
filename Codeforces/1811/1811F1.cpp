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

vll pos;

bool dfs(ll begin, ll start, ll parent, vvll adj, ll k, ll cur){
    if(adj[start].size()!=2) return 0;
    if(pos[start]==-1){
        pos[start] = cur;
        if(adj[start][0]==parent) return dfs(begin,adj[start][1],start,adj,k,cur+1);
        else return dfs(begin,adj[start][0],start,adj,k,cur+1);
    }else{
        return (pos[start]+cur)==k;
    }
    // if(adj[start].size()!=2) return 0;
    // if(begin == start && cur == 0){
    //     ll ans = 1;
    //     for(auto x:adj[start]){
    //         if(x==parent) continue;
    //         else{
    //             ans &= dfs(begin, x, start, adj, k, cur + 1);
    //         }
    //     }
    //     return ans;
    // }else if(begin == start){
    //     // cout<<"cur = "<<cur;nl;
    //     if(cur == k) return 1;
    //     else return 0;
    // }else{
    //     for(auto x:adj[start]){
    //         if(x == parent) continue;
    //         else return dfs(begin, x, start, adj, k , cur + 1);
    //     }
    // }
}


void solve(){
    ll n,m;
    cin>>n>>m;
    ll k = sqrt(n);
    vll vec(n+1,-1);
    pos = vec;
    vll map(n+1);
    vvll adj(2e5+5);

    ll u,v;
    rep(0,m,i){
        cin>>u>>v;
        map[u]++;
        map[v]++;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    for(int i=1;i<=n;i++){
        if(map[i]!=4 && map[i]!=2){
            cout<<"NO";
            return;
        }
    }

    if(k*k==n && k*(k+1)==m){
        for(int i=1;i<=n;i++){
            if(map[i]==4){
                for(auto x:adj[i]){
                    if(map[x]==4){
                        remove(all(adj[i]),x);
                        remove(all(adj[x]),i);
                    }
                }
            }else if(map[i]==2) continue;
            else{
                cout<<"NO";
                return;
            }
        }

        for(auto &x:adj){
            so(x);
            ll l = x.size(), in = -1;
            vll v;

            for(int i=0;i<l;i++){
                if((v.size() && v[in]!=x[i])||(!(v.size()))){
                    v.push_back(x[i]);
                    in++;
                }
            }
            x = v;
        }
        // rep(1,2e5,i){
        //     if(adj[i].size()){
        //         cout<<"i:"<<i<<" : ";
        //         for(auto x:adj[i]) cout<<x<<" ";nl;
        //     }
        // }

        for(int i=1;i<=n;i++){
            vll nv(n+1,-1);
            pos = nv;
            if(dfs(i,i,0,adj,k,0)){}
            else{
                cout<<"i:"<<i;nl;
                cout<<"NO";
                return;
            }
        }
        // cout<<count<<count;nl;
        cout<<"YES";

    }else cout<<"NO";

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
