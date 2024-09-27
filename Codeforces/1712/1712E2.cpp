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


ll lcm(ll a,ll b,ll c){
    ll l=1,d=2;
    while((a>1 && d*d<=a) || (b>1 && d*d<=b) || (c>1 && d*d<=c)){
        // cout<<"a:"<<a<<" b:"<<b<<" c:"<<c;nl;
        while(!(a%d) || !(b%d) || !(c%d)){
            if(!(a%d)) a/=d;
            if(!(b%d)) b/=d;
            if(!(c%d)) c/=d;
            l*=d;
        }
        // cout<<"a:"<<a<<" b:"<<b<<" c:"<<c;nl;
        d++;
    }
    if(a>1){
        if(!(b%a)) b/=a;
        if(!(c%a)) c/=a;
        l*=a;
    }
    if(b>1){
        l*=b;
        if(!(c%b)) c/=b;
    }
    if(c>1) l*=c;
    return l;
}

ll lcm(ll a,ll b){
    ll l=1,d=2;
    while((a>1 && d*d<=a) || (b>1 && d*d<=b)){
        // cout<<"a:"<<a<<" b:"<<b<<" c:"<<c;nl;
        while(!(a%d) || !(b%d)){
            if(!(a%d)) a/=d;
            if(!(b%d)) b/=d;
            l*=d;
        }
        // cout<<"a:"<<a<<" b:"<<b<<" c:"<<c;nl;
        d++;
    }
    if(a>1){
        if(!(b%a)) b/=a;
        l*=a;
    }
    if(b>1) l*=b;
    return l;
}

ll solve(){
    ll x,y;
    cin>>x>>y;
    ll l,m;
    ll sum = 0;
    // cout<<"lcm:"<<lcm(a,b,c);nl;
    rep(x,y,i){
        rep(i+1,y+1,j){
            l = lcm(i,j);
            m = (y/l) - (i-1)/l;
            if(m>0){
                if(l==j) sum+= m-1;
                else sum += m;
            }
        }
    }
    return ((y-x+1)*(y-x)*(y-x-1)/6) - sum;
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

mod 3: 0 1 2, 0 1 2, 1 0 2, 2 0 1 last number not divisible by 3 any of other 2 divisible by 3
mod 2:




if(i and j are divisible by 3)

how many multiples of lcm(a,b);



*/
