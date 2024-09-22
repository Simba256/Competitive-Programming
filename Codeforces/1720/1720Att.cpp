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


ll fun(double e, double f){
    if((e/f)-int(e/f)<0.000000000001) return 1;
    else return 0;

}
ll solve(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==0 && c==0) return 0;
    if(a==0 || c==0) return 1;
    if(a*1.0/b==c*1.0/d) return 0;
    if((a*d)%(b*c)==0) return 1;
    if((b*c)%(a*d)==0) return 1;
    return 2;
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
