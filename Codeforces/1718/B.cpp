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
    ll n,m,f=1;
    cin>>n>>m;
    if(m<n) cout<<"NO";
    else{
        // vll v;
        // for(int i=0;2*i<n-1;i+=2){
        //     v.push_back(1);
        //     v.push_back(1);
        // }
        if(n%2){
            cout<<"YES";nl;
            rep(0,n-1,i){
                cout<<1<<" ";m--;
            }
            cout<<m;
        }
        else{
            m-=n-2;
            if(m%2==0){
                cout<<"YES";nl;
                rep(0,n-2,i){
                    cout<<1<<" ";
                }
                cout<<m/2<<" "<<m/2;
            }
            else cout<<"NO";
        }
    }

}
int main(){
   fastio;
   tcs{
       //TTTT
       solve();nl;
       // cout<<solve();nl;
   }
   return 0;
}

/*

a b c d e
f g h i j



*/
