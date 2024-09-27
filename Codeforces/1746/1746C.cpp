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
    int n;
    cin>>n;
    vll a;
    inp(a,n);
    // if(n==1) {cout<<1;nl;return;}
    vll v(n,1);
    std::map<ll, ll> m;
    m[1] = 1;
    ll x=0;
    // print(v);
    rep(1,n,i){
        if(a[i]<a[i-1]) x = a[i-1] - a[i];
        else continue;
        // cout<<"i:"<<i<<" x:"<<x;nl;
        while(m[x]) x++;
        m[x] = i;
        // cout<<"i:"<<i<<" x:"<<x;nl;
        v[i] = x;
    }
    // ll num = n;
    // while(m[num]) num--;
    // if(num==0) num++;
    // m[1] = 0;
    // rep(0,n,i){
    //     if(v[i]==1){
    //         v[i] = num;
    //         m[num] = 1;
    //         while(m[num]) num--;
    //     }
    // }
    print(v);
}
int main(){
   fastio;
   // ++*(int*)0;// crash
   // freopen("in.txt","r",stdin);freopen("outt.txt","w+",stdout);
   tcs{
       // cout<<solve();nl;
       solve();;
       // cout<<"Case #"<<TTTT<<": "<<solve();
       // if(i<t-1) nl;
   }
   return 0;
}

/*
1 3 2 4 5
1 1 2 1 1
2 4 3 5 6
2 5 4 6 7
2 5 6 8 9
2 5 6 9 10
2 5 6 9 11


6 12 13 18 24



1
3
3 1 2
2 3 1
1 3 2
*/
