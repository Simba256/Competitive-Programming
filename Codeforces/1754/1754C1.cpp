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
    int a[n],z=0;
    rep(0,n,i){
        cin>>a[i];
        if(a[i]==0) z++;
    }
    if((n-z)%2){
        cout<<-1;nl;
        return;
    }
    int c=0;
    vi v;
    int j=0,l=0,r=0;
    // how many pairs of 00,01,0-1,10,11,1-1,-10,-11,-1-1
    // how many pairs of 11,1-1,-11,-1-1
    while(j<n){
        while(j<n && a[j]==0){
            c++;
            v.push_back(j+1);
            v.push_back(j+1);
            j++;
            // db(1);
        }
        // db(2);
        if(j==n) break;
        l = j;
        j++;
        while(j<n && a[j]==0) j++;
        if(j==n) r = j-1;
        else r = j;
        if((a[l]==a[r] && (r-l)%2)||(a[l]!=a[r] && (r-l)%2==0)){
            c++;
            v.push_back(l+1);
            v.push_back(r+1);
        }
        else{
            c++;
            v.push_back(l+1);
            v.push_back(l+1);
            c++;
            v.push_back(l+2);
            v.push_back(r+1);
        }
        j++;
    }
    cout<<c;nl;
    rep(0,c,i){
        cout<<v[2*i]<<" "<<v[2*i+1];nl;
    }
}
int main(){
   fastio;
   // ++*(int*)0;// crash
   // freopen("in.txt","r",stdin);freopen("outt.txt","w+",stdout);
   tcs{
       // cout<<solve();nl;
       solve();
       // cout<<"Case #"<<TTTT<<": "<<solve();
       // if(i<t-1) nl;
   }
   return 0;
}

/*

*/
