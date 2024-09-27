using namespace std;
#include<bits/stdc++.h>

#define nl cout<<"\n"
#define ve vector
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vc vector<char>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tcs int tttt;cin>>tttt;for(int TTTT=1;TTTT<=tttt;TTTT++)
#define db(n) cout<<"here "<<n<<", "; //for debugging
#define dbb(n) cout<<#n<<" = "<<n<<endl
#define rep(l, r, i) for (ll i = l; i < r; ++i)
#define per(l, r, i) for (ll i = r; i >= l; --i)
#define repp(l, r, i) for (ll i = l; i <= r; ++i)
#define print(a) for(auto i: a) cout<<i<<" "; nl;
#define so(v) sort(v.begin(),v.end())
#define inp(v,n) {int aaaa; for(int iiii=0;iiii<n;iiii++){cin>>aaaa;v.push_back(aaaa);}}

// ll add(char a,char b,char c, char d){
// }
ll gcd(ll a, ll b){if(a<b) swap(a,b);if(b==0) return a;return gcd(a%b,b);}
string solve(){
    ll n,c=0,m1=0,i1=-1,m2=0,i2=-1;
    cin>>n;
    ll a[2][n];
    rep(0,2,i){
        rep(0,n,j){
            cin>>a[i][j];
        }
    }
    rep(0,n,i){
        if(a[1][i]<a[0][i]) return "NO";
        if(a[0][i]>m1) {m1=a[0][i];i1=i}
        if(a[1][i]>m2) {m2=a[1][i];i2=i}
    }

    return "YES";

}
int main(){
   // fastio;
   tcs{
       //TTTT
       // solve();
       cout<<solve();nl;
   }
   return 0;
}

/*
max a ==b || max a<= min b
all a<=b
if(max b)>max a


*/
