using namespace std;
#include<bits/stdc++.h>

#define nl cout<<"\n"
#define ve vector
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vc vector<char>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define tcs int tttt;cin>>tttt;for(int TTTT=1;TTTT<=tttt;TTTT++)
#define db(n) cout<<"here "<<n<<", "; //for debugging
#define dbb(n) cout<<#n<<" = "<<n<<endl
#define rep(l, r, i) for (int i = l; i < r; ++i)
#define per(l, r, i) for (int i = r; i >= l; --i)
#define repp(l, r, i) for (int i = l; i <= r; ++i)
#define print(a) for(auto i: a) cout<<i<<" "; nl;
#define inp(a) int a; cin>>a;

int solve(){
    map<int, pair<int , int>> m;
    int n,m,a;
    cin>>n>>m;
    rep(1,n+1,i){
        cin>>a;
        m[i].first=a;
    }
    int x,y;
    rep(0,m,i){
        cin>>x>>y;
        m[x].second++;
        m[y].second++;
    }
    if(m%2==0) return 0;
    else sort map wrt happiness
    if


}

int main(){
    // fastio;
    tcs{
        // cout<<i<<"    ";
        cout<<solve()<<endl;
    }
    return 0;
}
