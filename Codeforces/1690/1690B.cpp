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
string solve(){
    ll n,d=-1,m=-1;
    cin>>n;
    vll a,b;
    inp(a,n)
    inp(b,n)
    rep(0,n,i){
        if(b[i]>0){
            if(d==-1){
                if(a[i]-b[i]>=0) {
                    d=a[i]-b[i];
                    if(d<m) return "NO";
                }
                else return "NO";
            }
            else if(a[i]-b[i]==d) continue;
            else return "NO";
        }
        else if(d==-1){
            if(a[i]>m) m=a[i];
            else continue;
        }
        else{
            if(a[i]>d) return "NO";
            else continue;
        }
    }
    return "YES";
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
