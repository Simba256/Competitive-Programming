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

// C++ code to demonstrate Range Update and
// Point Queries on a Binary Index Tree
#include <bits/stdc++.h>
using namespace std;

// Updates a node in Binary Index Tree (BITree) at given index
// in BITree. The given value 'val' is added to BITree[i] and
// all of its ancestors in tree.
void updateBIT(int BITree[], int n, int index, int val)
{
	// index in BITree[] is 1 more than the index in arr[]
	index = index + 1;

	// Traverse all ancestors and add 'val'
	while (index <= n)
	{
		// Add 'val' to current node of BI Tree
		BITree[index] += val;

		// Update index to that of parent in update View
		index += index & (-index);
	}
}

// Constructs and returns a Binary Indexed Tree for given
// array of size n.
int *constructBITree(vi arr, int n)
{
	// Create and initialize BITree[] as 0
	int *BITree = new int[n+1];
	for (int i=1; i<=n; i++)
		BITree[i] = 0;

	// Store the actual values in BITree[] using update()
	for (int i=0; i<n; i++)
		updateBIT(BITree, n, i, arr[i]);

	// Uncomment below lines to see contents of BITree[]
	//for (int i=1; i<=n; i++)
	//	 cout << BITree[i] << " ";

	return BITree;
}

// SERVES THE PURPOSE OF getElement()
// Returns sum of arr[0..index]. This function assumes
// that the array is preprocessed and partial sums of
// array elements are stored in BITree[]
int getSum(int BITree[], int index)
{
	int sum = 0; // Initialize result

	// index in BITree[] is 1 more than the index in arr[]
	index = index + 1;

	// Traverse ancestors of BITree[index]
	while (index>0)
	{
		// Add current element of BITree to sum
		sum += BITree[index];

		// Move index to parent node in getSum View
		index -= index & (-index);
	}
	return sum;
}

// Updates such that getElement() gets an increased
// value when queried from l to r.
void update(int BITree[], int l, int r, int n, int val)
{
	// Increase value at 'l' by 'val'
	updateBIT(BITree, n, l, val);

	// Decrease value at 'r+1' by 'val'
	updateBIT(BITree, n, r+1, -val);
}

int fun(int a){
    int ans = 0;
    while(a>0){
        ans += a%10;
        a/=10;
    }
    return ans;
}


// Driver program to test above function
int main()
{
    // fastio
    int t;cin>>t;
    int n,q,l,r,c,x;
    while(t--){
        cin>>n>>q;
        vi arr(n);
        vi b(n);
        inp(b,n);
        int *BITree = constructBITree(arr, n);
        rep(0,q,i){
            cin>>c;
            if(c==1){
                cin>>l>>r;
                update(BITree, l, r, n, 1);
            }else{
                cin>>x;
                int a = getSum(BITree,x);
                rep(0,min(a,3),j){
                    b[x] = fun(b[x]);
                }
                cout<<b[x];nl;
            }
        }
    }
	return 0;
}


/*





*/
