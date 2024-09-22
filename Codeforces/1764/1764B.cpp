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

ll solve(){
    int n;
    cin>>n;
    vll v;
    inp(v,n);
    std::map<ll, ll> m;
    ll mi = mll;
    rep(0,n-1,i){
        mi = min(mi,v[i+1]-v[i]);
    }
    cout<<"mi:"<<mi;nl;
    for(ll i = mi;i<=v[n-1];i+=mi){
        m[i] = 1;
    }
    rep(0,n,i){
            m[v[i]] = 1;
            if(i!=n-1)
            m[v[n-1]-v[i]] = 1;
    }


    rep(0,n,i){

    }
    cout<<m.begin()->first;
    return m.size();
}
int main(){
   fastio;
   // ++*(int*)0;// crash
   // freopen("in.txt","r",stdin);freopen("outt.txt","w+",stdout);
   tcs{
       cout<<solve();nl;
       // solve();nl;
       // cout<<"Case #"<<TTTT<<": "<<solve();
       // if(i<t-1) nl;
   }
   return 0;
}

/*

26
7
1 5 6 7 9 10 13
4
3 5 8 10
7
3 6 7 8 10 12 13
3
1 4 8
6
3 7 8 10 11 12
5
2 4 5 10 11
6
3 4 5 7 12 13
9
1 2 3 4 6 9 10 11 12
7
1 3 5 8 9 12 13
7
1 2 5 6 9 12 13
6
3 6 8 9 10 13
7
3 4 6 7 8 9 12
8
1 2 4 6 8 9 10 11
7
2 3 5 6 9 12 13
9
1 3 4 6 7 8 10 11 12
10
1 2 4 5 6 7 8 9 10 13
5
2 3 9 10 13
5
4 6 9 10 11
3
6 7 9
4
5 7 10 13
7
2 5 6 8 9 10 13
9
1 2 5 6 8 9 10 12 13
10
1 3 5 6 7 8 9 11 12 13
5
1 3 4 11 12
7
2 3 5 8 9 10 13
5
4 8 10 11 13








13
8 should be 10
13
7
12
11
13
12
13
13
13
12
11
13
12
13
13
11
9
10  should be 13
13
13
13
12
13
13
*/
