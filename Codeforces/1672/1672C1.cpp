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



int solve(){
    int n,c=0,is=-1,ie=-1,s=0,d;
    cin>>n;
    int a[n];
    cin>>a[0];
    vi v;
    rep(1,n,i){
        cin>>a[i];
        if(a[i]==a[i-1]){
            if(is==-1) is=i-1;
            ie=i;
        }
    }
    return ie-is+1<3 ? 0:ie-is+1==3?1:ie-is-2;
}
int main(){
   fastio;
   tcs{
       //TTTT
       // solve();nl;
       cout<<solve();nl;
   }
   return 0;
}

/*
n   arr
3   1 1 1                       1
4   1 1 1 1                     1
5   1 1 1 1 1                   2
6   1 1 1 1 1 1                 3
7   1 1 1 1 1 1 1               4
8   1 2 3 4 5 6 6 1             5
9   1 1 1 1 1 1 1 1 1           6
10  1 1 1 1 1 1 1 1 1 1         7
11
12
13
14
15

*/
