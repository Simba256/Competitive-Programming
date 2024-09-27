using namespace std;
#include<bits/stdc++.h>

#define nl cout<<"\n"
#define ve vector
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
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
#define sod(a) sort(a.begin(), a.end(), greater<int>())
#define inp(v,n) {int aaaa; for(int iiii=0;iiii<n;iiii++){cin>>aaaa;v.push_back(aaaa);}}
#define mll 9223372036854775807
#define mp 1000000007
#define pi 3.14159265358979
#define prin(a,len) rep(0,len,i){rep(0,len,j) cout<<a[i][j]<<" ";nl;}nl;
#define printm(a) for(auto &x:a) {cout<<x.first<<" "<<x.second;nl;}

string solve(){
    int n,m,k;
    cin>>n>>m>>k;
    std::map<int, int> map;
    ll a[n];
    rep(0,k,i) cin>>a[i];
    ll num = k,in=0,c=0;
    rep(0,k,i) cout<<a[i]<<" ";nl;
    while(num>0){
        cout<<"here\n";
        while(in<k && a[in]==num){
            cout<<"2: num:"<<num<<" in:"<<in<<" a[in]:"<<a[in]<<" c:"<<c;nl;
            in++;
            num--;
        }
        while(map[num]){
            cout<<"1: num:"<<num<<" in:"<<in<<" a[in]:"<<a[in]<<" c:"<<c;nl;
            map[num]--;
            num--;
            c--;
        }
        while(in<k && a[in]!=num){
            cout<<"3: num:"<<num<<" in:"<<in<<" a[in]:"<<a[in]<<" c:"<<c;nl;
            c++;
            map[a[in]]++;
            in++;
            if(c>(n*m)-3){
                return "TIDAK";
            }
        }
        while(map[num]){
            cout<<"1: num:"<<num<<" in:"<<in<<" a[in]:"<<a[in]<<" c:"<<c;nl;
            map[num]--;
            num--;
            c--;
        }
    }
    return "YA";
}
int main(){
   // fastio;
   // ++*(int*)0;// crash
   // freopen("in.txt","r",stdin);freopen("outt.txt","w+",stdout);
   tcs{
       cout<<solve();nl;
       // solve();nl;
       // cout<<"Case #"<<TTTT<<": "<<solve();
       // if(i<t-1) nl;
   }
   return 0;
}

/*

*/
