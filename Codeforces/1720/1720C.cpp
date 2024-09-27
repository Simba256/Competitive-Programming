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


ll fun(){


}
ll solve(){
    ll n,m,ma=0,ones=0;
    cin>>n>>m;
    string a[n];
    rep(0,n,i){
        cin>>a[i];
        rep(0,m,j){
            // cin>>a[i][j];
            ones+=a[i][j]-'0';
        }
    }
    ll b;
    rep(0,n,i){
        rep(0,m,j){
            if(i!=n-1 && j!=m-1){
                b=a[i][j]+a[i+1][j]+a[i][j+1]+a[i+1][j+1]-(4*('0'));
                if(4-b>ma) ma=4-b;
            }
            if(i!=0 && j!=m-1){
                b=a[i][j]+a[i-1][j]+a[i][j+1]+a[i-1][j+1]-(4*('0'));
                if(4-b>ma) ma=4-b;
            }
            if(i!=n-1 && j!=0){
                b=a[i][j]+a[i][j-1]+a[i+1][j]+a[i+1][j-1]-(4*('0'));
                if(4-b>ma) ma=4-b;
            }
            if(i!=0 && j!=0){
                b=a[i][j]+a[i-1][j]+a[i][j-1]+a[i-1][j-1]-(4*('0'));
                if(4-b>ma) ma=4-b;
            }
        }
    }
    // cout<<"ones="<<ones<<" ma="<<ma;nl;
    if(ma==1) return ones-1;
    else if(ma==0) {
        if(ones==0) return 0;
        else return ones-2;
    }
    else return ones;
}
int main(){
   // fastio;
   tcs{
       // solve();cout<<endl;
       cout<<solve()<<endl;
   }
   return 0;
}

/*


*/
