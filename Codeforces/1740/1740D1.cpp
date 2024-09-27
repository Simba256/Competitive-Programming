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
#define per(l, r, i) for (int i = r-1; i >= l; --i)
#define print(a) for(auto i: a) cout<<i<<" "; nl;
#define so(v) sort(v.begin(),v.end())
#define sod(a) sort(a.begin(), a.end(), greater<int>())
#define inp(v,n) {int aaaa; for(int iiii=0;iiii<n;iiii++){cin>>aaaa;v.push_back(aaaa);}}
#define mll 9223372036854775807
#define mp 1000000007
#define pi 3.14159265358979
#define prin(a,len) rep(0,len,i){rep(0,len,j) cout<<a[i][j]<<" ";nl;}nl;
#define printm(a) for(auto &x:a) {cout<<x.first<<" "<<x.second;nl;}

string solve(){
    int n,m,k;
    cin>>n>>m>>k;
    ll a[k];
    unordered_map<ll,bool> map;
    rep(0,k,i) cin>>a[i];
    for(ll num = k,i=0,c=0;num>0;i++){
        if(i==k) i--;
        // cout<<a[i]<<":";nl;
        if(a[i]==num){
            // cout<<"here1 num:"<<num<<" "<<" "<<"c:"<<c;nl;
            num--;
            // cout<<"num:"<<num<<" "<<" "<<"c:"<<c<<" m:";
            // for(auto p:map) if(p.second) cout<<p.first<<" ";nl;
            continue;
        }
        if(map[num]){
            // cout<<"here2 num:"<<num<<" "<<" "<<"c:"<<c;nl;
            map[num] = 0;
            c--;
            num--;
            i--;
            // cout<<"num:"<<num<<" "<<" "<<"c:"<<c<<" m:";
            // for(auto p:map) if(p.second) cout<<p.first<<" ";nl;
            continue;
        }
        // cout<<"here3 num:"<<num<<" "<<" "<<"c:"<<c;nl;
        map[a[i]] = 1;
        c++;
        if(c>=n*m-3) return "TIDAK";
        // cout<<"num:"<<num<<" "<<" "<<"c:"<<c<<" m:";
        // for(auto p:map) if(p.second) cout<<p.first<<" ";nl;

    }
    return "YA";

}
int main(){
   fastio;
   // ++*(int*)0;// crash
   // freopen("in.txt","r",stdin);freopen("outt.txt","w+",stdout);
   tcs{
       cout<<solve();nl;
       // solve();nl;
       // cout<<"Case #"<<TTTT<<": "<<solve();
       // if(i<t-1) nl;
   }
   return 0;
}

/*
1
3 3 15
1 2 3 4 5 6 15 14 7 13 12 11 10 9 8

1
4 4 20
1 2 3 4 5 6 7 8 9 10 11 12 13 20 19 18 17 16 14 15



*/
