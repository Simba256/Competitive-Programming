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


ll fun(string a[],int l[],int i,int n){
    // ll f=1,si,sj,sk,ff=1;
    // si=a[i].size();
    rep(0,n,j){
        if(l[j]<l[i]){
            rep(j,n,k){
                if(l[k]+l[j]==l[i]){
                    if(a[k]+a[j]==a[i]) return 1;
                    if(a[j]+a[k]==a[i]) return 1;
                }
            }
        }
    }
    return 0;
}
void solve(){
    ll n;
    cin>>n;
    string a[n];
    int l[n];
    rep(0,n,i){
        cin>>a[i];
        l[i]=a[i].size();
    }
    rep(0,n,i){
        cout<<fun(a,l,i,n);
    }
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


*/
