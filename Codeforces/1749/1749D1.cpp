using namespace std;
#include<bits/stdc++.h>

#define nl cout<<"\n"
#define ve vector
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define vp vector<pair<int,int>>
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
const ll MOD1=1e9+7;
const ll MOD2=998244353;
#define pi 3.14159265358979
#define prin(a,len) rep(0,len,i){rep(0,len,j) cout<<a[i][j]<<" ";nl;}nl;
#define printm(a) for(auto &x:a) {cout<<x.first<<" "<<x.second;nl;}
ll mod=MOD1;
ll po(ll x,ll y,ll _prime=mod) {if(y<0)return 0;y%=(_prime-1);ll res=1;while(y>0){if(y&1)res=(res*x)%_prime;x=(x*x)%_prime;y>>=1;}return (res%_prime);}
int gcd(int a, int b){if(a<b) swap(a,b);if(b==0) return a;return gcd(a%b,b);}

vll p;
bool isPrime(ll n)
{
	if(p[n])
	return true;
    else return false;
}
void printPrime(ll n)
{
    vll pr;p.resize(n+1);
    fill(2+p.begin(),p.end(),1);
    rep(2,n+1,i){
        if(p[i]==1){
            pr.push_back(i);
            for(int j=i*i;j<=n;j+=i){
                p[j] = 0;
            }
        }

    }
    rep(1,n,i){
        if(isPrime(i))cout<<"r "<<i<<endl;
    }
}


ll solve(){
    ll n,m;
    cin>>n>>m;
    vll nv(n+1);
    printPrime(n);
    // cout<<"here";
    // return 0;

    vll pow(n);
    m%=MOD2;
    pow[0] = m;
    ll total = 0;
    // pow[i] stores m^(i+1)
    rep(1,n,i){
        pow[i] = pow[i-1]*m;
        pow[i]%=MOD2;
        total+=pow[i];
        total%=MOD2;
    }
    // total = total possible arrays
    vll v(n);
    // at first v[i] stores product of all primes <= i+1 then it stores
    v[0] = 1;
    rep(1,n,i){
        if(v[i-1]==0){
            v[i]=0;
            continue;
        }
        // if(isPrime(i+1))cout<<"ASD "<<i+1<<'\n';
        if(isPrime(i+1)) v[i] = v[i-1] * (i+1);
        else v[i] = v[i-1];
        cout<<i<<" "<<v[i-1];nl;
        v[i-1] = m/v[i-1];
        if(v[i-1]==0) v[i] = 0;
        cout<<i<<" "<<v[i-1];nl;
        
    }
    if(v[n-1]) v[n-1] = m/v[n-1];
    vll prods(n);
    prods[0] = v[0]%MOD2;
    // cout<<total<<endl;
    rep(1,n,i) {prods[i] = prods[i-1]*v[i];prods[i]%=MOD2;}
    rep(1,n,i){
        // cout<<i<<" "<<prods[i]<<endl;
        if(prods[i]>total) total += MOD2;
        total -= prods[i];
        total %=  MOD2;
    }
    return total;

}
int main(){
   // fastio;
   // ++*(int*)0;// crash
   // freopen("in.txt","r",stdin);freopen("outt.txt","w+",stdout);
   {
       cout<<solve();nl;
       // solve();nl;
       // cout<<"Case #"<<TTTT<<": "<<solve();
       // if(i<t-1) nl;
   }
   return 0;
}

/*



v[0]*v[1](1+v[2]())




4
2 3
4 2
4 6
1337 424242424242

*/
