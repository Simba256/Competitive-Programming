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
    ll n,k,s=0,e=0,o=0;
    cin>>n>>k;
    string a;
    cin>>a;
    rep(1,n-1,i){
        o+=a[i]-'0';
        // cout<<"o="<<o;nl;
        if(o==0) s++;
        e++;
        if(a[i]=='1') e=0;
    }
    if(o>0){
        if(a[0]=='1' && a[n-1]=='1') return (o+1)*11;
        if(a[0]=='1' || a[n-1]=='1'){
            if(a[n-1]=='0') {
                if(e<k) return o*11;
                else return 10+(o*11);
            }
            if(a[0]=='0') {
                if(s<k) return o*11;
                else return 1+(o*11);
            }
        }
        if(a[0]=='0' && a[n-1]=='0'){
            if(o>=2 && s+e+2<=k) return (o-1)*11;
            if(e<k) return o*11-10;
            if(s<k) return o*11-1;
            else return o*11;
        }
    }
    else{
        if(a[0]=='1' && a[n-1]=='0' && n-1<=k) return 1;
        else return (a[0]-'0')*10+a[n-1]-'0';
    }
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
