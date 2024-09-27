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



ll solve(){
    ll n;
    cin>>n;
    ll a,b,s=0,f=0;
    map<ll,ll>m;
    vll v;
    cin>>a;
    rep(1,n,i){
        cin>>b;
        if(m[b]) b=0;
        if(b<a){
            m[a]=1;
            a=b;
            for(auto x:v){
                m[x]=1;
            }
            v.clear();
            f=0;
            continue;
        }
        else{
            // if(m[b]){
            //     a=b;
            //     for(auto x:v){
            //         m[x]=1;
            //     }
            //     v.clear();
            //     f=0;
            //     continue;
            // }
            // else{
                if(f==0) v.push_back(a);
                v.push_back(b);
                f=1;
                a=b;
                // cout<<"v=";
                // for(auto x:v) cout<<x<<" ";nl;
            // }
        }
    }
    ll c=0;
    // cout<<"map:";
    for(auto &x:m){
        if(x.first==0) continue;
        // cout<<x.first<<" "<<x.second;nl;
        c+=x.second;
    }//nl;
    return c;
}
int main(){
   // fastio;
   tcs{
       //TTTT
       // solve();nl;
       cout<<solve();nl;
   }
   return 0;
}

/*
33
7 6 27 8 13 7 19 28 31 3 2 27 33 11 26 23 27 16 32 14 21 29 20 12 28 24 23 5 21 4 22 3 8
25
3 23 22 24 19 22 10 1 21 15 2 4 6 21 18 8 15 2 11 4 1 24 21 9 3
17
3 8 11 11 2 3 10 16 14 16 3 13 11 5 12 8 14
11
11 6 3 2 10 6 3 7 11 6 2


*/
