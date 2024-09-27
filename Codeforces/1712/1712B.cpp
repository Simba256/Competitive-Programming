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
#define inp(v,n) int a; for(int i=0;i<n;i++){cin>>a;v.push_back(a);}


ll lcm(ll n1,ll n2){
    ll max = n2;

        do
        {
            if (max % n1 == 0 && max % n2 == 0)
            {
                // cout << "LCM = " << max;
                break;
            }
            else
                ++max;
        } while (true);
        return max;
}

void solve(){
    ll n;
    cin>>n;
    ll i=1;
    if(n%2) {
        cout<<i<<" ";
        i++;
    }
    while(i<=n){
        cout<<i+1<<" "<<i<<" ";
        i+=2;
    }

}
int main(){
    // fastio;
    tcs{
        // cout<<solve()<<endl;
        // cout<<endl;
        solve();
        cout<<endl;
    }
    return 0;
}

/*
1 2 3 4 5 6
6 5 4 3 2 1

6 1 2 3 4 5
2 3 4 5 6 1

1 2 3 4 5 6
5 6 1 2 3 4

1 2 3 4
4 3 2 1  20
4 1 2 3  24
3 4 1 2  14
2 3 4 1  24
1 2 3 4
2 1 4 3  28

1 2 3    6
3 2 1    8
1 3 2    13


*/
