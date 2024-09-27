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

int solve(){
    int n,k;
    cin>>n>>k;
    unordered_map<int, int> d;
    unordered_map<int,int> c;
    std::map<int, int> hd;
    int a,ma=0;

    rep(1,n,i){
        cin>>a;
        c[a]++;
        d[i+1]=d[a]+1;
        hd[d[i+1]]++;
        if(d[i+1]>ma) ma=d[i+1];
    }
    int sum=0;
    while(sum<k){
        if(sum+hd[ma]<=k){
            sum+=hd[ma];
            rep(1,(ma+1)/2,i){
                hd[i]+=hd[ma];
            }
            rep((ma+3)/2,ma+1,i){
                hd[i]-=hd[ma];
            }
            // for(auto &x:hd){
            //     cout<<x.first<<" "<<x.second;nl;
            // }nl;
            if(hd[ma]==0) ma--;
            else if(sum<=k) ma--;
        }
        else break;
    }
    return max(ma,1);

}
int main(){
   fastio;
   // ++*(int*)0;// crash
   // freopen("consecutive_cuts_chapter_2_input.txt","r",stdin);freopen("outt.txt","w+",stdout);
   tcs{
       cout<<solve();nl;
       // solve();nl;
       // cout<<"Case #"<<i+1<<": "<<solve();
       // if(i<t-1) nl;
   }
   return 0;
}

/*

*/
