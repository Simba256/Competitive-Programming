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
    ll n,m1=-1,m2=-1,m3=-1,i1,i2,i3,a;
    cin>>n;
    vll v;
    inp(v,n)
    vll nv=v;
    so(v);
    // if(v[0]!=v[1]&&v[1]!=v[2] && *(v.end()-2)!=*(v.end()-3) && *(v.end()-2)!=*(v.end()-1) && ((v[1]==nv[0] && *(v.end()-2)==*(nv.end()-1))||(v[1]==*(nv.end()-1) && *(v.end()-2)==nv[0]))){
    //     return max(*(v.end()-1)-v[0]+*(v.end()-2)-v[2],*(v.end()-1)-v[0]+*(v.end()-3)-v[1]);
    // }
    // else
    return *(v.end()-1)-v[0]+*(v.end()-2)-v[1];
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
