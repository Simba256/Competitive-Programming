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

void solve(){
    int n;
    vll s;
    string a,b;
    cin>>n>>a>>b;
    if(a[0]==b[0]){
        rep(0,n,i){
            if(i){
                if(a[i]=='0' && a[i-1]=='1') s.push_back(i+1);
                else if(a[i]=='1' && a[i-1]=='0') s.push_back(i);
            }
            else{
                if(a[i]=='0') s.push_back(1);
            }
            // if(i==n-1) s.push_back(n);
            if(a[i]==b[i]) continue;
            else{
                cout<<"NO";nl;
                return;
            }
        }
    }
    else{
        rep(0,n,i){
            if(i){
                if(a[i]=='0' && a[i-1]=='1') s.push_back(i+1);
                else if(a[i]=='1' && a[i-1]=='0') s.push_back(i);
            }
            else{
                if(a[i]=='0') s.push_back(1);
            }
            // if(i==n-1) s.push_back(n);
            if(a[i]!=b[i]) continue;
            else{
                cout<<"NO";nl;
                return;
            }
        }
    }
    if(a[n-1]=='0') s.push_back(n);
    cout<<"YES";nl;
    ll m=s.size()/2;
    if(a[0]=='0' && a[n-1]=='0'){
        cout<<m-1<<"\n";
        for(int i=1;i<m*2-1;i++){
            if(i%2) cout<<s[i]+1<<" ";
            else cout<<s[i]-1<<" \n";
        }
    }
    else{
        if(m){
            cout<<m+2;nl;
            bool f=0;
            for(auto x:s){
                cout<<x<<" ";
                if(f) cout<<"\n";
                if(f) f=0;
                else f=1;
            }
        }
        else{
            cout<<2;nl;
        }
        cout<<1<<" "<<1;nl;
        cout<<2<<" "<<n;nl;
    }


}
int main(){
   fastio;
   // ++*(int*)0;// crash
   // freopen("in.txt","r",stdin);freopen("outt.txt","w+",stdout);
   tcs{
       // cout<<solve();nl;
       solve();
       // cout<<"Case #"<<TTTT<<": "<<solve();
       // if(i<t-1) nl;
   }
   return 0;
}

/*


1110010
0001101

0000010
0000010

0000000
1111111

1111110
1111110

1111111
0000000

0000000
0000000


*/
