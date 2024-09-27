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
#define rep(l, r, i) for (int i = l; i < r; ++i)
#define per(l, r, i) for (int i = r; i >= l; --i)
#define repp(l, r, i) for (int i = l; i <= r; ++i)
#define print(a) for(auto i: a) cout<<i<<" "; nl;
#define so(v) sort(v.begin(),v.end())
#define inp(v,n) {int aaaa; for(int iiii=0;iiii<n;iiii++){cin>>aaaa;v.push_back(aaaa);}}


// ll add(char a,char b,char c, char d){
// }
ll solve(){
    ll n,q;
    cin>>n>>q;
    ll a[n]={0};
    rep(0,n,i){
        a[i]=1073741823;
    }
    ll x,y,z;
    rep(0,q,i){
        cin>>x>>y>>z;
        a[x-1]=a[x-1]&z;
        a[y-1]=a[y-1]&z;
    }
    print(a);
}
int main(){
   // fastio;

       solve();cout<<endl;
       // cout<<solve()<<endl;

   return 0;
}

/*


*/
