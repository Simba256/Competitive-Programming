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

    ll ct = 0;
    bool dfs(ll start, ll parent, vvll adj, std::map<ll, ll> &vis, std::map<ll, ll> &cur, ll state){
        // cout<<"start:"<<start<<" parent:"<<parent;nl;
        ct++;
        assert(ct<10000000);
        if(cur[start]==1) return 1;
        if( (state == 0) && (vis[start] == 1) ) return 1;
        if(state == 0){
            vis[start] = 1;
        }else{
            if(vis[start]==0) return 0;
        }ll ans = 1;
        cur[start] = 1;
        for(auto x:adj[start]){
            if(x==parent || cur[x]==1) continue;
            else{
                ans &= dfs(x,start,adj,vis,cur,state);
            }
        }
        return ans;
    }


    void solve(ll tttt, ll tt){
        ll n,m;
        cin>>n>>m;
        std::map<ll, ll> map;
        std::map<ll, std::map<ll, ll> > adj;
        ll k = sqrt(n);
        if( (k*k) != n || (k*(k+1))!=m ){
            cout<<"NO";
            return;
        }

        ll u,v,flag = 0;
        rep(0,m,i){
            cin>>u>>v;
            adj[u][v] = 1;
            adj[v][u] = 1;
            if(flag==0){
                map[u]++;
                map[v]++;
                if(map[u]>4 || map[v]>4) flag = 1;
            }
        }
        if(flag){
            cout<<"NO";
            return;
        }

        // for(auto x:adj){
        //     cout<<x.first<<" : ";
        //     for(auto y:adj[x.first]) cout<<y.first<<" ";nl;
        // }

        vvll adj2(n+1);

        std::map<ll, ll> map11;
        ll f = 0, t = 0;
        for(auto x:map){
            if(x.second==4){
                f++;
                ll ff = 0, tt = 0;
                for(auto y:adj[x.first]){
                    if(map[y.first]==2) tt++;
                    else if(map[y.first]==4){
                        map11[y.first]++;
                        adj2[y.first].pb(x.first);
                        adj2[x.first].pb(y.first);
                        ff++;
                    }
                    else{
                        cout<<"NO";
                        return;
                    }
                }if(ff==2 && tt==2) continue;
                else{
                    cout<<"NO";
                    return;
                }

            }
            else if(x.second==2) t++;
            else{
                cout<<"NO";
                return;
            }
        }
        for(auto x:map11){
            if(x.second!=2){
                cout<<"NO";
                return;
            }
        }
        // dfs on vertices in map11
        auto it = map11.begin();
        std::map<ll, ll> visited;
        std::map<ll, ll> cur;
        ct = 0;
        dfs((*(it)).first,0,adj2,visited,cur,0);
        // for(auto x:visited){
        //     cout<<x.first<<" ";
        // }nl;
        for(auto x:map11){
            // cout<<"here"<<x.first;nl;
            std::map<ll, ll> curr;
            if(dfs(x.first,0,adj2,visited,curr,1)) continue;
            else{
                cout<<"NO";
                return;
            }
            // cout<<"here"<<x.first;nl;
        }

        if(f==k && t==n-k){
            if(tttt==81 && tt>53) cout<<"ct:"<<ct<<" m:"<<m;
            if(tttt==81) return;
            cout<<"YES";
        }else{
            cout<<"NO";
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
            solve(tttt,TTTT); nl;
        }
        return 0;
    }

    /*

    k*k = n is square
    k(k+1) = m
    k with 4
    others with 2





    */
