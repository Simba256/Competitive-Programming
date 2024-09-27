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


ll add(char a,char b,char c, char d){
    ll sum=0;
    sum+=a+b+c+d-4*'0';
    return min(sum,4-sum);
}
ll solve(){
    ll n;
    cin>>n;
    vector<string> v;
    string a;
    rep(0,n,i){
        cin>>a;
        v.push_back(a);
    }
    ll ans=0;
    // db(1)nl;
    for(int i=n,l=0;i>1;i-=2,l++){
        rep(0,i-1,j){
            // db(2)nl;
            // cout<<"ans="<<ans;nl;
            // cout<<l<<","<<l+j<<" , "<<l+j<<","<<l+n-1<<" , "<<l+n-1<<","<<l+n-1-j<<" , "<<l+n-1-j<<","<<l;nl;
            ans+=add(v[l][l+j],v[l+j][l+i-1],v[l+i-1][l+i-1-j],v[l+i-1-j][l]); //l,l+j  l+j,l+n-1  l+n-1,l+n-1-j  l+n-1-j,l
            // cout<<"ans="<<ans;nl;
        }
    }
    return ans;
    // char b[]=a[0];
    // cout<<fun(v[0][0],v[0][1],v[0][2],v[0][3]);nl;
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
