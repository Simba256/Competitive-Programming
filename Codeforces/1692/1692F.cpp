using namespace std;
#include<bits/stdc++.h>

#define nl cout<<"\n"
#define ve vector
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vc vector<char>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define tcs int tttt;cin>>tttt;for(int TTTT=1;TTTT<=tttt;TTTT++)
#define db(n) cout<<"here "<<n<<", "; //for debugging
#define dbb(n) cout<<#n<<" = "<<n<<endl
#define rep(l, r, i) for (int i = l; i < r; ++i)
#define per(l, r, i) for (int i = r; i >= l; --i)
#define repp(l, r, i) for (int i = l; i <= r; ++i)
#define print(a) for(auto i: a) cout<<i<<" "; nl;


string solve(){
    int n,a,l=0;
    cin>>n;
    int c[10]={0};
    rep(0,n,i){
        cin>>a;
        c[a%10]++;
    }
    // db(0)
    vector<int> v;
    // rep(0,v.size(),i){
    //     cout<<v[i]<<" ";
    // }
    rep(0,10,i){
        rep(0,min(c[i],3),j){
            v.push_back(i);
            l++;
        }
    }
    // db(1)
    // rep(0,v.size(),i){
    //     cout<<v[i]<<" ";
    // }
    // for(auto x:v) cout<<x<<" ";
    rep(0,l-2,i){
        rep(i+1,l-1,j){
            rep(j+1,l,k){
                if((v[i]+v[j]+v[k])%10==3) return "YES";
            }
        }
    }
    return "NO";

}

int main(){
    // fastio;
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        // cout<<i<<"    ";
        cout<<solve()<<endl;
    }
    return 0;
}

// 3:
//  1 1 1
//  0 1 2
//  0 0 3
// 13:
//  0 6 7
//  0 5 8
//  0 4 9
//  1 6 6
//  1 7 5
//  1 8 4
//  1 9 3
//  2 5 6
//  2 4 7
//  2 3 8
//  2 2 9
//  3 5 5
//  3 4 6
//  3 3 7
//  4 4 5
// 23:
//  9 7 7
//  9 8 6
//  9 9 5
//  8 7 8
