using namespace std;
#include<bits/stdc++.h>

#define nl cout<<"\n"
#define ve vector
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
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
#define mp 1000000007
#define pi 3.14159265358979
#define prin(a,len) rep(0,len,i){rep(0,len,j) cout<<a[i][j]<<" ";nl;}nl;
#define printm(a) for(auto &x:a) {cout<<x.first<<" "<<x.second;nl;}



bool check(string a[],ll i,ll j,ll n,ll m){
    if(a[i][j]=='.') return 1;
    ll s = 0;
    if(i<n-1 && a[i+1][j]=='*') s++;
    if(i>0 && a[i-1][j]=='*') s++;
    if(j<m-1 && a[i][j+1]=='*') s++;
    if(j>0 && a[i][j-1]=='*') s++;
    if(s>2) return 0;
    ll c = 0;
    if(i<n-1 && j<m-1 && a[i+1][j+1]=='*') c++;
    if(i>0 && j>0 && a[i-1][j-1]=='*') c++;
    if(i>0 && j<m-1 && a[i-1][j+1]=='*') c++;
    if(i<n-1 && j>0 && a[i+1][j-1]=='*') c++;
    if(c>1) return 0;
    if(i>0 && i<n-1 && a[i-1][j]=='*' && a[i+1][j]=='*') return 0;
    if(j>0 && j<m-1 && a[i][j-1]=='*' && a[i][j+1]=='*') return 0;
    if((s==2 && c==0)) return 1;
    if(s==1 && c==1){
        if(i<n-1 && a[i+1][j]=='*'){
            if(i<n-1 && j<m-1 && a[i+1][j+1]=='*') return 1;
            if(i>0 && j>0 && a[i-1][j-1]=='*') return 0;
            if(i>0 && j<m-1 && a[i-1][j+1]=='*') return 0;
            if(i<n-1 && j>0 && a[i+1][j-1]=='*') return 1;
        }
        if(i>0 && a[i-1][j]=='*'){
            if(i<n-1 && j<m-1 && a[i+1][j+1]=='*') return 0;
            if(i>0 && j>0 && a[i-1][j-1]=='*') return 1;
            if(i>0 && j<m-1 && a[i-1][j+1]=='*') return 1;
            if(i<n-1 && j>0 && a[i+1][j-1]=='*') return 0;
        }
        if(j<m-1 && a[i][j+1]=='*'){
            if(i<n-1 && j<m-1 && a[i+1][j+1]=='*') return 1;
            if(i>0 && j>0 && a[i-1][j-1]=='*') return 0;
            if(i>0 && j<m-1 && a[i-1][j+1]=='*') return 1;
            if(i<n-1 && j>0 && a[i+1][j-1]=='*') return 0;
        }
        if(j>0 && a[i][j-1]=='*'){
            if(i<n-1 && j<m-1 && a[i+1][j+1]=='*') return 0;
            if(i>0 && j>0 && a[i-1][j-1]=='*') return 1;
            if(i>0 && j<m-1 && a[i-1][j+1]=='*') return 0;
            if(i<n-1 && j>0 && a[i+1][j-1]=='*') return 1;
        }
    }
    else return 0;
}


string solve(){
    ll n,m;
    cin>>n>>m;
    string a[n];
    rep(0,n,i){
        cin>>a[i];
    }
    if(n<2 || m<2) return "NO";
    rep(0,n,i){
        rep(0,m,j){
            if(check(a,i,j,n,m)) continue;
            else return "NO";
        }
    }
    return "YES";
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

*/
