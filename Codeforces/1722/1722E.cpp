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
void solve(){

    ll n,q;
    cin>>n>>q;
    ll a,b,ma=0,mb=0;
    std::vector<std::vector<int> > m(1002, vi(1002,0));
    rep(0,n,i){
        cin>>a>>b;
        if(a>ma) ma=a;
        if(b>mb) mb=b;
        m[a][b]++;
    }

    std::vector<std::vector<ll>> lt(ma+2, vll(mb+2,0));

    rep(1,ma+2,i){
        rep(1,mb+2,j){
            lt[i][j]=(lt[i-1][j]+lt[i][j-1]-lt[i-1][j-1]+m[i][j]*i*j);
        }
    }

    ll c,d,x=0;
    rep(0,q,i){
        cin>>a>>b>>c>>d;
        if(a>=ma || b>=mb) {cout<<0;nl;continue;}
        if(c>ma) c=ma+1;
        if(d>mb) d=mb+1;

        cout<<lt[c-1][d-1]-lt[c-1][b]-lt[a][d-1]+lt[a][b];nl;

    }
    return;

}
int main(){
   fastio;
   tcs{
       //TTTT
       solve();
       // cout<<solve();nl;
   }
   return 0;
}

/*
i,n-1-i

. .
. .
. .
*/
