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
#define inp(v,n) {int aaaa; for(int iiii=0;iiii<n;iiii++){cin>>aaaa;v.push_back(aaaa);}}


// ll add(char a,char b,char c, char d){
// }
void solve(){
    ll n,k,b,s;
    cin>>n>>k>>b>>s;
    // if(s>k*(b+n)-n) return -1;
    // else return 0;
    vll v;
    v.push_back(s);
    if((v[0]/k)<b) {
        cout<<-1;nl;
        return;
    }
    if((v[0]/k)==b){
        cout<<v[0]<<" ";
        rep(1,n,i) cout<<0<<" ";nl;
        return;
    }
    while((v[0]/k)>b && v.size()<=n){
        if(v[0]>(k*b)+(k-1)){
            v.push_back(k-1);
            v[0]-=k-1;
        }
        else{
            v.push_back(v[0]-(k*b));
            v[0]-=v[0]-(k*b);
            break;
        }
    }
    if((v[0]/k)>b) {cout<<-1;nl;return;}
    else{
        rep(0,v.size(),i){
            cout<<v[i]<<" ";
        }
        rep(v.size(),n,i){
            cout<<0<<" ";
        }
        nl;
        return;
    }
}
int main(){
   // fastio;
   tcs{
       solve();
       // cout<<solve()<<endl;
   }
   return 0;
}

/*


*/
