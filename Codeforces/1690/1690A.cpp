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


ll fun(){


}
void solve(){
    ll n;
    cin>>n;
    cout<<((n%3)/2)+(n/3)<<" "<<((n+3)/3)+(n%3>0)<<" "<<(n-3)/3;
}
int main(){
   // fastio;
   tcs{
       solve();
       // cout<<solve()<<endl;
       cout<<endl;
   }
   return 0;
}

/*
6 1 2 3
7 1 2 4
8 1 3 4


*/
