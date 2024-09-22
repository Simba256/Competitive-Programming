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


ll fun(string a[],int i,int n){
    ll f=1,si,sj,sk,ff=1;
    si=a[i].size();
    rep(0,n,j){
        f=1;
        sj=a[j].size();
        if(j==i) continue;
        if(si<=sj) continue;
        rep(0,sj,k){
            if(a[j][k]!=a[i][k]) {
                f=0;
                break;
            }
        }
        if(f==1){
            rep(0,n,k){
                ff=1;
                sk=a[k].size();
                if(k==i) continue;
                if(sk!=si-sj) continue;
                rep(0,sk,l){
                    if(a[i][sj+l]!=a[k][l]) {
                        ff=0;
                        break;
                    }
                }
                if(ff==1) return ff;
            }
        }
    }
    return 0;
}
void solve(){
    ll n;
    cin>>n;
    string a[n];
    rep(0,n,i){
        cin>>a[i];
    }
    rep(0,n,i){
        cout<<fun(a,i,n);
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
