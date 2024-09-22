using namespace std;
#include<bits/stdc++.h>

#define nl cout<<"\n"
#define ve vector
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
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
#define mp 1000000007
#define pi 3.14159265358979
#define prin(a,len) rep(0,len,i){rep(0,len,j) cout<<a[i][j]<<" ";nl;}nl;
#define printm(a) for(auto &x:a) {cout<<x.first<<" "<<x.second;nl;}


std::map<ll, ll> vis;
std::map<ll,vector<pair<ll,ll>>> adj;
std::map<ll, ll> zors;
ll n,a,b;

void dfs(ll s,ll zor){
    // cout<<"s:"<<s<<" zor:"<<zor;nl;
    // cout<<"zors:";
    // for(auto y:zors) cout<<y.second<<" ";nl;
    vis[s] = 1;
    if(s!=b) zors[zor] = 1;
    for(auto x:adj[s]){
        // cout<<"x:"<<x.first<<" "<<x.second;nl;
        if(!vis[x.first]){
            zors[zor^x.second] = 1;
            vis[x.first] = 1;
            // cout<<"here";nl;
            dfs(x.first,zor^x.second);
        }
    }
}
bool dfs1(ll s,ll zor){
    // cout<<"s:"<<s<<" zor:"<<zor;nl;
    if(s==b){
        if(zor==0) return 1;
        else return 0;
    }
    if(zors[zor]) return 1;
    for(auto x:adj[s]){
        if(!vis[x.first]){
            // zors[x.first] = zor^x.second;
            vis[x.first] = 1;
            if(dfs1(x.first,zor^x.second)) return 1;
        }
    }
    return 0;
}

void solve(){
    cin>>n>>a>>b;
    std::vector<pair<pair<ll,ll>,ll>> vec;
    ll u,v,w;
    rep(0,n-1,i){
        cin>>u>>v>>w;
        vec.push_back({{u,v},w});
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    // for(auto x:adj){
    //     cout<<x.first<<":";
    //     for(auto y:x.second) {cout<<y.first<<" "<<y.second;nl;}
    // }
    dfs(b,0);
    // cout<<"zors:";
    // for(auto x:zors) cout<<x.first<<" ";nl;

    vis.clear();
    if(dfs1(a,0)) cout<<"YES";
    else cout<<"NO";
}
int main(){
   fastio;
   // ++*(int*)0;// crash
   // freopen("in.txt","r",stdin);freopen("outt.txt","w+",stdout);
   tcs{
       // cout<<solve();nl;
       solve();nl;
       vis.clear();
       adj.clear();
       zors.clear();
       // cout<<"Case #"<<TTTT<<": "<<solve();
       // if(i<t-1) nl;
   }
   return 0;
}

/*

*/
