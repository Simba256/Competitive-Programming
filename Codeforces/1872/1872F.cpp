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


struct ComparePairs {
    bool operator()(const std::pair<long long, long long>& a, const std::pair<long long, long long>& b) const {
        return a.first < b.first;  // Max-heap based on the first element of the pair
    }
};

void printPriorityQueue(std::priority_queue<std::pair<long long, long long>, std::vector<std::pair<long long, long long>>, ComparePairs> pq) {
    while (!pq.empty()) {
        std::pair<long long, long long> pair = pq.top();
        std::cout << "(" << pair.first << ", " << pair.second << ") ";
        pq.pop();
    }
    std::cout << "\n";
}
void solve(){
    ll n;
    cin>>n;
    vll a(n+1), c(n+1), p(n+1);
    rep(1,n+1,i){
        cin>>a[i];
        p[a[i]]++;
    }// cout<<"heree1";nl;
    rep(1,n+1,i) cin>>c[i];
    queue<ll> ze;
    vll rem(n+1);
    rep(1,n+1,i){
        if(!p[i]) ze.push(i);
    }ll ans = 0, remaining = n;
    // cout<<"here";
    // for(int i=0;i<5;i++){
    //     cout<<ze.front()<<" ";
    //     ze.push(ze.front());
    //     ze.pop();
    // }
    while(!ze.empty()){
        // cout<<"ze.size(): "<<ze.size();nl;
        // for(int i=0;i<ze.size();i++){
        //     cout<<ze.front()<<" ";
        //     ze.push(ze.front());
        //     ze.pop();
        // }nl;

        p[a[ze.front()]]--;
        if(!p[a[ze.front()]]) ze.push(a[ze.front()]);
        if(rem[a[ze.front()]]) ans += ze.front();
        else ans += 2*ze.front();
        rem[ze.front()] = 1;
        cout<<ze.front()<<" ";
        ze.pop();
        remaining--;
    }while(remaining){// cout<<"rem:"<<remaining;nl;
        ll x = -1;
        rep(1,n+1,i){
            if(rem[i]) continue;
            x = i;
            break;
        }priority_queue<pair<ll,ll>,ve<pair<ll,ll>>, ComparePairs> q;
        q.push({c[x],x});
        rem[x] = 1;
        while(!rem[a[x]]){
            x = a[x];
            q.push({c[x],x});
            rem[x] = 1;
        }// ll mi = c[q.front()];
        printPriorityQueue(q);
        while(!q.empty()){
            // mi = min(mi,c[q.front()]);
            // ans += 2*c[q.front()];
            remaining--;
            cout<<q.top().second<<" ";
            q.pop();
        }// ans -= mi;
    }// cout<<ans;

    

}

int main(){
    // fastio;
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
