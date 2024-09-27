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
#define inp(v,n) {int aaaa; for(int iiii=0;iiii<n;iiii++){cin>>aaaa;v.push_back(aaaa);}}


// ll add(char a,char b,char c, char d){
// }
void solve(){
    ll n,m,ma,s=-1,e=-1,f=0,c;
    cin>>n>>m;
    vector<vector<ll>> a;
    // ll a[n][m];
    vi d;
    rep(0,n,i){
        vll b;
        rep(0,m,j){
            cin>>c;
            b.push_back(c);
        }
        a.push_back(b);
        so(b);
        c=0;
        rep(0,m,j){
            if(a[i][j]!=b[j]){
                d.push_back(j);
                c++;
            }
        }
        if(c>2) f=1;
    }
    so(d);
    // std::sort(v.begin(), v.end());
    // Now v becomes 1 1 2 2 3 3 3 3 7 7 8 10
    vector<int>::iterator ip;
    // Using std::unique
    ip = unique(d.begin(), d.end());
    // Now v becomes {1 2 3 7 8 10 * * * * * *}
    // * means undefined
    // Resizing the vector so as to remove the undefined terms
    int di=distance(d.begin(), ip);
    if(di>2) f=1;
    // if(m==2 && di==2) f=1;
    if(m==2){
        rep(0,n,i){
            if(a[i][0]<a[i][1] && f==0) f=-1;
            else if(a[i][0]>a[i][1] && f==0) f=-2;
            else if(a[i][0]<a[i][1] && f==-2){
                f=1;
                break;
            }
            else if(a[i][0]>a[i][1] && f==-1){
                f=1;
                break;
            }
        }
    }
    if(f==1){
        cout<<-1;
        return;
    }
    if(d.empty()){
        s=0;
        e=0;
    }
    else if(di==2){
        s=d[0];
        e=d[1];
    }
    else{
        ll g=0,h=m;
          rep(0,n,i){
              rep(0,m,j){
                  if(a[i][j]>a[i][d[0]] && a[i][j]<h) h=j;
                  if(a[i][j]<a[i][d[0]] && a[i][j]>g) g=j;
                  if(g>h){
                      cout<<1;
                      return;
                  }
              }
          }
          e=g;
    }
    cout<<s+1<<" "<<e+1;
    return;
}
int main(){
   // fastio;
   tcs{
       solve();cout<<endl;
       // cout<<solve()<<endl;
   }
   return 0;
}

/*

*/
