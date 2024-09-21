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



struct Node{
    int left_closed;
    int right_closed;
    int left_open;
    int right_open;

    Node(){
        left_closed = 0;
        right_closed = 0;
        right_open = 0;
        left_open = 0;
    }

    Node(char cc){
        if(cc=='('){
            left_closed = 0;
            right_closed = 0;
            left_open = 1;
            right_open = 0;
        }else{
            right_closed = 0;
            left_closed = 0;
            left_open = 0;
            right_open = 1;
        }
    }
    void Print(){
        cout<<left_closed<<" "<<right_closed<<" "<<left_open<<" "<<right_open;nl;
    }
};

template<class T>
struct segTree{
    int n;vector<T>t;T init;
    segTree(int _n,T _init){
        n=_n;t.resize(2*n+1);init=_init;for(auto &tt:t)tt=init;
    }void update(int i,T k){
        i+=n;t[i]=k;
        while(i>1){
            i>>=1;
            t[i].left_closed = t[i*2].left_closed + t[i*2+1].left_closed;
            t[i].right_closed = t[i*2].right_closed + t[i*2+1].right_closed;
            t[i].left_closed += min(t[i*2].left_open, t[i*2+1].right_open);
            t[i].right_closed += min(t[i*2].left_open, t[i*2+1].right_open);
            t[i].left_open = t[i*2].left_open + t[i*2+1].left_open - min(t[i*2].left_open, t[i*2+1].right_open);
            t[i].right_open = t[i*2].right_open + t[i*2+1].right_open - min(t[i*2].left_open, t[i*2+1].right_open);
        }
    }T query(int l, int r){
    l += n; 
    r += n;
    T res_left = init, res_right = init;

    while (l <= r) {
        if (l & 1) res_left = mergeLeft(res_left, t[l++]);
        if (!(r & 1)) res_right = mergeRight(t[r--], res_right);
        l >>= 1;
        r >>= 1;
    }

    return merge(res_left, res_right);
}
T mergeLeft(T a,T b){
        T res;
        res.left_closed = a.left_closed + b.left_closed;
        res.right_closed = a.right_closed + b.right_closed;

        res.left_closed += min(a.left_open,b.right_open);
        res.right_closed += min(a.left_open, b.right_open);

        // cout<<"al:"<<a.left_open<<" bl:"<<b.left_open<<" m:"<<min(a.left_open, b.right_open);nl;
        res.left_open = a.left_open + b.left_open - min(a.left_open, b.right_open);
        // cout<<res.left_open;nl;
        res.right_open = 0;

        return res;
    }
    T mergeRight(T a, T b){
        T res;
        res.left_closed = a.left_closed + b.left_closed;
        res.right_closed = a.right_closed + b.right_closed;

        res.left_closed += min(a.left_open, b.right_open);
        res.right_closed += min(a.left_open, b.right_open);

        res.right_open = a.right_open + b.right_open - min(a.left_open, b.right_open);
        res.left_open = 0;
        return res;
    }
    T merge(T a, T b, T c){
        T res;
        res.left_closed = a.left_closed + b.left_closed + c.left_closed;
        res.right_closed = a.right_closed + b.right_closed + c.right_closed;

        res.left_closed += min(a.left_open+b.left_open+c.left_open, a.right_open+b.right_open+c.right_open);
        res.right_closed += min(a.left_open+b.left_open+c.left_open, a.right_open+b.right_open+c.right_open);

        res.left_open = 0;
        res.right_open = 0;

        return res;
    }
    T merge(T a, T b){
        T res;
        res.left_closed = a.left_closed + b.left_closed;
        res.right_closed = a.right_closed + b.right_closed;
        res.left_closed += min(a.left_open, b.right_open);
        res.right_closed += min(a.left_open, b.right_open);
        return res;
    }
};






// template<class T>
// struct segTree{
//     int n;
//     vector<T> left, right, after_right;
//     segTree(int _n){
//         n=_n;
//         left.resize(2*n);
//         right.resize(2*n);
//         after_right.resize(2*n);
//         for(int i=0;i<2*n;i++){
//             left[i] = 0;
//             right[i] = 0;
//             after_right[i] = 0;
//         }
//     }void update(int i,int k){
//         if(k==1){
//             i += n;
//             left[i]=k;
//             right[i] = 0;
//             after_right[i] = 0;
//             while(i>1){
//                 i>>=1;
//                 merge(i,(i<<1),((i<<1)|1));
//             }
//         }else{
//             i += n;
//             left[i] = 0;
//             right[i] = 1;
//             after_right[i] = 0;
//             while(i>1){
//                 i>>=1;
//                 merge(i,(i<<1), ((i<<1)|1));
//             }
//         }
//     }T query(int l,int r){
//         l+=n;r+=n;T res_left=0, res_right=0, res_after_right = 0;
//         while(l<r){
//             if(l&1){
//                 res_left = res_left + left[l];
//                 res_right = res_right + right[l];
//                 res_after_right = after_right[l] + res_right;
//                 l++;
//             }
//             if(!(r&1)){
//                 res_left = res_left + left[r];
//                 res_right = res_right + right[r];
//                 res_after_right = res_after_right + right[r];
//                 r--;
//             }
//             l>>=1;r>>=1;
//         }if(l==r){
//             res_left = res_left + left[l];
//             res_right = res_right + right[i];
//             res_after_right = res_after_right + right[l];
//         }
//         return min(res_after_right,res_left);
//     }void merge(int p, int c1, int c2){
//         left[p] = left[c1]+left[c2];
//         right[p] = right[c1]+right[c2];
//         after_right[p] = after_right[c1] + right[c2];
//     }
// };




void solve(){
    string s;
    cin>>s;
    ll q;
    cin>>q;
    ll n = s.length();
    Node empty;
    segTree<Node> seg(n, empty);
    // left = 1, right = -1
    Node left('('), right(')');

    for(int i=0;i<n;i++){
        if(s[i]=='(') seg.update(i+1, left);
        else seg.update(i+1, right);
    }
    // for(Node n:seg.t){
    //     cout<<n.left_closed<<" "<<n.right_closed<<" "<<n.left_open<<" "<<n.right_open;nl;
    // }

    for(int i=0;i<q;i++){
        ll l,r;
        cin>>l>>r;
        Node ans = seg.query(l,r);
        // cout<<l<<" "<<r<<" "<<ans.left_closed+ans.right_closed;nl;
        cout<<ans.left_closed+ans.right_closed;nl;
    }
    // for(int l=1;l<=n;l++){
    //     for(int r=l;r<=n;r++){
    //         cout<<l<<" "<<r<<" "<<seg.query(l,r).left_closed*2;nl;
    //     }
    // }
}

int main(){
    fastio;
    #ifdef LOCAL
    // ++(int)0;// crash
    freopen("./../../in.txt","r",stdin);
    freopen("./../../out.txt","w+",stdout);
    #endif
    
    {
         // cout<<"Case #"<<TTTT<<": ";
        solve(); nl;
    }
    return 0;
}

/*


*/