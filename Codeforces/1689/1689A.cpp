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


// ll add(char a,char b,char c, char d){
// }
void solve(){
    ll n,m,k,ca=0,cb=0;
    cin>>n>>m>>k;
    string c,d;
    cin>>c>>d;
    vc a,b;
    rep(0,n,i){
        a.push_back(c[i]);
    }
    rep(0,m,i){
        b.push_back(d[i]);
    }
    so(a);
    so(b);
    // print(a)
    // print(b)
    for(int i=0,j=0;i<n && j<m && i+j<n+m;){
        // cout<<"i="<<i<<" j="<<j<<" a[i]="<<a[i]<<" b[j]="<<b[j]<<" ca="<<ca<<" cb="<<cb;nl;
        if(a[i]<b[j]){
            if(ca==k){
                cout<<b[j];
                j++;
                ca=0;
                cb++;
                continue;
            }
            else{
                cout<<a[i];
                ca++;
                cb=0;
                i++;
                continue;
            }
        }
        else{
            if(cb==k){
                cout<<a[i];
                i++;
                cb=0;
                ca++;
                continue;
            }
            else{
                cout<<b[j];
                cb++;
                ca=0;
                j++;
                continue;
            }
        }
    }
    return;
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
