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
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll a[n];
    std::map<int, int> m;
    ll sum=0;
    rep(0,n,i){
        if(n%2 && i==n/2){
            sum+=i;
            continue;
        }
        if(i<n/2){
            if(s[i]=='L') {
                sum+=i;
                m[i]=1;
            }
            else{
                sum+=n-1-i;
            }
            continue;
        }
        else{
            if(s[i]=='R'){
                sum+=n-1-i;
                m[n-1-i]++;
            }
            else sum+=i;
            continue;
        }
    }
    ll c=0;
//     cout<<"sum="<<sum;nl;
//     map<int, int>::iterator itr;
//     for (itr = m.begin(); itr != m.end(); ++itr) {
//         cout << '\t' << itr->first << '\t' << itr->second
//              << '\n';
//     }
// nl;
    for ( const auto &myPair : m) {
        rep(0,myPair.second,i){
            sum+=n-1-2*(myPair.first);
            cout<<sum<<" ";
            c++;
        }
    }
    rep(c,n,i){
        cout<<sum<<" ";
    }
    return;
}
int main(){
   fastio;
   tcs{
       //TTTT
       solve();nl;
       // cout<<solve();nl;
   }
   return 0;
}

/*
i,n-1-i
*/
