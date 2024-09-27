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









// C++ program for a Trie based O(n) solution to find max
// subarray XOR
#include<bits/stdc++.h>
using namespace std;

// Assumed int size
#define INT_SIZE 32

// A Trie Node
struct TrieNode
{
	int value; // Only used in leaf nodes
	TrieNode *arr[2];
};

// Utility function to create a Trie node
TrieNode *newNode()
{
	TrieNode *temp = new TrieNode;
	temp->value = 0;
	temp->arr[0] = temp->arr[1] = NULL;
	return temp;
}

// Inserts pre_xor to trie with given root
void insert(TrieNode *root, int pre_xor)
{
	TrieNode *temp = root;

	// Start from the msb, insert all bits of
	// pre_xor into Trie
	for (int i=INT_SIZE-1; i>=0; i--)
	{
		// Find current bit in given prefix
		bool val = pre_xor & (1<<i);

		// Create a new node if needed
		if (temp->arr[val] == NULL)
			temp->arr[val] = newNode();

		temp = temp->arr[val];
	}

	// Store value at leaf node
	temp->value = pre_xor;
}

// Finds the maximum XOR ending with last number in
// prefix XOR 'pre_xor' and returns the XOR of this maximum
// with pre_xor which is maximum XOR ending with last element
// of pre_xor.
int query(TrieNode *root, int pre_xor)
{
	TrieNode *temp = root;
	for (int i=INT_SIZE-1; i>=0; i--)
	{
		// Find current bit in given prefix
		bool val = pre_xor & (1<<i);

		// Traverse Trie, first look for a
		// prefix that has opposite bit
		if (temp->arr[1-val]!=NULL)
			temp = temp->arr[1-val];

		// If there is no prefix with opposite
		// bit, then look for same bit.
		else if (temp->arr[val] != NULL)
			temp = temp->arr[val];
	}
	return pre_xor^(temp->value);
}

// Returns maximum XOR value of a subarray in arr[0..n-1]
int maxSubarrayXOR(int arr[], int n)
{
	// Create a Trie and insert 0 into it
	TrieNode *root = newNode();
	insert(root, 0);

	// Initialize answer and xor of current prefix
	int result = INT_MIN, pre_xor =0;

	// Traverse all input array element
	for (int i=0; i<n; i++)
	{
		// update current prefix xor and insert it into Trie
		pre_xor = pre_xor^arr[i];
		insert(root, pre_xor);

		// Query for current prefix xor in Trie and update
		// result if required
		result = max(result, query(root, pre_xor));
	}
	return result;
}

// Driver program to test above functions
void solve()
{
    int n;
    cin>>n;
	int arr[n];
    rep(0,n,i) cin>>arr[i];
	cout << maxSubarrayXOR(arr, n);
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





*/
