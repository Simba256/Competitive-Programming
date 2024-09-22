using namespace std;
#include<bits/stdc++.h>
#include <cstdio>

#define nl cout<<"\n"
#define ve vector
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vc vector<char>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tcs int tttt;cin>>tttt;for(int TTTT=1;TTTT<=tttt;TTTT++)
#define db(n) cout<<"here "<<#n<<"= "<<n;nl; //for debugging
#define dbb(n) cout<<#n<<" = "<<n<<"\n"
#define rep(l, r, i) for (int i = l; i < r; ++i)
#define per(l, r, i) for (int i = r; i >= l; --i)
#define repp(l, r, i) for (int i = l; i <= r; ++i)
#define print(a) for(auto i: a) cout<<i<<" ";
#define so(v) sort(v.begin(),v.end())
#define inp(v,n) {int aaaa; for(int iiii=0;iiii<n;iiii++){cin>>aaaa;v.push_back(aaaa);}}
#define mll 9223372036854775807
#define mp 1000000007
#define prin(a,len) rep(0,len,i){rep(0,len,j) cout<<a[i][j]<<" ";nl;}nl;



ll solve(){
    ll n;
    cin>>n;
    vll x,y,z;
    inp(x,n)
    inp(y,n)
    rep(0,n,i) {
        z.push_back(y[i]-x[i]);
    }
    print(z)nl;
    so(z);
    print(z)nl;
    ll s=-1,e=n;
    rep(0,n,i){
        if(z[i]<0) s=i;
        else break;
    }
    per(0,n-1,i){
        if(z[i]>0) e=i;
        else break;
    }
    if(e==n && e-s<3) return 0;
    ll c=0;
    if(e-s>1){
        if((e-s)%2) c+=(e-s-1)/2;
        else{
            c+=(e-s)/2;
            e++;
        }
    }
    int i,j;
    for(i=s, j=e; i>=0 && j<=n-1;i--,j++){
        ll sum=z[j];
        while(z[i]+sum<0){
            j++;
            sum+=z[j];
            if(z[i]+sum>=0) c++;
            if(j==n-1) break;
        }
    }

    cout<<"i="<<i<<" j="<<j;nl;
    if(i==-1 && j<n) c+=(n-j)/2;
    return c;


}
int main(){
   fastio;
   // ++*(int*)0;// crash
   // freopen("consecutive_cuts_chapter_2_input.txt","r",stdin);freopen("outt.txt","w+",stdout);
   tcs{
       // solve();nl;
       cout<<solve();nl;
       // cout<<"Case #"<<i+1<<": "<<solve();
       // if(i<t-1) nl;
   }
   return 0;
}

/*

*/
