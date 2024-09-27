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
    ll n,k,c;
    cin>>n>>k;
    unordered_map<ll,ll>m;
    unordered_map<ll,unordered_map<ll,ll>>p;
    vll a,b;
    vll v,x;
    rep(0,n,i){
        cin>>c;
        a.push_back(c);
        m[c]++;
        if(m[c]*m[c]>n) x.push_back(c);
    }

    for(auto y:x){
        ll l=0;
        rep(1,n,i){
            if(a[i]==a[i-1]) l++;
            else{p[y][l]++;l=0;}
        }
        rep(1,n,i){
            if(b[i]==b[i-1]) l++;
            else{p[y][l]--;l=0;}
        }
    }

    rep(0,n,i){
        cin>>c;
        b.push_back(c);
        if(b[i]==a[0]) v.push_back(i);
    }


    ll f=0;
    if(k==0) {
        rep(0,n,i){
            if(a[i]==b[i]) continue;
            else return "NO";
        }
        return "YES";
    }
    if(n==2){
        if(a[0]==a[1]) return "YES";
        if(k%2==v[0]) return "YES";
        else return "NO";
    }
    for(auto in:v){
        if(in==0 && k==1) continue;
        rep(0,n,i){
            f=1;
            if(in+i<n){
                // cout<<"a:"<<i<<" b:"<<in+i;nl;
                if(a[i]==b[in+i]) continue;
                else {
                    f=0;
                    break;
                }
            }
            else{
                // cout<<"a:"<<i<<" b:"<<in+i-n;nl;
                if(a[i]==b[in+i-n]) continue;
                else {
                    f=0;
                    break;
                }
            }
        }
        if(f) return "YES";
    }
    return "NO";
}
int main(){
   // fastio;
   // ++*(int*)0;// crash
   freopen("consecutive_cuts_chapter_2_input.txt","r",stdin);freopen("outt.txt","w+",stdout);
   int t;
   cin>>t;
   rep(0,t,i){
       // solve();cout<<endl;
       cout<<"Case #"<<i+1<<": "<<solve();
       if(i<t-1) nl;
   }
   return 0;
}

/*

*/
