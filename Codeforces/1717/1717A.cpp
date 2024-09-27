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
#define rep(l, r, i) for (ll i = l; i < r; ++i)
#define per(l, r, i) for (ll i = r; i >= l; --i)
#define repp(l, r, i) for (ll i = l; i <= r; ++i)
#define print(a) for(auto i: a) cout<<i<<" "; nl;
#define so(v) sort(v.begin(),v.end())
#define inp(v,n) {int aaaa; for(int iiii=0;iiii<n;iiii++){cin>>aaaa;v.push_back(aaaa);}}

// ll add(char a,char b,char c, char d){
// }
ll gcd(ll a, ll b){if(a<b) swap(a,b);if(b==0) return a;return gcd(a%b,b);}
ll solve(){
    ll n,c=0,a=0,g=0;
    cin>>n;
    rep(1,n,i){
        for(int j=1;j*(j+i)<=3*i*i;j++){
            a=j;
            g=gcd(i,j);
            if(j*(j+i)<=3*g*g) c+=2;
            cout<<"i="<<i<<" j="<<j<<" c="<<c;nl;
        }
        c+=(n-i-a)*2;
    }
    return n*n-c;

}
int main(){
   // fastio;
   tcs{
       //TTTT
       // solve();
       cout<<solve();nl;
   }
   return 0;
}

/*
1   n-3
2   if(i%2) (n-2)/2, if(i%2==0) n-(3*2+1)
3   if(n%3==0)
4

diff   gcd    lcm           lcm/gcd    quantity
1       1      ab           ab          n-1
2       1|2    ab|ab/2      ab|ab/4     n-2
3       1|3    ab|ab/3      ab|ab/9     n-3
.
.
.
n       1|n    ab|ab/n      ab|ab/n^2   n-n
*/
