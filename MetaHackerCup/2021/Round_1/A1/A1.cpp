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


// ll add(char a,char b,char c, char d){
// }
ll solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll c=0;
    char a='a';
    rep(0,n,i){
        if(a=='a' && (s[i]=='O' || s[i]=='X')){
            a=s[i];
            continue;
        }
        if((s[i]=='O' || s[i]=='X') && s[i]!=a){
            a=s[i];
            c++;
        }
    }
    return c;
}
int main(){
   fastio;
   // ++*(int*)0;// crash
   // freopen("weak_typing_chapter_1_input.txt","r",stdin);freopen("outt.txt","w+",stdout);
   int t;
   cin>>t;
   rep(0,t,i){
       // solve();cout<<endl;
       cout<<"Case #"<<i+1<<": "<<solve()<<"\n";
   }
   return 0;
}

/*

*/
