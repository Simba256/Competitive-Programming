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


ll twos(ll a){
    ll c=0;
    while(a%2==0){
        a/=2;
        c++;
    }
    return c;
}
ll fives(ll a){
    ll c=0;
    while(a%5==0){
        a/=5;
        c++;
    }
    return c;
}

ll power(ll a,ll b){
    ll n = 1;
    rep(0,b,i) n*=a;
    return n;
}


ll solve(){
    ll n,m;
    cin>>n>>m;
    ll t = twos(n);
    ll f = fives(n);
    ll c;
    if(t>f){
        c = t-f;
        ll num = 1;
        rep(0,c,i){
            num*=5;
            if(num>m){
                num/=5;
                break;
            }
        }
        while(num*10<=m){
            num*=10;
        }
        ll k=1;
        while(num*(k+1)<=m) k++;
        // cout<<"c:"<<c<<" num:"<<num<<" k:"<<k;nl;
        return n*num*k;
    }
    else{
        c = f-t;
        ll num = 1;
        rep(0,c,i){
            num*=2;
            if(num>m){
                num/=2;
                break;
            }
        }
        while(num*10<=m){
            num*=10;
        }
        ll k = 1;
        while(num*(k+1)<=m) k++;
        // cout<<"c:"<<c<<" num:"<<num<<" k:"<<k;nl;
        return n*num*k;
    }


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
