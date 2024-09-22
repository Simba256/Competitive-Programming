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

int solve(){
    int n,x,a,ma=0,mi=1000000001,c=0;
    cin>>n>>x;
    rep(0,n,i){
        cin>>a;
        if(a>ma) ma=a;
        if(a<mi) mi=a;
        if(ma-mi>2*x){
            c++;
            ma=a;
            mi=a;
        }
    }
    return c;
}
int main(){
    // fastio;
    tcs{
        cout<<solve()<<endl;
        // cout<<endl;
    }
    return 0;
}
//
// a-x<v<a+x
// while max-min<2x continue
// else c++
