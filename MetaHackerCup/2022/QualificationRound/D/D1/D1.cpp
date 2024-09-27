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
void solve(){


    ll n,m,q;
    cin>>n>>m>>q;

    ve<unordered_map<ll,ll> > ma(n+1);


    ll a,b,c;
    rep(0,m,i){
        cin>>a>>b>>c;
        ma[a][b]=c;
        ma[b][a]=c;
    }

    ll x,y;
    rep(0,q,i){
        cin>>x>>y;
        ll sum=0;
        for ( const auto &myPair : ma[x]) {
            if(myPair.first==y) sum+=2*(myPair.second);
            else{
                sum+=min(myPair.second,ma[myPair.first][y]);
                // if(ma[myPair.first][y]==0) ma[myPair.first].erase(y);
            }
        }
        cout<<sum<<" ";
        // ma[x].erase(y);
    }

    // for ( const auto &myPair : ma) {
    //     cout<<myPair.first<<" ";nl;
    //     for ( const auto &Pair : myPair.second) {
    //         cout<<Pair.first<<" "<<Pair.second;nl;
    //     }
    // }nl;nl;nl;


    ma.clear();
    // cout<<"here";nl;
    // for ( const auto &myPair : ma) {
    //     cout<<myPair.first<<" ";nl;
    //     for ( const auto &Pair : myPair.second) {
    //         cout<<Pair.first<<" "<<Pair.second;nl;
    //     }
    // }


    // for ( const auto &myPair : ma ) {
    //     myPair.second.clear();
    // }
    // // cout<<sum<<" ";



    // rep(0,n,i) {
    //     rep(i+1,n,j){
    //         s[i][j]=0; //cause we want maxes
    //         d[i][j]=0;
    //         s[j][i]=0;
    //         d[j][i]=0;
    //         // if(i==j)s[i][j]=0;
    //         // else s[i][j]=(mll/2)-1;
    //     }
    // }
    //
    //
    //
    // rep(0,n,k){
    //     rep(0,n,i){
    //         rep(i+1,n,j){
    //             if(s[i][k]>0 && s[k][j]>0 && k!=i && k!=j){
    //                 // cout<<"k="<<k;nl;
    //                 // cout<<"d["<<i<<"]["<<j<<"]="<<d[i][j];nl;
    //                 d[i][j]+= min(s[i][k],s[k][j]);
    //                 d[j][i] = d[i][j];
    //                 // cout<<"d["<<i<<"]["<<j<<"]="<<d[i][j];nl;
    //             }
    //         }
    //     }
    // }
    //
    // // rep(0,n,i){
    // //     rep(0,n,j){
    // //         cout<<s[i][j]<<" ";
    // //     }nl;
    // // }nl;
    // //
    // // rep(0,n,i){
    // //     rep(0,n,j){
    // //         cout<<d[i][j]<<" ";
    // //     }nl;
    // // }nl;
    //
    // ll x,y;
    // rep(0,q,i){
    //     cin>>x>>y;
    //     cout<<(s[x-1][y-1]*2)+d[x-1][y-1]<<" ";
    // }











    // string s;
    // cin>>s;
    // ll l=s.length();
    // vc v;
    // rep(0,l,i){
    //     v.push_back(s[i]);
    // }
    // so(v);
    // vc nv;
    // nv.push_back(v[0]);
    // map<char,int> m;
    // m[v[0]]=1;
    // ll len=1;
    // rep(1,l,i){
    //     if(v[i]!=v[i-1]){
    //         len++;
    //         m[v[i]]=len;
    //         nv.push_back(v[i]);
    //     }
    // }
    //
    //
    //
    //
    // ll k;
    // cin>>k;
    // string q[k];
    // rep(0,k,i){
    //     cin>>q[i];
    //     if(m[q[i][0]]==0){
    //         len++;
    //         m[q[i][0]]=len;
    //         nv.push_back(q[i][0]);
    //     }
    //     if(m[q[i][1]]==0){
    //         len++;
    //         m[q[i][1]]=len;
    //         nv.push_back(q[i][1]);
    //     }
    // }
    //
    // ll a[len][len]; //a=min distances
    // rep(0,len,i) {
    //     rep(0,len,j) a[i][j]=(mll/2)-1;
    // }
    //
    // rep(0,k,i){
    //     a[m[q[i][0]]-1][m[q[i][1]]-1]=1;
    // }
    //
    // // print(nv);
    // // prin(a,len);
    //
    // for(auto x:nv) a[m[x]-1][m[x]-1]=0;
    //
    // // print(nv);
    // // prin(a,len);
    //
    // rep(0,len,k){
    //     rep(0,len,i){
    //         rep(0,len,j){
    //             if(a[i][j]>a[i][k]+a[k][j]) a[i][j]=a[i][k]+a[k][j];
    //         }
    //     }
    // }
    //
    // // print(nv);
    // // prin(a,len);
    //
    // ll ans=mll;
    // for(auto x:nv){
    //     ll sum=0;
    //     for(auto y:v){
    //         if(a[m[y]-1][m[x]-1]==(mll/2)-1) {
    //             sum=-1;
    //             break;
    //         }
    //         else{
    //             sum+=a[m[y]-1][m[x]-1];
    //         }
    //     }
    //     if(sum!=-1) ans=min(ans,sum);
    // }
    // if(ans==mll) return -1;
    // else return ans;
}
int main(){
   // fastio;
   // ++*(int*)0;// crash
   freopen("second_flight_validation_input.txt","r",stdin);freopen("outt.txt","w+",stdout);
   int t;
   cin>>t;
   rep(0,t,i){
       // solve();cout<<endl;
       cout<<"Case #"<<i+1<<": ";
       solve();cout<<"\n";
   }
   return 0;
}

/*

*/
