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


// Function to return the next random number
int getNum(vector<int>& v)
{

	// Size of the vector
	int n = v.size();

	// Generate a random number
	srand(time(NULL));

	// Make sure the number is within
	// the index range
	int index = rand() % n;

	// Get random number from the vector
	int num = v[index];

	// Remove the number from the vector
	swap(v[index], v[n - 1]);
	v.pop_back();

	// Return the removed number
	return num;
}

// Function to generate n non-repeating random numbers
vi generateRandom(int n)
{
	vector<int> v(n);

	// Fill the vector with the values
	// 1, 2, 3, ..., n
	for (int i = 0; i < n; i++)
		v[i] = i + 1;

	// While vector has elements
	// get a random number from the vector and print it
    vi nv;
	while (v.size()) {
		nv.push_back( getNum(v) );
	}
    return nv;
}

void solve(){
    int n;
    srand(time(0));
    n = rand()%100;
    vi v = generateRandom(n);
    for(auto x:v) {
        cout<<3<<" "<<3<<" "<<x;nl;
        vi y = generateRandom(x);
        for(auto z:y) cout<<z<<" ";nl;
    }
}
int main(){
   fastio;
   // ++*(int*)0;// crash
   // freopen("in.txt","r",stdin);
   freopen("outt.txt","w+",stdout);
   {
       // cout<<solve();nl;
       solve();nl;
       // cout<<"Case #"<<TTTT<<": "<<solve();
       // if(i<t-1) nl;
   }
   return 0;
}

/*

*/
