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

ll solve(){
    ll n,h;
    cin>>n>>h;
    vll v;
    // rep(0,n,i) cin>>a[i];
    inp(v,n);
    so(v);
    ll i=0,j=0,k=0;
    while(v[i]<h && i<n){
        h+=v[i]/2;
        i++;j++;k++;
    }
    // 2 2 3
    ll hi=h,hj=h,hk=h;
    hi*=2;hj*=2;hk*=3;
    while(v[i]<hi && i<n){
        hi+=v[i]/2;
        i++;
    }
    while(v[j]<hj && j<n){
        hj+=v[j]/2;
        j++;
    }
    while(v[k]<hk && k<n){
        hk+=v[k]/2;
        k++;
    }
    hi*=2;hj*=3;hk*=2;
    while(v[i]<hi && i<n){
        hi+=v[i]/2;
        i++;
    }
    while(v[j]<hj && j<n){
        hj+=v[j]/2;
        j++;
    }
    while(v[k]<hk && k<n){
        hk+=v[k]/2;
        k++;
    }
    hi*=3;hj*=2;hk*=2;
    while(v[i]<hi && i<n){
        hi+=v[i]/2;
        i++;
    }
    while(v[j]<hj && j<n){
        hj+=v[j]/2;
        j++;
    }
    while(v[k]<hk && k<n){
        hk+=v[k]/2;
        k++;
    }
    return max(i,max(j,k));
}
int main(){
   fastio;
   // ++*(int*)0;// crash
   // freopen("in.txt","r",stdin);freopen("outt.txt","w+",stdout);
   tcs{
       cout<<solve();nl;
       // solve();nl;
       // cout<<"Case #"<<TTTT<<": "<<solve();
       // if(i<t-1) nl;
   }
   return 0;
}

/*

*/
