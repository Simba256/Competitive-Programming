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

string solve(){
    int n,x,f=0,a;
    cin>>n>>x;
    vi v;
    rep(0,2*n,i){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    rep(0,n,i){
        if(v[i]+x>v[i+n]) return "NO";
    }
    return "YES";
}
int main(){
    // fastio;
    tcs{
        cout<<solve()<<endl;
    }
    return 0;
}
