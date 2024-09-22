using namespace std;
#include<bits/stdc++.h>

#define nl cout<<"\n"
#define ve vector
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vc vector<char>
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


ll pow(int a,int b){
    ll num = 1;
    rep(0,b,i){
        num*=a;
    }
    return num;
}
int pow2(int a){
    if(a%2) return 0;
    else return pow2(a/2)+1;
}

int max2(int a){
    int num=0,d=2;
    while(int(a/d)>0){
        num+=int(a/d);
        d*=2;
    }
    return num;
}

int maxpow2(int a){
    int num=1,c=0;
    while(num*2<=a){
        num*=2;
        c++;
    }
    return c;
}
int solve(){
    int n;
    cin>>n;
    ll a[n],num=n;
    rep(0,n,i){
        cin>>a[i];
        num-=pow2(a[i]);
    }
    if(num<1) return 0;
    // cout<<"num="<<num;nl;
    // cout<<"max2(n):"<<max2(n);nl;
    if(num>max2(n)) return -1;

    int max2p = maxpow2(n);
    int max2pnum = pow(2,max2p);
    int count = 1;
    while(1){
        int j=n/max2pnum;
        if(num<=j*max2p) return count;
        count++;
        num-=j;
    }
}
int main(){
   fastio;
   // ++*(int*)0;// crash
   // freopen("in.txt","r",stdin);freopen("outt.txt","w+",stdout);
   tcs{
       cout<<solve();nl;
       // cout<<pow2(TTTT);nl;
       // cout<<max2(TTTT);nl;
       // solve();nl;
       // cout<<"Case #"<<TTTT<<": "<<solve();
       // if(i<t-1) nl;
   }
   return 0;
}

/*

1
2  1
3  0
4  2
5  0
6  1
7  0
8  3
9  0
10 1
11 0
12 2
13 0
14 1
15 0
16 4
17 0
18 1
19 0
20 2

1/4 + 1/8 + 1/16 + 1/32


*/
