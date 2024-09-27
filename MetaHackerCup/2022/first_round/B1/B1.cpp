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
#define mll 9223372036854775807
#define mp 1000000007
#define prin(a,len) rep(0,len,i){rep(0,len,j) cout<<a[i][j]<<" ";nl;}nl;

ll solve(){
    ll n;
    cin>>n;
    ll x=0,xs=0,a,y=0,ys=0,b;
    rep(0,n,i){
        cin>>a>>b;
        x+=a;
        xs+=a*a;
        y+=b;
        ys+=b*b;
    }
    if(x>=mp) x%=mp;
    if(xs>=mp) xs%=mp;
    if(y>=mp) y%=mp;
    if(ys>=mp) ys%=mp;

    ll q;
    cin>>q;
    ll ax=0,axs=0,ay=0,ays=0;
    rep(0,q,i){
        cin>>a>>b;
        ax+=a;
        axs+=a*a;
        ay+=b;
        ays+=b*b;
    }
    if(ax>=mp) ax%=mp;
    if(axs>=mp) axs%=mp;
    if(ay>=mp) ay%=mp;
    if(ays>=mp) ays%=mp;

    ll ans=0;
    ans+=((q*xs)%mp);
    ans+=((n*axs)%mp);
    ans+=((q*ys)%mp);
    ans+=((n*ays)%mp);
    ans+=2*mp;
    ans-=((2*x*ax)%mp);
    ans-=((2*y*ay)%mp);
    ans%=mp;
    return ans;
}
int main(){
   // fastio;
   // ++*(int*)0;// crash
   freopen("watering_well_chapter_1_input.txt","r",stdin);freopen("outt.txt","w+",stdout);
   int t;
   cin>>t;
   rep(0,t,i){
       // solve();cout<<endl;
       cout<<"Case #"<<i+1<<": "<<solve();
       if(i<t-1) nl;
   }
   return 0;
}

/*


1   store all x,y trees
2   store all x^2, y^2 for trees
3   store sum of all x
4   store sum of all y
5   store sum of all x^2
6   store sum of all y^2

incovinience = (x1-ax)^2 + (x2-ax)^2 + ...
             + (y1-ay)^2 + (y2-ay)^2 + ...
incovinience = x1^2 + x2^2 + ... -2*ax*(x1 + x2 + ...) + (ax^2)*n
             + y1^2 + y2^2 + ... -2*ay*(y1 + y2 + ...) + (ay^2)*n
incovinience = sum(x^2) -2*ax*(sum(x)) + (ax^2)*n + sum(y^2) - 2*ay*(sum(y)) + (ay^2)*n

all incoviniences = q*sum(x^2) - 2*sum(ax)*(sum(x)) + sum(ax^2)*n + q*sum(y^2) - 2*sum(ay)*(sum(y)) + sum(ay^2)*n










*/
