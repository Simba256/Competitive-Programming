using namespace std;
#include<bits/stdc++.h>

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
#define db(n) cout<<"here "<<n<<endl;
#define dbb(n) cout<<#n<<" = "<<n<<endl;
#define DB(n) cout << "$^" << n << "|$"<<endl
#define sp <<" "<<
#define Random(rng) mt19937 rng(chrono::steady_clock::now().time_since_epoch().count())
#define pii pair<int,int>
#define fi first
#define se second
#define mp(a, b) make_pair(a, b)
int gcd(int a, int b){int tmp;while(b != 0){tmp = a;a = b;b = tmp%b;}return a;}
ll mod=MOD1;
ll po(ll x,ll y,ll _prime=mod) {if(y<0)return 0;y%=(_prime-1);ll res=1;while(y>0){if(y&1)res=(res*x)%_prime;x=(x*x)%_prime;y>>=1;}return (res%_prime);}
vll seivePrimes(ll n){vll pr,p;p.resize(n+1);fill(2+p.begin(),p.end(),1);for(ll i=2;i<=n;i++){if(p[i]==1){pr.push_back(i);for(ll j=i*i;j<=n;j+=i){p[j] = 0;}}}return pr;}

vll fact(61);
vll inv(61);
vll invFact(61);

ll choose(ll n,ll r){
    ll a = fact[n];
    ll b = invFact[n-r];
    ll c = invFact[r];
    ll d = (b*c)%MOD2;
    return (a*d)%MOD2;
}

void solve(){
    ll n;
    cin>>n;
    cout<<((choose(n,n/2)/2)+(n/2)-1)%MOD2;
}

void combinationUtil(int arr[], int data[],
    int start, int end,
    int index, int r);

    // The main function that prints
    // all combinations of size r
    // in arr[] of size n. This function
    // mainly uses combinationUtil()
    void printCombination(int arr[], int n, int r)
    {
        // A temporary array to store
        // all combination one by one
        int data[r];

        // Print all combination using
        // temporary array 'data[]'
        combinationUtil(arr, data, 0, n-1, 0, r);
    }

    /* arr[] ---> Input Array
    data[] ---> Temporary array to
    store current combination
    start & end ---> Starting and
    Ending indexes in arr[]
    index ---> Current index in data[]
    r ---> Size of a combination to be printed */
    void combinationUtil(int arr[], int data[],
        int start, int end,
        int index, int r)
        {
            // Current combination is ready
            // to be printed, print it
            if (index == r)
            {
                for (int j = 0; j < r; j++)
                cout <<setw(3)<< data[j];
                cout << endl;
                return;
            }

            // replace index with all possible
            // elements. The condition "end-i+1 >= r-index"
            // makes sure that including one element
            // at index will make a combination with
            // remaining elements at remaining positions
            for (int i = start; i <= end &&
                end - i + 1 >= r - index; i++)
                {
                    data[index] = arr[i];
                    combinationUtil(arr, data, i+1,
                        end, index+1, r);
                    }
                }
void solve1(){
    // ll n;
    // cin>>n;
    // vll a(n/2);
    // rep(0,n/2,i) a[i] = i+1;
    // for(int i=n/2-1;i>=0;i--){
    //     while(a[i]<n-(n/2-(i+1))){
    //         a[i]++;
    //         print(a);
    //     }
    //     {
    //         if(i)
    //     }
    //     print(a);
    // }
    int n;
    cin>>n;
    int arr[n];
    rep(0,n,i) arr[i] = i+1;
    int r = n/2;
    printCombination(arr, n, r);
}

int main(){
    fastio;
    // ++(int)0;// crash
    //freopen("in.txt","r",stdin);
    //freopen("outt.txt","w+",stdout);
    fact[0] = 1;
    rep(1,61,i) fact[i] = (fact[i-1]*i)%MOD2;
    inv[1] = 1;
    rep(2,61,i) inv[i] = po(i,MOD2-2,MOD2);
    invFact[0] = 1;
    rep(1,61,i) invFact[i] = (invFact[i-1]*inv[i])%MOD2;
    tcs
    {
        // cout<<"Case #"<<TTTT<<": ";
        solve1(); nl;
    }
    return 0;
}




/*





*/
