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

bool isPrime(int n)
{
	// Corner cases
	if (n <= 1)
		return false;
	if (n <= 3)
		return true;

	if (n % 2 == 0 || n % 3 == 0)
		return false;

	for (int i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;

	return true;
}

vll printPrime(int n)
{
    vll v;
	for (int i = 2; i <= n; i++) {
		if (isPrime(i))
			v.push_back(i);
	}
    return v;
}

ll solve(){
    int n,m;
    cin>>n>>m;
    vll pow(n);
    pow[0] = m;
    rep(1,n,i){
        pow[i] = pow[i-1]*m;
        pow[i]%=MOD2;
    }
    vll p = printPrime(m);
    double sum = 0;
    for (auto x:p) cout<<x<<" ";nl;
    for(auto x:p){
        sum += (1.0/(x*x));
    }
    ll ans = 0;
    cout<<"sum:"<<sum;nl;
    rep(2,n+1,i){
        ll num = pow[i-1]*(i-1 - sum*i);
        num%=MOD2;
        ans += num;
    }
    return ans;
}
int main(){
   fastio;
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
2 3
1 1
1 2
1 3
2 1
2 2
2 3
3 1
3 2
3 3

You need to find array with atleast one i and a[i] coprime for i>1
if any a[i] == 1 for i>1 this is satisfied
n (n/2) n n n ... n             (n^(m))*(1-1/2)
n n (n-(n/3)) n n ... n         (n^m)*(1-1/3)
n n n (n/2) n n n ... n         (n^m)*(1-1/2)
n n n n (n-n/5) n n ... n       (n^m)*(1-1/5)
n n n n n (n-n/2-n/3) ... n     (n^m)*(1-1/2-1/3)



(n^m)*((m-1)-(1/2)(m/2) - ... (1/p)(m/p) ) for all primes less than n
n and m are switched








(m^n)*((n-1)-sum(n/(p^2)))




*/
