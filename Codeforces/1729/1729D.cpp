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
#define db(n) cout<<"here "<<n<<", "; //for debugging
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
    // print(z)nl;
    so(z);
    // db(2)
    ll ze=0,c=0;
    while(z[ze]<0){
        ze++;
    }
    ll in=ze;
    if(in==n-1) return c;
    // print(z);nl;
    // cout<<"ze="<<ze;nl;
    while(in<n-1 && z[in]==0){
        c++;
        in+=2;
        if(z[in+1]!=0) break;
    }
    if(in>=n-1) return c;
    ze--;
    // cout<<"ze="<<ze<<" in="<<in<<" c="<<c;nl;
    ll f=0;

    // cout<<"ze="<<ze<<" in="<<in<<" c="<<c;nl;

    //under consideration
    while(in<n && ze>-1){
        ll s=0;
        // cout<<"ze="<<ze<<" in="<<in<<" c="<<c;nl;

        while(s+z[ze]<0){
            // cout<<"s="<<s;nl;
            s+=z[in];
            in++;
            if(in==n) {
                if(s+z[ze]>=0) f=2;
                else f=1;
                break;
            }
            // cout<<"ze="<<ze<<" in="<<in<<" c="<<c;nl;

        }
        if(f==1) break;
        c++;
        ze--;
        if(f==2) break;
    }
    // cout<<"ze="<<ze<<" in="<<in<<" c="<<c;nl;

    if(ze==-1 && in<n-2) c+=(n-in)/2;
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
