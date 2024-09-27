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


ll fun(){


}
void solve(){
   ll n,a,l=1,c=0,f=0;
   vll v;
   cin>>n;
   ll dp[n]={0};
   cin>>a;
   v.push_back(a);
   dp[c]++;
   rep(1,n,i){
       cin>>a;
       v.push_back(a);
       if(a==v[i-1]){
           l++;
           dp[c]++;
       }
       else{
           // cout<<"i="<<i;nl;
           if(l==1) f=1;
           l=1;
           c++;
           dp[c]=1;
       }
   }
   // rep(0,c+1,i){
   //     cout<<dp[i]<<" ";
   // }
   // nl;
   // print(v)
   if(f || n==1) {
       cout<<-1;
       return;
   }
   else if(v[n-1]!=v[n-2]){
       cout<<-1;
       return;
   }
   else{
       a=0;
       rep(0,c+1,i){
           cout<<dp[i]+a<<" ";
           rep(1,dp[i],j){
               cout<<j+a<<" ";
           }
           a+=dp[i];
       }
       return;
   }
}
int main(){
   // fastio;
   tcs{
       solve();
       // cout<<solve()<<endl;
       cout<<endl;
   }
   return 0;
}

/*



*/
