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

int ips(int a){
    if(sqrt(a)==int(sqrt(a))) return 1;
    else return 0;
}
ll nps(int a){
    if(ips(a)) return a;
    else{
        ll b = int(sqrt(a))+1;
        return b*b;
    }
}
void rec(int n,int ns){
    ll a=sqrt(ns);
    if(ips(n-1)){
        per(0,n-1,i) cout<<i<<" ";
    }
    else{
        while(ns+1-n<=a*a){
            a--;
        }
        a++;
        // cout<<"a="<<a<<endl;
        if(n<3){
            // db(n)
            per(0,n-1,i) cout<<i<<" ";
            // db(2)
        }
        else{
            // db(1)
            rec(ns+1-n,a*a);
            // db(2)
            // cout<<endl;
            // cout<<"ns+2-n="<<ns+2-n<<" n-1="<<n-1<<endl;
            // if()
            per(ns+1-n,n-1,i){
                cout<<i<<" ";
            }
            // db(3)
        }
    }
}
int solve(){
    // fastio;
    int n;
    cin>>n;

    // if(ips(n)){
    //     cout<<0<<" ";
    //     if(n>1){
    //         per(n-1,1,i) cout<<i<<" ";
    //     }
    //     return 1;
    // }else if(ips(n-1)){
    //     per(n-1,0,i) cout<<i<<" ";
    //     return 2;
    // }else{
        // vector<int> v;
        rec(n,nps(n));
        // for(auto x:v) cout<<x<<" ";
        return 3;
    // }
    // cout<<ips(a);
}

int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        // cout<<i<<"    ";
        solve();
        cout<<endl;
    }
    return 0;
}


// 1   0
// 2   1 0
// 3   1 0 2
// 4   0 3 2 1
// 5   4 3 2 1 0
// 6   0 3 2 1 5 4
// 7   1 0 2 6 5 4 3
// 8   1 0 7 6 5 4 3 2
// 9   0 8 7 6 5 4 3 2 1
// 10  9 8 7 6 5 4 3 2 1 0
// 11  0 3 2 1 5 4 10 9 8 7 6
// recursion(n){
//     recursion(v, next square +1 -n);
//     if(n!=perfect_square or perfect_square+1){
//         v.push_back(n-1 to next square +1 -n)
//     }
// }*/
