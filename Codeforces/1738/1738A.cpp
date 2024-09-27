using namespace std;
#include<bits/stdc++.h>

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
#define dbb(n) cout<<#n<<" = "<<n<<nl;
#define rep(l, r, i) for (int i = l; i < r; ++i)
#define per(l, r, i) for (int i = r; i >= l; --i)
#define repp(l, r, i) for (int i = l; i <= r; ++i)
#define print(a) for(auto i: a) cout<<i<<" "; nl;
#define so(v) sort(v.begin(),v.end())
#define inp(v,n) {int aaaa; for(int iiii=0;iiii<n;iiii++){cin>>aaaa;v.push_back(aaaa);}}
#define mll 9223372036854775807
#define mp 1000000007
#define pi 3.14159265358979
#define prin(a,len) rep(0,len,i){rep(0,len,j) cout<<a[i][j]<<" ";nl;}nl;

ll solve(){
    ll n;
    cin>>n;
    vll a0,a1;
    ll a[n],x;
    vll b;
    rep(0,n,i){
        cin>>a[i];
    }
    rep(0,n,i){
        cin>>x;
        b.push_back(x);
    }
    rep(0,n,i){
        if(a[i]==0) a0.push_back(b[i]);
        else a1.push_back(b[i]);

    }
    sort(a0.begin(), a0.end(), greater<int>());
    sort(a1.begin(), a1.end(), greater<int>());
    // db(1);
    ll sum=0;
    ll z=a0.size();
    ll o=a1.size();
    if(z==o){
        so(b);
        sum+=b[0];
        rep(1,b.size(),i){
            sum+=(2*b[i]);
        }
        return sum;
    }
    // cout<<"a0:";
    // print(a0);nl;
    // cout<<"a1:";
    // print(a1);nl;
    ll m,more;
    if(z<o){
        m=z;
        more=1;
    }
    else{
        m=o;
        more=0;
    }
    // db(2)
    ll i=0;
    if(more){
        sum+=*(a1.end()-1);
    }
    else sum+=*(a0.end()-1);
    // db(6)
    while(i<m){
        sum+=2*(a0[i]+a1[i]);
        i++;
    }
    // db(3)
    if(more){
        for(int j=m;j<o-1;j++){
            sum+=a1[j];
        }
    }
    else{
        rep(m,z-1,j){
            sum+=a0[j];
        }
    }
    // db(5)
    return sum;

}
int main(){
   // fastio;
   // ++*(int*)0;// crash
   // freopen("consecutive_cuts_chapter_2_input.txt","r",stdin);freopen("outt.txt","w+",stdout);
   tcs{
       cout<<solve();nl;
       // solve();nl;
       // cout<<"Case #"<<i+1<<": "<<solve();
       // if(i<t-1) nl;
   }
   return 0;
}

/*

*/
