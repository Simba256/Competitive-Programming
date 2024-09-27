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
    map<ll,ll> m;
    ll a[n],s[n];
    ll z=0,c=0,max=0;
    rep(0,n,i){
        cin>>a[i];
        if(i) s[i] = s[i-1] + a[i];
        else s[i] = a[i];
        if(!z && a[i]){
            if(!s[i]) c++;
            continue;
        }
        if(!a[i]){
            c+=max;
            // cout<<"c:"<<c;nl;
            // cout<<"m:";nl;
            // printm(m);
            m.clear();
            max = 1;
        }
        m[s[i]]++;
        if(z && m[s[i]]>max) max = m[s[i]];
        z=1;
    }
    c+=max;
    // cout<<"s:";
    // print(s);
    return c;

    // while(i<n && a[i]){
    //     if(!s[i]) c++;
    //     i++;
    // }
    // // if(c) cout<<"c";
    // ll max=1;
    // rep(i,n,j){
    //     j++;
    //     // if(j==n) c++;
    //     while(j<n && a[j]){
    //         m[s[j]]++;
    //         if(m[s[j]]>max) max = m[s[j]];
    //         j++;
    //     }
    //     if(!a[j]) j--;
    //     // cout<<"m:";nl;
    //     // printm(m);
    //     // cout<<"max:"<<max;nl;
    //     c+=max;
    //     unordered_map<ll,ll> nm;
    //     m = nm;
    //     max=1;
    // }
    // return c;

}
int main(){
   fastio;
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
