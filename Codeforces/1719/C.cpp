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
#define inp(v,n) int a; for(int i=0;i<n;i++){cin>>a;v.push_back(a);}


ll fun(ll ma[]){
    ll j,r,a=0;

    cin>>j>>r;
    if(ma[j-1]!=-1){
        if(j>2){
            if(r>j-2+ma[j-1]) return ma[j-1];
            else if(r<j-2) return 0;
            else return r-j+2;
        }
        else{
            // cout<<"r="<<r<<" ma="<<ma[j-1]<<endl;
            if(r>ma[j-1]) return ma[j-1];
            else return r;
        }
        // return max(a,min(ma[j-1],r-j+2));
    }
    else if(j==1) return r-j+1;
    else return max(a,r-j+2);

}
void solve(){
   ll ma[100000]={0};
   ll n,q,a,m=0,in=-1;
   cin>>n>>q;
   ma[0]=-1;
   rep(0,n,i){
       cin>>a;
       if(a>m) {
           m=a;
           in=i;
       }
       ma[in]++;
   }
   ma[in]=-1; //mostmax keeps winning
   // rep(0,n,i){
   //     cout<<ma[i]<<" ";
   // }
   // cout<<endl;
   rep(0,q,i){
       cout<<fun(ma)<<endl;
   }

   // return fun(q);
   // return c;
}
int main(){
   // fastio;
   tcs{
       solve();
       // cout<<solve()<<endl;
       // cout<<endl;
   }
   return 0;
}

/*



*/
