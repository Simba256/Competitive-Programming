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
#define rep(l, r, i) for (ll i = l; i < r; ++i)
#define per(l, r, i) for (ll i = r; i >= l; --i)
#define repp(l, r, i) for (ll i = l; i <= r; ++i)
#define print(a) for(auto i: a) cout<<i<<" "; nl;
#define so(v) sort(v.begin(),v.end())
#define inp(v,n) {int aaaa; for(int iiii=0;iiii<n;iiii++){cin>>aaaa;v.push_back(aaaa);}}

// ll add(char a,char b,char c, char d){
// }
ll gcd(ll a, ll b){if(a<b) swap(a,b);if(b==0) return a;return gcd(a%b,b);}
void solve(){
    ll n;
    cin>>n;
    ll a[n],b[n];
    rep(0,n,i) cin>>a[i];
    rep(0,n,i) cin>>b[i];
    ll k=0;
    rep(0,n,i){
        while(b[k]<a[i]) k++;
        cout<<b[k]-a[i]<<" ";
    }nl;
    // k=0;
    // ll ii=0;
    // rep(0,n,i){
    //
    //     ii=max(i,ii);
    //     while(k<n && a[k]<=b[ii]){
    //         if(k!=i) ii++;
    //         k++;
    //     }
    //     cout<<b[ii]-a[i]<<" ";
    // }nl;
    // ll c=0,j=0;
    // rep(0,n,i){
    //     do{
    //         while(a[c]<=b[i]) c++;
    //         i++;
    //     }while(c!=i);
    //     while(j<i){
    //         cout<<b[i]-a[j]<<" ";j++;
    //     }
    // }nl;




    vll v;
    k=0;
    per(0,n-1,i){
        while(k<n-1 && b[n-1-k]>=a[i]) {
            k++;

        }
        cout<<"k="<<k<<" b="<<b[n-1-k]<<" a="<<a[i];nl;
        cout<<b[n-1-i]-a[i]<<" ";nl;
    }nl;







    // ll c=0,j=0;
    // rep(0,n,i){
    //     // j=i;
    //     if(i==n-1) {
    //         cout<<b[n-1]-a[n-1];nl;
    //         return;
    //     }
    //     // cout<<"i="<<i;nl;
    //     while(a[i+1]<=b[i]) {
    //         i++;
    //         c++;
    //     }
    //     rep(j,c+1,k){
    //         // cout<<"b[c]="<<b[c]<<" a[k]="<<a[k];nl;
    //         cout<<b[c]-a[k]<<" ";
    //     }
    // }nl;
}
int main(){
   fastio;
   tcs{
       //TTTT
       solve();
       // cout<<solve();nl;
   }
   return 0;
}

/*

a b c d e
f g h i j



*/
