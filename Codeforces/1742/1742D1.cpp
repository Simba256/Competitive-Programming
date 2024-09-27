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


bool coprime(ll a,ll b){
    if(a==b){
        if(a==1) return 1;
        else return 0;
    }
    ll n = 2;
    while((a>1 && n*n<=a) || (b>1 && n*n<=b)){
        if(!(a%n) && !(b%n)) return 0;
        while(!(a%n)) a/=n;
        while(!(b%n)) b/=n;
        n++;
    }
    if(a==1 || b==1) return 1;
    if(a==b) return 0;
    else return 1;
}


ll solve(){
    ll n;
    cin>>n;
    ll a[n];
std::map<ll, ll> m;
    rep(0,n,i){
        cin>>a[i];
        m[a[i]] = i;
    }
    // ll s = 2*n-3;
    for(int s = 2*n-2;s>0;s--){
        ll i,j;
        if(s%2){
            i = s/2;
            j = i+1;
        }
        else{
            i = s/2;
            if(a[i]==1) return 2*i+2;
            else{
                i--;
                j = i+2;
            }
        }
        for(;i>=0 && j<=n-1;i--,j++){
            if(a[i]==1 && a[j]==1) return i+j+2;
            if(m[a[i]]!=i || m[a[j]]!=j) continue;
            if(coprime(a[i],a[j])) return i+j+2;
        }
    }
    return -1;
}
int main(){
   // fastio;
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