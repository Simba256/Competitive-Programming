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
#define inp(v,n) {int aaaa; for(int iiii=0;iiii<n;iiii++){cin>>aaaa;v.push_back(aaaa);}}


// ll add(char a,char b,char c, char d){
// }
void solve(){
    ll n;
    cin>>n;
    vll a;
    inp(a,n)
    if(n==1){
        cout<<-1;
        return;
    }
    ll b[n];
    rep(0,n,i){
        b[i]=i+1;
    }
    rep(0,n-2,i){
        if(a[i]==b[i]) swap(b[i],b[i+1]);
    }
    if(b[n-2]==a[n-2] || b[n-1]==a[n-1]) swap(b[n-1],b[n-2]);
    print(b)
    return;
}
int main(){
   // fastio;
   tcs{
       solve();cout<<endl;
       // cout<<solve()<<endl;
   }
   return 0;
}

/*
 jab tak diff print them
 if(a[i]==i+1)

*/
