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
#define sod(a) sort(a.begin(), a.end(), greater<int>())
#define inp(v,n) {int aaaa; for(int iiii=0;iiii<n;iiii++){cin>>aaaa;v.push_back(aaaa);}}
#define mll 9223372036854775807
#define mp 1000000007
#define pi 3.14159265358979
#define prin(a,len) rep(0,len,i){rep(0,len,j) cout<<a[i][j]<<" ";nl;}nl;
#define printm(a) for(auto &x:a) {cout<<x.first<<" "<<x.second;nl;}

void solve(){
    int n,q,a,en=0,on=0;
    ll s=0;
    cin>>n>>q;
    rep(0,n,i){
        cin>>a;
        if(a%2){
            s+=a;
            on++;
        }
        else{
            s+=a;
            en++;
        }
    }
    int x,y;
    rep(0,q,i){
        cin>>x>>y;
        if(x){
            s+=y*on;
            if(y%2){
                en+=on;
                on=0;
            }
        }
        else{
            s+=y*en;
            if(y%2){
                on+=en;
                en=0;
            }
        }
        cout<<s;nl;
    }


}
int main(){
   fastio;
   // ++*(int*)0;// crash
   // freopen("in.txt","r",stdin);freopen("outt.txt","w+",stdout);
   tcs{
       // cout<<solve();nl;
       solve();
       // cout<<"Case #"<<i+1<<": "<<solve();
       // if(i<t-1) nl;
   }
   return 0;
}

/*

*/
