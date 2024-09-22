using namespace std;
#include<bits/stdc++.h>

#define nl cout<<"\n"
#define ve vector
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vc vector<char>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tcs int tttt;cin>>tttt;for(int TTTT=1;TTTT<=tttt;TTTT++)
#define db(n) cout<<"here "<<n<<", "; //for debugging
#define dbb(n) cout<<#n<<" = "<<n<<"\n"
#define rep(l, r, i) for (int i = l; i < r; ++i)
#define per(l, r, i) for (int i = r; i >= l; --i)
#define repp(l, r, i) for (int i = l; i <= r; ++i)
#define print(a) for(auto i: a) cout<<i<<" "; nl;
#define so(v) sort(v.begin(),v.end())
#define inp(v,n) {int aaaa; for(int iiii=0;iiii<n;iiii++){cin>>aaaa;v.push_back(aaaa);}}
#define mll 9223372036854775807
#define mp 1000000007
#define prin(a,len) rep(0,len,i){rep(0,len,j) cout<<a[i][j]<<" ";nl;}nl;

void solve(){
    ll n,m;
    cin>>n>>m;
    ll f=100000;
    vvll a( n , vll (n, f*10*f+1));
    vvll b(n,vll(n,0));
    ll x,y,z;
    rep(0,m,i){
        cin>>x>>y>>z;
        a[x-1][y-1]=z;
        b[x-1][y-1]=y-1;
    }
    rep(0,n,i){
        a[i][i]=0;
        b[i][i]=i;
    }
    rep(0,n,k){
        rep(0,n,i){
            rep(0,n,j){
                if(a[i][k]+a[k][j]<a[i][j]) {
                    a[i][j]=a[i][k]+a[k][j];
                    b[i][j]=b[i][k];
                }
            }
        }
    }
    vll p;
    ll u=0,v=n-1;
    if(b[u][v]==0) cout<<-1;
    else{
        p.push_back(u+1);
        while(u!=v){
            u=b[u][v];
            p.push_back(u+1);
        }
        for(auto d:p){
            cout<<d<<" ";
        }
    }
}
int main(){
   // fastio;
   // ++*(int*)0;// crash
   // freopen("consecutive_cuts_chapter_2_input.txt","r",stdin);freopen("outt.txt","w+",stdout);
   {
       solve();nl;
       // cout<<"Case #"<<i+1<<": "<<solve();
       // if(i<t-1) nl;
   }
   return 0;
}

/*

*/
