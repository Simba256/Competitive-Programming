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
#define inp(v,n) int a; for(int i=0;i<n;i++){cin>>a;v.push_back(a);}


ll fun(ll ma[]){


}
ll solve(){
    ll n,s,su=0,a,f=0,l=0,m=-1;
    cin>>n>>s;
    ll v[n];
    cin>>a;
    su+=a;
    v[0]=a;
    l++;
    ll *ptr=v;
    if(su==s && l>m) m=l;
    // cout<<"*ptr="<<*ptr;nl;
    rep(1,n,i){
        cin>>a;
        su+=a;
        v[i]=a;
        l++;
        while(su>s){
            // cout<<"*ptr="<<*ptr;nl;
            su-=*ptr;
            l--;
            ptr++;
            // v.erase(v.begin());
        }
        if(su==s && l>m) m=l;
    }
    // cout<<"n="<<n<<" m="<<m;nl;
    return m==-1?m:n-m;
}
int main(){
   // fastio;
   tcs{
       // solve();
       cout<<solve()<<endl;
       // cout<<endl;
   }
   return 0;
}

/*



*/
