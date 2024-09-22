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
    ll n,m,c=0;
    std::map<int, int> m;
    cin>>n>>m;
    ll a[n];
    cin>>a[0];
    m[c]++;
    rep(1,n,i){
        cin>>a[i];
        if(a[i]!=a[i-1]) c++;
        m[c]++;
    }
    ll x,y,ans=-1;
    rep(0,m,i){
        cin>>x>>y;
        if((a[x-1]==y){
            cout<<ans;nl;
        }
        else if(x>0 && x<n-1){
            if(a[x-1]!=a[x-2] && a[x-1]!=a[x] && y!=a[x-2] && y!=a[x])) && ans!=-1){
                cout<<ans;nl;
            }
        }
        if(a[x-2])
        a[x-1]=y;
    }
    if(c==n-1) return (n+2)*(n+1)*n/6;
}
int main(){
   // fastio;
   tcs{
       // solve();cout<<endl;
       cout<<solve()<<endl;
   }
   return 0;
}

/*


*/
