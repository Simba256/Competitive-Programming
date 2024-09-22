#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef double dd;
typedef long double ldd;
#define tst int tttt;cin>>tttt;for(int TTTT=1;TTTT<=tttt;TTTT++)
#define nl cout<<"\n";
#define forn(a,b) for (int ii=a;ii<b;ii++)
const ll MOD1=1e9+7;
const ll MOD2=998244353;
#define pii pair<int,int>
#define mp(a,b) make_pair(a,b)
#define pb push_back
#define all(a) a.begin(),a.end()
#define vi vector<int>
#define vll vector<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define hhh cout<<"here"<<endl;
#define pi 3.14159265

ll mod=MOD1;
ll po(ll x,ll y,ll mod=mod) {if(y<0)return 0;y%=(mod-1);ll res=1;while(y>0){if(y&1)res=(res*x)%mod;x=(x*x)%mod;y>>=1;}return (res%mod);}
ll gcd(ll a, ll b){if(a<b) swap(a,b);if(b==0) return a;return gcd(a%b,b);}

void solve(){
    ll n;cin>>n;ll x=0;
    vll a(n);forn(0,n)cin>>a[ii];
    for(int i=1;i<n;i++){
        if(a[i]%a[0]!=0){
            cout<<"NO";return;
        }
    }cout<<"YES";return;
}
int main(){
    // fastio
    // ++*(int*)0;// crash
    // freopen("in.txt","r",stdin);freopen("outt.txt","w",stdout);
    tst
    {
        solve();nl;
    }
}
/*

*/
