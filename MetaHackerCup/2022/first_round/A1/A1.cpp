using namespace std;
#include<bits/stdc++.h>
#include <cstdio>

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
#define dbb(n) cout<<#n<<" = "<<n<<"\n"
#define rep(l, r, i) for (int i = l; i < r; ++i)
#define per(l, r, i) for (int i = r; i >= l; --i)
#define repp(l, r, i) for (int i = l; i <= r; ++i)
#define print(a) for(auto i: a) cout<<i<<" "; nl;
#define so(v) sort(v.begin(),v.end())
#define inp(v,n) {int aaaa; for(int iiii=0;iiii<n;iiii++){cin>>aaaa;v.push_back(aaaa);}}
#define mll 9223372036854775807
#define prin(a,len) rep(0,len,i){rep(0,len,j) cout<<a[i][j]<<" ";nl;}nl;

string solve(){

    int n,k;
    cin>>n>>k;

    int in=n,c;
    vi a,b;

    rep(0,n,i){
        cin>>c;
        a.push_back(c);
    }

    rep(0,n,i){
        cin>>c;
        b.push_back(c);
        if(b[i]==a[0]) in=i;
    }

    if(n==2){
        if(k%2==in) return "YES";
        else return "NO";
    }
    if(k==0) in=0;
    if(in==0 && k==1) return "NO";
    rep(0,n,i){
        if(in+i<n){
            // cout<<"a:"<<i<<" b:"<<in+i;nl;
            if(a[i]==b[in+i]) continue;
            else return "NO";
        }
        else{
            // cout<<"a:"<<i<<" b:"<<in+i-n;nl;
            if(a[i]==b[in+i-n]) continue;
            else return "NO";
        }
    }
    return "YES";
}
int main(){
   // fastio;
   // ++*(int*)0;// crash
   freopen("consecutive_cuts_chapter_1_input.txt","r",stdin);freopen("outt.txt","w+",stdout);
   int t;
   cin>>t;
   rep(0,t,i){
       // if(i>=23) db(2);
       // solve();cout<<endl;
       cout<<"Case #"<<i+1<<": "<<solve();
       if(i<t-1) nl;
   }
   return 0;
}

/*

*/
