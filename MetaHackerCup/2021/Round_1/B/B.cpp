using namespace std;
#include<bits/stdc++.h>
#include <cstdio>

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
#define dbb(n) cout<<#n<<" = "<<n<<"\n"
#define rep(l, r, i) for (int i = l; i < r; ++i)
#define per(l, r, i) for (int i = r; i >= l; --i)
#define repp(l, r, i) for (int i = l; i <= r; ++i)
#define print(a) for(auto i: a) cout<<i<<" "; nl;
#define so(v) sort(v.begin(),v.end())
#define inp(v,n) {int aaaa; for(int iiii=0;iiii<n;iiii++){cin>>aaaa;v.push_back(aaaa);}}


// ll add(char a,char b,char c, char d){
// }
void solve(){
    ll n,m,a,b;
    cin>>n>>m>>a>>b;
    if(a<n+m-1||b<n+m-1) {cout<<"Impossible";return;}
    cout<<"Possible";nl;
    rep(0,n,i){
        rep(0,m,j){
            if(i==0 && j==0) cout<<a-(n+m-2)<<" ";
            else if(i==n-1 && j==0) cout<<b-(n+m-2)<<" ";
            else cout<<1<<" ";
        }if(i<n-1) nl;
    }
}
int main(){
   // fastio;
   // ++*(int*)0;// crash
   freopen("traffic_control_input.txt","r",stdin);freopen("outt.txt","w+",stdout);
   int t;
   cin>>t;
   rep(0,t,i){
       // solve();cout<<endl;
       cout<<"Case #"<<i+1<<": ";solve();nl;
   }
   return 0;
}

/*


F X X F X F O O X F
3 0 0 3 0 3 1 1 2 3




*/
