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

ll solve(){
    int n;
    cin>>n;
    ll a[n];
    cin>>a[0]>>a[1];
    ll m,mi,sm,smi,tm=0,tmi=mll;
    if(a[0]>a[1]){
        m=a[0];
        sm=a[1];
        mi=a[1];
        smi=a[0];
    }
    else{
        m=a[1];
        sm=a[0];
        mi=a[0];
        smi=a[1];
    }
    rep(2,n,i){
        cin>>a[i];
        if(a[i]<=mi){
            tmi = smi;
            smi= mi;
            mi = a[i];
        }
        else if(a[i]<=smi){
            tmi = smi;
            smi = a[i];
        }
        else if(a[i]<tmi){
            tmi = a[i];
        }
        if(a[i]>=m){
            tm = sm;
            sm = m;
            m = a[i];
        }
        else if(a[i]>=sm){
            tm = sm;
            sm = a[i];
        }
        else if(a[i]>tm){
            tm = a[i];
        }
    }
    cout<<mi<<" "<<smi<<" "<<tmi<<" "<<tm<<" "<<sm<<" "<<m;nl;
    // cout<<m-mi;nl;
    // cout<<2*tmi-mi-smi;nl;
    // cout<<m+sm-2*tm;nl;
    // cout<<2*m - mi - sm;nl;
    // cout<<m + smi - 2*mi;nl;

    ll x = max(m-mi,max(2*m-mi-sm,m+smi-2*mi));
    // cout<<x;nl;
    ll y = max(tmi - mi, max(2*tmi - smi - mi, tmi + smi - 2*mi));
    // cout<<y;nl;
    ll z = max(m-tm,max(2*m-tm-sm,m+sm-2*tm));
    // cout<<z;nl;
    return max(x,max(y,z));
    // return max(m-mi,max(2*tmi-mi-smi,max(m+sm-2*tm,max(2*m - mi - sm,m + smi - 2*mi))));
    // return 2*m - (mi + sm);
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


w1,w2,w3
w3 = max, w1 = min
w3-w1

w1,w3,w2
w2 = max, w1,w3 = min
2*w2 - w1 - w3

w2,w3,w1
w1 - w2 + w3 - w2
w1 + w3 - 2*w2

w2, w1,w3
w1 + w3 - 2*w2

w3,w1,w2
2*w2 - w1 - w3

w3,w2,w1
w1 - w3

*/
