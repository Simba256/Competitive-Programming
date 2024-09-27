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

vll vis;
ll ct = 0, ct1 = 0;
// bool dfs(ll start,ll parent,vvll adj,vll &vis,ll state){
bool dfs(ll start,ll parent,vvll &adj,ll state){
    ct++;
    // if state == 0 set visited
    // cout<<"start:"<<start;nl;
    if(state==0){
        if(vis[start]==1) return 1;
        vis[start]=1;
        ll ans = 1;
        for(auto x:adj[start]){
            if(vis[x]==1 || x==parent) continue;
            // ans &= dfs(x,start,adj,vis,state);
            ans &= dfs(x,start,adj,state);
        }return ans;
    }else{
        if(vis[start]==0) return 0;
        if(vis[start]==2) return 1;
        vis[start] = 2;
        ll ans = 1;
        for(auto x:adj[start]){
            if(vis[x]==0) return 0;
            if(vis[x]==2 ||  x==parent) continue;
            // ans &= dfs(x,start,adj,vis,state);
            ans &= dfs(x,start,adj,state);

        }
        return ans;
    }

}


bool dfs1(ll origin, ll start, ll parent, vvll &adj, ll val,ll k){
    // cout<<"origin:"<<origin<<" start:"<<start<<" parent:"<<parent<<" val:"<<val<<" K:"<<k;nl;
    ct1++;
    assert(ct1<1000000);

    vis[start] = 1;
    if(start==origin){
        if(val==k){
            // cout<<"here";
            return 1;
        }
        if(val==0){
            ll ans = 1;
            for(auto x:adj[start]){
                if(x==parent || vis[x]==1) continue;
                ans &= dfs1(origin,x,start,adj,val+1,k);
            }return ans;
        }else return 0;
    }else{
        if(val==k) return 0;
        ll ans = 1;
        for(auto x:adj[start]){
            if(x==parent || vis[x]==1) continue;
            ans &= dfs1(origin,x,start,adj,val+1,k);
        }return ans;
    }
}

void solve(ll tt, ll ttt){

    ll n,m;
    cin>>n>>m; // number of vertices and edges

    vll ver(n+1);  // number of edges of each vertex
    vvll adj(n+1);

    ll u,v;
    rep(0,m,i){
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
        ver[u]++;
        ver[v]++;
    }

    ll k = sqrt(n);
    if(k*k!=n || k*(k+1)!=m){
        cout<<"NO";nl;
        return;
    }
    // if(tt==7 && ttt==7) {cout<<"NO";return;}

    ll four = 0, two = 0;
    for(int i=1;i<=n;i++){
        if(ver[i]==4) four++;
        else if(ver[i]==2) two++;
        else{
            cout<<"NO";nl;
            return;
        }
    }
    if(four!=k){
        cout<<"NO";nl;
        return;
    }

    ll ttttt = 0, fffff = 0;
    for(int i=1;i<=n;i++){
        ttttt = 0;
        fffff = 0;
        for(auto x:adj[i]){
            if(ver[x]==2) ttttt++;
            if(ver[x]==4) fffff++;
        }
        if(ver[i]==2){
            if((ttttt==1 && fffff==1)||(ttttt==2)) continue;
            else{
                cout<<"NO";nl;
                return;
            }
        }if(ver[i]==4){
            if(ttttt==2 && fffff==2) continue;
            else{
                cout<<"NO";nl;
                return;
            }
        }else{
            cout<<"NO";nl;
            return;
        }
    }

    // adj2 has main cycle adj3 has everything else
    vvll adj2(n+1), adj3(n+1);
    for(int i=1;i<=n;i++){
        for(auto x:adj[i]){
            if(ver[x]==4 && ver[i]==4) adj2[i].pb(x);
            if(ver[x]==2 || ver[i]==2) adj3[i].pb(x);
        }
    }
    // cout<<"adj";
    // for(int i=1;i<=n;i++){
    //     cout<<i<<" : ";
    //     print(adj[i]);
    // }nl;

    vll available; // available = vertices in main cycle
    ll in2 = 1;
    while(in2<=n){
        // cout<<"here"<<" in2="<<in2;nl;
        while(in2<=n && adj2[in2].size()==0) in2++;
        if(in2==n+1) break;
        available.pb(in2);
        in2++;
    }

    // just a safety check that everyone has only 2 edges
    for(auto x:adj2){
        if(x.size()==0||x.size()==2) continue;
        else{
            cout<<"NO";nl;
            return;
        }
    }

    vis.resize(n+1);
    fill(all(vis),0);

    dfs(available[0],0,adj2,0);  // identifies the nodes in main cycle

    for(auto x:available){
        if(dfs(x,0,adj2,1)) continue;
        else cout<<"NO";nl;
        return;
    }


    //
    // cout<<"adj3\n";
    // for(int i=1;i<=n;i++){
    //     cout<<i<<" : ";
    //     print(adj3[i]);
    // }nl;

    fill(all(vis),0);

    for(int i=1;i<=n;i++){
        if(vis[i]==1) continue;
        if(dfs1(i,i,0,adj3,0,k)) continue; // checks each cycle's size
        else{
            cout<<"NO";nl;
            return;
        }
    }

    cout<<"YES\n";

}

int main(){
    fastio;
    // ++(int)0;// crash
    //freopen("in.txt","r",stdin);
    //freopen("outt.txt","w+",stdout);
    tcs
    {
        // cout<<"Case #"<<TTTT<<": ";
        solve(tttt,TTTT);
    }

    return 0;
}

/*





*/
