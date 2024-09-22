using namespace std;
#include<bits/stdc++.h>

#define nl cout<<"\n"
#define ve vector
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
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

std::vector<pair<ll,ll>> pollardRhoPrimeFactors(ll a){
    ll n = 2;
    std::vector<pair<ll,ll>> v;
    while(a>1 && n*n<=a){
        if(a%n==0){
            while(a%n==0){
                if(!v.size()) v.push_back({n,1});
                else if((v.back()).first==n) (v.back()).second++;
                else{
                    v.push_back({n,1});
                }
                a/=n;
            }
        }
        n++;
    }
    if(a>1){
        if(v.size()){
            if(v.back().first!=a) v.push_back({a,1});
            else v.back().second++;
        }
        else{
            v.push_back({a,1});
        }
    }
    if(!v.size()) v.push_back({2,0});
    return v;
}
vll allFactors(std::vector<pair<ll,ll>> &v){
    // vll nv;
    ll l = v.size();
    vll nv;
    if(l==1){
        ll a=1;
        rep(0,v[0].second+1,i){
            nv.push_back(a);
            a*=v[0].first;
        }
        return nv;
    }
    else{
        std::vector<pair<ll,ll>> npv;
        rep(1,l,i){
            npv.push_back(v[i]);
        }
        vll ncv = allFactors(npv);
        ll s = ncv.size();
        ll a = 1;
        rep(0,v[0].second+1,i){
            rep(0,s,j){
                nv.push_back(a*ncv[j]);
            }
            a*=v[0].first;
        }
        so(nv);
        return nv;
    }
}


// vll myAllFactors(ll a){
//     ll n = 2,ac=a;
//     std::map<ll, ll> m;
//     while(a>1 && n*n<=a){
//
//     }
// }

void solve(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==1 && b==1){
        cout<<2<<" "<<2;
        return;
    }
    std::vector<pair<ll,ll>> v = pollardRhoPrimeFactors(a*b);
    // cout<<"v:";
    // if(v.size())
    // {for(auto x:v) cout<<x.first<<" "<<x.second<<"\n";}
    vll nv = allFactors(v);
    // cout<<"nv:";
    // print(nv);
    for(auto x:nv){
        if(x>a && x<=c){
            ll num = (a*b)/x;
            ll k = 2;
            while(num*k<=b) k++;
            if(num*k>b && num*k<=d){
                cout<<x<<" "<<num*k;
                return;
            }
        }
        if(x>b && x<=d){
            ll num = (a*b)/x;
            ll k = 2;
            while(num*k<=a) k++;
            if(num*k>a && num*k<=c){
                cout<<num*k<<" "<<x;
                return;
            }
        }

    }

    cout<<-1<<" "<<-1;
    return;
}
int main(){
   fastio;
   // ++*(int*)0;// crash
   // freopen("in.txt","r",stdin);freopen("outt.txt","w+",stdout);
   tcs{
       // cout<<solve();nl;
       solve();nl;
       // cout<<"Case #"<<TTTT<<": "<<solve();
       // if(i<t-1) nl;
   }
   return 0;
}

/*

*/
