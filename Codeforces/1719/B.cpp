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


ll fun(vector<int> v,int n,int j){

}

void solve(){
   ll n,k;
   cin>>n>>k;
   if (k%4==0) {
       cout<<"NO"<<endl;
       return;
   }
   cout<<"YES"<<endl;
   if(k%2){
       for(int i=0;i<n;i+=2){
           cout<<i+1<<" "<<i+2<<endl;
       }
   }
   else{
       for(int i=4;i<n+1;i+=4){
           cout<<i-1<<" "<<i<<endl;
       }
       for(int i=2;i<n+1;i+=4){
           cout<<i<<" "<<i-1<<endl;
       }
       // rep(0,n/4,i){
       //     cout<<((i+1)*4)-1<<" "<<((i+1)*4)<<endl;
       // }
       // rep(0,n/4+((n/2)%2),i){
       //     cout<<((i)*4)+2<<" "<<((i)*4)+1<<endl;
       // }
   }
   return;
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
1


*/
