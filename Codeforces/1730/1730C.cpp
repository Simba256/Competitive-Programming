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
#define inp(v,n) {int aaaa; for(int iiii=0;iiii<n;iiii++){cin>>aaaa;v.push_back(aaaa);}}
#define mll 9223372036854775807
#define mp 1000000007
#define pi 3.14159265358979
#define prin(a,len) rep(0,len,i){rep(0,len,j) cout<<a[i][j]<<" ";nl;}nl;

void solve(){
    string s;
    cin>>s;
    int in;
    vc v;
    std::map<char, int> m;
    rep(0,s.length(),i){
        v.push_back(s[i]);
        m[s[i]]=i+1;
    }
    so(v);
    rep(1,10,i){
        m[char(i)]=max(m[char(i-1)],m[char(i)]);
    }
    vc nv;
    rep(0,s.length(),i){
        if(s[i]=='0') {cout<<s[i];continue;}
        if(i+1<m[s[i-1]]) {nv.push_back(s[i]);so(nv);continue;}
        else{
            if(nv.size()>0){
                while(s[i]==nv[0]){ cout<<nv[0];nv.erase(nv.begin());}
            }
            cout<<s[i];
        }
    }
}
int main(){
   fastio;
   // ++*(int*)0;// crash
   // freopen("consecutive_cuts_chapter_2_input.txt","r",stdin);freopen("outt.txt","w+",stdout);
   tcs{
       // cout<<solve();nl;
       solve();nl;
       // cout<<"Case #"<<i+1<<": "<<solve();
       // if(i<t-1) nl;
   }
   return 0;
}

/*
314752277691991
111334567888999


4
04829
9
01
314752277691991


*/