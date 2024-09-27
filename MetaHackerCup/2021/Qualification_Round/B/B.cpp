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

void solve(){
    ll n;
    cin>>n;
    string a[n];
    rep(0,n,i){
        cin>>a[i];
    }
    ll m=mll;
    ll sum=0,num=0,x=-1,y=-1;
    map<int, int> map;
    rep(0,n,i){
        sum=0;
        rep(0,n,j){
            if(a[i][j]=='O') {sum=-1;break;}
            if(a[i][j]=='.') {
                x=i;y=j;
                sum++;
            }
        }
        if(sum!=-1){
            if(sum<m){m=sum;num=1;}
            else if(sum==m) num++;
            if(sum==1) map[(x*n)+y]=1;
        }
    }
    // if(num) cout<<m<<" "<<num;
    // else cout<<"Impossible";
    rep(0,n,i){
        sum=0;
        rep(0,n,j){
            if(a[j][i]=='O') {sum=-1;break;}
            if(a[j][i]=='.') {
                x=j;y=i;
                sum++;
            }
        }
        if(sum!=-1){
            if(sum<m) {m=sum;num=1;}
            else if(sum==m){
                if(map[(x*n)+y]!=1) num++;
            }
        }
    }
    if(num) cout<<m<<" "<<num;
    else cout<<"Impossible";
}
int main(){
   // fastio;
   // ++*(int*)0;// crash
   freopen("in.txt","r",stdin);freopen("outt.txt","w+",stdout);
   int t;
   cin>>t;
   rep(0,t,i){
       // solve();cout<<endl;
       cout<<"Case #"<<i+1<<": ";
       solve();nl;
   }
   return 0;
}

/*

*/
