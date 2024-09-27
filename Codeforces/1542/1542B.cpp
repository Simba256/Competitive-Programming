using namespace std;
#include<bits/stdc++.h>
#include <cstdio>

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

bool na(ll n,ll a){
    while(n>a){
        if(n%a==0) n/=a;
        else return 0;
    }
    if(n==a) return 1;
}


bool fun(ll n,ll a,ll b){
    if(n<a || n<b+1) {
        return 0;
    }
    if(n%b==1 || (n!=1 && na(n,a))) {
        // cout<<"n="<<n;nl;
        return 1;
    }
    else if(n%a==0) {
        // cout<<"n="<<n;nl;
        if(fun(n/a,a,b)) return 1;
        else return fun(n-b,a,b);
    }
    else {
        return fun(n-b,a,b);
    }
}

string solve(){
    ll n,a,b;
    cin>>n>>a>>b;
    // ll x=fun(n,a,b);
    // return x;
    // if(fun(n,a,b)) return "YES";
    // else return "NO";

    while(n>=a || n>b){
        if(n%a==0) n/=a;
        if(a!=1){
            if(na(n,a)) return "YES";
        }
        if(n%b==1) return "YES";
        n-=b;
    }
    return "NO";
}
int main(){
   // fastio;
   // ++*(int*)0;// crash
   // freopen("consecutive_cuts_chapter_2_input.txt","r",stdin);freopen("outt.txt","w+",stdout);
   tcs{
       cout<<solve();nl;
       // cout<<"Case #"<<i+1<<": "<<solve();
       // if(i<t-1) nl;
   }
   return 0;
}

/*

*/
