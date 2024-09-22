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


ll fun(vector<int> v,int n,int j){

}

ll solve(){
    ll n,a,k,c=0;
    cin>>n>>k;
    rep(0,k,i){
        cin>>a;
        if(a>k) c++;
        // cout<<k<<" "<<a<<endl;
    }
    rep(k,n,i){
        cin>>a;
    }
    return c;
}
int main(){
    // fastio;
    tcs{
        cout<<solve()<<endl;
        // cout<<endl;
    }
    return 0;
}

/*



*/
