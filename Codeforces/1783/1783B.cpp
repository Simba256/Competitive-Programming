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

void solve(){
    int n;
    cin>>n;
    vvi v1((n+1)/2),v2(n/2);
    int a = ((n*n)/2)+1;
    int b = n%2 ? 1 : -1;
    rep(0,n*n,i){
        if((i/n)%2) v2[i/(2*n)].push_back(a);
        else v1[i/(2*n)].push_back(a);
        // cout<<a<<" ";
        a += b*(i+1);
        b*=(-1);
    }
    rep(0,n,i){
        if(i%2){
            per(0,n-1,j){
                cout<<v2[i/2][j]<<" ";
            }
        }else{
            rep(0,n,j){
                cout<<v1[i/2][j]<<" ";
            }
        }nl;
    }


    // rep(0,n,i){
    //     if(i%2){
    //         per(0,n-1,j){
    //
    //         }
    //     }else{
    //         rep(0,n,j){
    //             v[i].push_back(a);
    //             a += b*
    //         }
    //     }
    // }
}

int main(){
    fastio;
    // ++(int)0;// crash
    //freopen("in.txt","r",stdin);
    //freopen("outt.txt","w+",stdout);
    tcs
    {
        // cout<<"Case #"<<TTTT<<": ";
        solve();
    }
    return 0;
}

/*

3 2
1 4

5 6 4
9 1 7
2 8 3


 9  8 10  7
 3 15  2 11
14  1 16  6
 4 13  5 12

((n*n)+1)/2





13 14 12 15 11
21  5 22  4 16
6  25  1 23 10
20  2 24  3 17
 7 19  8 18  9


19 18 20 17 21 16
 9 29  8 30  7 22
28  3 35  2 31 15
10 34  1 36  6 23
27  4 33  5 32 14
11 26 12 25 13 24


*/
