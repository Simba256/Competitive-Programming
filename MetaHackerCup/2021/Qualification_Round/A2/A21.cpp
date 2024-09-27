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
// string t[300];

// ll fun(char a,char b,map<char, vector<ll>> &in,string t[]){
//     if(a==b) return 0;
//     for(auto x:in[a]){
//         if(t[k][1]==b) return 1;
//     }
// }

// void prin(ll a[][100000],ll len){
//     rep(0,len,i) {
//         rep(0,len,j) cout<<a[i][j]<<" ";
//         nl;
//     }nl;
// }
ll solve(){
    string s;
    cin>>s;
    ll l=s.length();
    vc v;
    rep(0,l,i){
        v.push_back(s[i]);
    }
    so(v);
    vc nv;
    nv.push_back(v[0]);
    map<char,int> m;
    m[v[0]]=1;
    ll len=1;
    rep(1,l,i){
        if(v[i]!=v[i-1]){
            len++;
            m[v[i]]=len;
            nv.push_back(v[i]);
        }
    }




    ll k;
    cin>>k;
    string q[k];
    rep(0,k,i){
        cin>>q[i];
        if(m[q[i][0]]==0){
            len++;
            m[q[i][0]]=len;
            nv.push_back(q[i][0]);
        }
        if(m[q[i][1]]==0){
            len++;
            m[q[i][1]]=len;
            nv.push_back(q[i][1]);
        }
    }

    ll a[len][len]; //a=min distances
    rep(0,len,i) {
        rep(0,len,j) a[i][j]=(mll/2)-1;
    }

    rep(0,k,i){
        a[m[q[i][0]]-1][m[q[i][1]]-1]=1;
    }

    print(nv);
    prin(a,len);

    for(auto x:nv) a[m[x]-1][m[x]-1]=0;

    print(nv);
    prin(a,len);

    rep(0,len,k){
        rep(0,len,i){
            rep(0,len,j){
                if(a[i][j]>a[i][k]+a[k][j]) a[i][j]=a[i][k]+a[k][j];
            }
        }
    }

    print(nv);
    prin(a,len);

    ll ans=mll;
    for(auto x:nv){
        ll sum=0;
        for(auto y:v){
            if(a[m[y]-1][m[x]-1]==(mll/2)-1) {
                sum=-1;
                break;
            }
            else{
                sum+=a[m[y]-1][m[x]-1];
            }
        }
        if(sum!=-1) ans=min(ans,sum);
    }
    if(ans==mll) return -1;
    else return ans;
}
int main(){
   // fastio;
   // ++*(int*)0;// crash
   // freopen("in.txt","r",stdin);freopen("outt.txt","w+",stdout);
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
