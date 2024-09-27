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


ll fun(vector<int> v,int n,int j){
    ll s=0,c=0;
    for(int i=1;i<n-1;i+=2,c++){
        if(j==c) i++;
        // cout<<"i="<<i<<endl;
        s+=max(0,max(v[i-1],v[i+1])+1-v[i]);
    }
    return s;
}

ll solve(){
    ll n;
    cin>>n;
    vi v;
    inp(v,n)
    if(n%2) return fun(v,n,2*n);
    else {
        ll a=9223372036854775807;
        ll b=fun(v,n,0);
        a=min(a,b);
        rep(0,n/2-1,i){
            b+=max(0,max(v[2*i],v[2*i+2])+1-v[2*i+1]) - max(0,max(v[2*i+1],v[2*i+3])+1-v[2*i+2]);
            a=min(a,b);
            // cout<<"b="<<b<<endl;
        }
        return a;
    }
}
int main(){
    // fastio;
    tcs{
        cout<<solve()<<endl;
        // cout<<endl;
    }
    return 0;
}

/*
1 2 3 4 5 6 7 8 9 10 11 12
- 1 - 2 - 3 - 4 - 5  -  -
- 1 - 2 - 3 - 4 - -  5  -
- 1 - 2 - 3 - - 4 -  5  -
1 2 3 4 5 6 7 8
- 1 - 2 - 3 - -


- 1 - 2 - - 3 -
- 1 - - 2 - 3 -
max(0,max(v[2],v[4])+1-v[3]) - max(0,max(v[3],v[5])+1-v[4])
- 1 - - 2 - 3 -
- - 1 - 2 - 3 -
max(0,max(v[0],v[2])+1-v[1]) - max(0,max(v[1],v[3])+1-v[2])



*/
