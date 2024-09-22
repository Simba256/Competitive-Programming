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
ll fun(int a,vi m,int l){
    // cout<<"l in:"<<l;nl;
    if(a>=m[l]&&a<m[l+1]) return l;
    else if(a>=m[l]){
        if(l==1) return fun(a,m,2);
        else return fun(a,m,l+l/2);
    }
    else{
        if(l==0) return 0;
        return fun(a,m,l/2);
    }
}
void solve(){
    int n,k;
    cin>>n>>k;
    // vi v;
    vi m;
    vll s;
    int a;
    cin>>a;
    // v.push_back(a);
    m.push_back(a);
    s.push_back(a);
    rep(1,n,i){
        cin>>a;
        // v.push_back(a);
        m.push_back(max(m[i-1],a));
        s.push_back(s[i-1]+a);
    }
    per(0,n-2,i){
        if(m[i]==m[i+1]) s[i]=s[i+1];
    }
    // cout<<"ams:";
    // print(v);
    // print(m);
    // print(s);

    if(n==1){
        rep(0,k,i){
            cin>>a;
            if(a>=m[0]) cout<<s[0]<<" ";
            else cout<<"0 ";
        }
    }
    else{
        rep(0,k,i){
            int l=n-1;
            cin>>a;
            if(a==0){
                cout<<0<<" ";
                continue;
            }
            // cout<<"a:"<<a;nl;
            l/=2;
            if(a>=m[n-1]) cout<<s[n-1]<<" ";
            else cout<<s[fun(a,m,l)]<<" ";
            // cout<<ma[a]<<" ";
        }
    }
}
int main(){
   fastio;
   // ++*(int*)0;// crash
   // freopen("in.txt","r",stdin);freopen("outt.txt","w+",stdout);
   tcs{
       // cout<<solve();nl;
       solve();nl;
       // cout<<"Case #"<<i+1<<": "<<solve();
       // if(i<t-1) nl;
   }
   return 0;
}

/*

*/
