using namespace std;
#include<bits/stdc++.h>

#define nl cout<<"\n"
#define ve vector
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vc vector<char>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tcs int tttt;cin>>tttt;for(int TTTT=1;TTTT<=tttt;TTTT++)
#define db(n) cout<<"here "<<n<<", "; //for debugging
#define dbb(n) cout<<#n<<" = "<<n<<endl
#define rep(l, r, i) for (int i = l; i < r; ++i)
#define per(l, r, i) for (int i = r; i >= l; --i)
#define repp(l, r, i) for (int i = l; i <= r; ++i)
#define print(a) for(auto i: a) cout<<i<<" "; nl;
#define so(v) sort(v.begin(),v.end())
#define inp(v,n) {int aaaa; for(int iiii=0;iiii<n;iiii++){cin>>aaaa;v.push_back(aaaa);}}


// ll add(char a,char b,char c, char d){
// }
string solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    if(n==5){
        std::map<char, int> m;
        rep(0,5,i){
            m[s[i]]++;
        }
        if(m['T']&&m['i']&&m['m']&&m['u']&&m['r']) return "YES";
        else return "NO";
    }
    else return "NO";
}
int main(){
   fastio;
   tcs{
       //TTTT
       // solve();cout<<endl;
       cout<<solve();nl;
   }
   return 0;
}

/*

*/
