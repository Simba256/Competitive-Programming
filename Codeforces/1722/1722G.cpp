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
void solve(){
    int x=0,n;
    cin>>n;
    rep(0,n-3,i){
        cout<<i<<" ";
        x=x^i;
    }
    cout<<262144<<" "<<524288<<" "<<786432+x;
    return;
}
int main(){
   // fastio;
   tcs{
       //TTTT
       solve();nl;
       // cout<<solve();nl;
   }
   return 0;
}

/*
i,n-1-i

. .
. .
. .
*/
