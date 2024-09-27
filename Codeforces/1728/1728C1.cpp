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

ll log10(ll a){
    if(a<10) return 1;
    else return log10(a/10)+1;
}

ll solve(){
    ll n;
    cin>>n;
    map<ll,ll>a;
    map<ll,ll>b;

    ll x,z,c=0;
    rep(0,n,i){
        cin>>x;
        a[x]++;
    }
    rep(0,n,i){
        cin>>x;
        b[x]++;
    }

    for(auto &y:a){
        if(y.first<10) continue;
        if(b[y.first]){
            z=min(y.second,b[y.first]);
            y.second-=z;
            b[y.first]-=z;
        }
    }

    for(auto &y:a){
        if(y.first<10||y.second==0) continue;
        a[int(log10(y.first))]+=y.second;
        c+=y.second;
    }
    for(auto &y:b){
        if(y.first<10||y.second==0) continue;
        b[int(log10(y.first))]+=y.second;
        c+=y.second;
    }


    for(auto &y:a){
        if(y.first==1||y.first>9||y.second==0) continue;
        if(b[y.first]){
            z=min(y.second,b[y.first]);
            y.second-=z;
            b[y.first]-=z;
        }
    }
    for(auto &y:a){
        if(y.first==1||y.first>9||y.second==0) continue;
        a[1]+=y.second;
        c+=y.second;
    }
    for(auto &y:b){
        if(y.first==1||y.first>9||y.second==0) continue;
        b[1]+=y.second;
        c+=y.second;
    }
    return c;
}
int main(){
   fastio;
   tcs{
       //TTTT
       // solve();nl;
       cout<<solve();nl;
   }
   return 0;
}

/*

22
106 284 195 28 56 172 65 76 56 200 3 206 39 46 13 227 27 33 22 40 251 123
191 185 46 175 30 163 72 151 188 242 210 295 208 123 157 185 17 123 195 51 124 238


3 13 22 27 28 33 39 40 46 56 56 65 76 106 123 172 195 200 206 227 251 284
17 30 46 51 72 123 123 124 151 157 163 175 185 185 188 191 195 208 210 238 242 295

3 13 22 27 28 33 39 40 56 56 65 76 106 172 200 206 227 251 284
17 30 51 72 123 124 151 157 163 175 185 185 188 191 208 210 238 242 295

1           11              7                   11+7
3 2 2 2 2 2 2 2 2 2 2 2 3 3 3 3 3 3 3
2 2 2 2 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3
    4               15                          4+15

      7
2 2 2 2 2 2 2
3 3 3 3 3 3 3
      7

      7             +7
1 1 1 1 1 1 1
1 1 1 1 1 1 1
      7             +7
*/
