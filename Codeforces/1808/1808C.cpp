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
vll seivePrimes(ll n){vll pr,p;p.resize(n+1);fill(2+p.begin(),p.end(),1);for(ll i=2;i<=n;i++){if(p[i]==1){pr.push_back(i);for(ll j=i*i;j<=n;j+=i){p[j] = 0;}}}return pr;}


int len(ll a){
    int l = 0;
    while(a){
        l++;
        a/=10;
    }
    return l;
}

void solve(){
    ll l,r;
    cin>>l>>r;
    ll lc = l, rc = r;
    if(len(l)!=len(r)){
        int a = len(l);
        ll num = 0;
        rep(0,a,i){
            num*=10;
            num++;
        }num *= 9;
        cout << num;
        return;
    }else{
        vi v1,v2,v3;
        while(l>0 || r>0){
            v1.push_back(l%10);
            v2.push_back(r%10);
            l/=10;
            r/=10;
        }
        v3 = v1;
        int c = len(l)-1;
        int ma = -1,mi = 10;
        while(c>-1 && v1[c]==v2[c]){
            ma = max(ma, v1[c]);
            mi = min(mi,v1[c]);
            v1.pop_back();
            v2.pop_back();
            c--;
        }
        if(c==-1) return lc;


        if(v2[c]-v1[c]>1){
            v3[c] = v1[c]+1;
            c--;
            while(c>-1){
                v3[c] = v3[c+1];
            }
            per(0,v3.size()-1,i){
                cout<<v3[i];
            }
            return;
        }else{

        }

    }
}

int main(){
    fastio;
    // ++(int)0;// crash
    //freopen("in.txt","r",stdin);
    //freopen("outt.txt","w+",stdout);
    tcs
    {
        // cout<<"Case #"<<TTTT<<": ";
        solve(); nl;
    }
    return 0;
}

/*


different number of digits
9,99,999,9999,99999,999999 would be unlucky

equal digits
starting digits would be same find max and min in them
consider all cases of joining digit
after that all digits can be made same




*/
