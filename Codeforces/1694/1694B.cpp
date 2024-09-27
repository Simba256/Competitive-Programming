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
}
ll solve(){
    ll n;
    cin>>n;
    string a;
    cin>>a;
    ll l=1;
    ll sum=n;
    cout<<"sum="<<sum;nl;
    rep(0,n-1,i){
        if(a[i]!=a[i+1]) l++;
        else{
            sum+=(l*(l+1)*1.0/2)-l;
            cout<<"sum="<<sum;nl;
            l=1;
        }
    }
    sum+=(l*(l+1)*1.0/2)-l;
    cout<<"sum="<<sum;nl;
    return sum;
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
