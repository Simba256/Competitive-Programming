
#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef double dd;
typedef long double ldd;

#define forn(a,b) for (int ii=a;ii<b;ii++)
#define hhh cout<<"here"<<endl;
#define nl cout<<'\n'
#define ve vector
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define vp vector<pair<int,int>>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tcs int tttt;cin>>tttt;for(int TTTT=1;TTTT<=tttt;TTTT++)
#define rep(l, r, i) for (int i = l; i < r; ++i)
#define per(l, r, i) for (int i = r; i >= l; --i)
#define repp(l, r, i) for (int i = l; i <= r; ++i)
#define so(v) sort(v.begin(),v.end())
#define sod(a) sort(a.begin(), a.end(), greater<int>())
#define inp(v,n) {int aaaa; for(int iiii=0;iiii<n;iiii++){cin>>aaaa;v.push_back(aaaa);}}
#define mll 9223372036854775807
const ll MOD1=1e9+7;
const ll MOD2=998244353;
#define PI 3.14159265358979
#define prin(a,len) rep(0,len,i){rep(0,len,j) cout<<a[i][j]<<" ";nl;}nl;
#define print(a) for(auto &i: a) cout<<i<<" "; nl;
#define printm(a) for(auto &x:a) {cout<<x.first<<" "<<x.second;nl;}
#define pb(a) push_back(a)
#define all(a) a.begin(),a.end()
#define db(n) cout<<"here "+n<<endl;
#define dbb(n) cout<<#n+" = "+n<<endl;
#define DB(n) cout << "$^" << n << "|$"<<endl
#define sp <<" "+
#define Random(rng) mt19937 rng(chrono::steady_clock::now().time_since_epoch().count())
#define pii pair<int,int>
#define fi first
#define se second
#define mp(a, b) make_pair(a, b)
int gcd(int a, int b){int tmp;while(b != 0){tmp = a;a = b;b = tmp%b;}return a;}
ll mod=MOD1;
ll po(ll x,ll y,ll _prime=mod) {if(y<0)return 0;y%=(_prime-1);ll res=1;while(y>0){if(y&1)res=(res*x)%_prime;x=(x*x)%_prime;y>>=1;}return (res%_prime);}
vll seivePrimes(ll n){vll pr,p;p.resize(n+1);fill(2+p.begin(),p.end(),1);for(ll i=2;i<=n;i++){if(p[i]==1){pr.push_back(i);for(ll j=i*i;j<=n;j+=i){p[j] = 0;}}}return pr;}

/*


*/
// Function to calculate the sum of integers from l to r
long long sumOfIntegers(long long l, long long r) {
    return (r - l + 1) * (l + r) / 2;
}

int findOptimalX(int k, int n, long long &minDiff) {
    int left = k;
    int right = k + n - 1;
    int bestX = left;
    minDiff = LLONG_MAX; // Initialize to maximum possible long long value

    // Binary search to find the point x
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Calculate sum from k to mid
        long long sum1 = sumOfIntegers(k, mid);

        // Calculate sum from mid+1 to k+n-1
        long long sum2 = sumOfIntegers(mid + 1, k + n - 1);

        // Calculate the absolute difference
        long long diff = abs(sum1 - sum2);

        // Update minimum difference and best x if needed
        if (diff < minDiff) {
            minDiff = diff;
            bestX = mid;
        }

        // Binary search condition to minimize the difference
        if (sum1 < sum2) {
            left = mid + 1; // Move right to increase sum1
        } else {
            right = mid - 1; // Move left to decrease sum1
        }
    }

    return bestX;
}

int solve() {
    int k, n;
    cin >> n;
    cin >> k;


    long long minDiff;
    int optimalX = findOptimalX(k, n, minDiff);

    cout << minDiff;

    return 0;
}

int main(){
    fastio;
    #ifdef LOCAL
    // ++(int)0;// crash
    freopen("/home/basim/Programming/CP/in.txt","r",stdin);
    freopen("/home/basim/Programming/CP/out.txt","w+",stdout);
    #endif
    tcs
    {
         // cout<<"Case #"<<TTTT<<": ";
        solve(); nl;
    }
    return 0;
}

/*


*/