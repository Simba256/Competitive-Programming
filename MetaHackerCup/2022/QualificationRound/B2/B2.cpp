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


ll fun(int a,int b, ll c,ll d,string s[]){
    ll sum=0;
    if(a==0 && b==0){
        sum+=(s[a+1][b]=='#');
        sum+=(s[a][b+1]=='#');
        sum+=2;
    }
    else if(a==c-1 && b==d-1){
        sum+=(s[a-1][b]=='#');
        sum+=(s[a][b-1]=='#');
        sum+=2;
    }
    else if(a==0 && b==d-1){
        sum+=(s[a+1][b]=='#');
        sum+=(s[a][b-1]=='#');
        sum+=2;
    }
    else if(a==c-1 && b==0){
        sum+=(s[a-1][b]=='#');
        sum+=(s[a][b+1]=='#');
        sum+=2;
    }
    else if(a==0){
        sum+=(s[a+1][b]=='#');
        sum+=(s[a][b+1]=='#');
        sum+=(s[a][b-1]=='#');
        sum++;
    }
    else if(a==c-1){
        sum+=(s[a-1][b]=='#');
        sum+=(s[a][b+1]=='#');
        sum+=(s[a][b-1]=='#');
        sum++;
    }
    else if(b==0){
        sum+=(s[a-1][b]=='#');
        sum+=(s[a+1][b]=='#');
        sum+=(s[a][b+1]=='#');
        sum++;
    }
    else if(b==d-1){
        sum+=(s[a-1][b]=='#');
        sum+=(s[a+1][b]=='#');
        sum+=(s[a][b-1]=='#');
        sum++;
    }
    else{
        sum+=(s[a-1][b]=='#');
        sum+=(s[a+1][b]=='#');
        sum+=(s[a][b+1]=='#');
        sum+=(s[a][b-1]=='#');
    }
    return 4-sum;
}

void solve(){
    ll n,m;
    cin>>n>>m;
    string s[n];
    rep(0,n,i){
        cin>>s[i];
    }
    ll t=0;
    if(n>1 && m>1){
        rep(0,n,i){
            rep(0,m,j){
                if(s[i][j]=='#') continue;
                if(fun(i,j,n,m,s)>=2) s[i][j]='^';
                else{
                    if(s[i][j]=='.') continue;
                    else{
                        cout<<"Impossible";
                        return;
                    }
                }
            }
        }
        cout<<"Possible\n";
        rep(0,n,i){
            rep(0,m,j){
                cout<<s[i][j];
            }
            if(i<n-1) cout<<"\n";
        }
    }
    else{
        rep(0,n,i){
            rep(0,m,j){
                if(s[i][j]=='^') t++;
            }
        }
        if(t==0){
            cout<<"Possible";nl;
            rep(0,n,i){
                cout<<s[i];
                if(i<n-1) cout<<"\n";
            }
        }
        else cout<<"Impossible";
    }
}
int main(){
   fastio;
   // ++*(int*)0;// crash
   // freopen("in.txt","r",stdin);freopen("outt.txt","w+",stdout);
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

1 1
1 1

1 1 1
1 1 1

1 1
1 1
1 1

1 1 1
1 1 1
1 1 1

1 1 1 1 1  no trees only


*/
