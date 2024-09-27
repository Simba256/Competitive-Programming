using namespace std;
#include<bits/stdc++.h>

#define nl cout<<"\n"
#define ve vector
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tcs int tttt;cin>>tttt;for(int TTTT=1;TTTT<=tttt;TTTT++)
#define db(n) cout<<"here "<<n<<", "; //for debugging
#define dbb(n) cout<<#n<<" = "<<n<<nl;
#define rep(l, r, i) for (int i = l; i < r; ++i)
#define per(l, r, i) for (int i = r; i >= l; --i)
#define repp(l, r, i) for (int i = l; i <= r; ++i)
#define print(a) for(auto i: a) cout<<i<<" "; nl;
#define so(v) sort(v.begin(),v.end())
#define sod(a) sort(a.begin(), a.end(), greater<int>())
#define inp(v,n) {int aaaa; for(int iiii=0;iiii<n;iiii++){cin>>aaaa;v.push_back(aaaa);}}
#define mll 9223372036854775807
#define mp 1000000007
#define pi 3.14159265358979
#define prin(a,len) rep(0,len,i){rep(0,len,j) cout<<a[i][j]<<" ";nl;}nl;
#define printm(a) for(auto &x:a) {cout<<x.first<<" "<<x.second;nl;}

void solve(){
    ll n,c,d;
    cin>>n>>c>>d;
    ll s=0,m=0;
    vll a(n);
    rep(0,n,i){
        cin>>a[i];
        if(a[i]>m) m=a[i];
        s+=a[i];
    }
    if(m*d==c){
        cout<<0;return;
    }
    if(m*d<c){
        cout<<"Impossible";return;
    }

    sod(a);
    ll b[n];
    b[0] = a[0];
    rep(1,n,i){
        b[i] = b[i-1] + a[i];
    }
    // cout<<"a:";
    // print(a);
    // cout<<"b:";
    // print(b);
    if((d<n && b[d-1]>=c)||(d>=n && b[n-1]>=c)){
        cout<<"Infinity";return;
    }
    if(b[n-1]*(d/n)+((d%n!=0)*b[(d%n)-1])>=c){
        ll k=n-1;
        while(b[n-1]*(d/k)+((d%k!=0)*b[(d%k)-1])>=c) k++;
        k--;
        cout<<k;return;
    }
    else{
        // ll i=0;
        // while(b[i]*(d/(i+1))+((d%(i+1)!=0)*b[(d%(i+1))-1])>c) i++;
        // i--;
        // cout<<i;
        // return;
        per(0,n-1,i){
            if(b[i]*(d/(i+1))+((d%(i+1)!=0)*b[(d%(i+1))-1])>=c) {cout<<i;return;}
        }
    }



    cout<<"))))))))";return;



}
int main(){
   fastio;
   // ++*(int*)0;// crash
   // freopen("in.txt","r",stdin);freopen("outt.txt","w+",stdout);
   tcs{
       // cout<<solve();nl;
       solve();nl;
       // cout<<"Case #"<<TTTT<<": "<<solve();
       // if(i<t-1) nl;
   }
   return 0;
}

/*




cycle of k+1 days

*/
