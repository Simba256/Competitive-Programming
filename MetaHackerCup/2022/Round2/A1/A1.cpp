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
// #define mp 1000000007
#define pi 3.14159265358979
#define prin(a,len) rep(0,len,i){rep(0,len,j) cout<<a[i][j]<<" ";nl;}nl;

ll solve(){
    string s;
    cin>>s;
    ll q;
    cin>>q;
    unordered_map<int, unordered_map<char,int>> m;
    m[1][s[0]]=1;
    rep(1,s.length(),i){
        for(auto &mp:m[i]){
            m[i+1][mp.first]=mp.second;
        }
        m[i+1][s[i]]++;
    }
    // rep(1,s.length()+1,i){
    //     for(auto &a:m[i]){
    //         cout<<a.first<<" "<<a.second;nl;
    //     }nl;
    // }nl;
    ll a,b,d;
    ll sum=0,g=0,f=1;
    rep(0,q,i){
        f=1;g=0;
        cin>>a>>b;
        if((b-a)%2) continue;
        else{
            //compare diff(m[a],m[a+((b-a)/2)-1]) and diff(m[a+((b-a)/2)+1],m[b])
            // cout<<"intervals:"<<b<<" "<<a+((b-a)/2)+1<<" "<<a+((b-a)/2)-1<<" "<<a;nl;
            for(auto &mp:m[b]){
                ll w=m[a+((b-a)/2)-1][mp.first],x=m[a-1][mp.first],y=mp.second,z=m[a+((b-a)/2)][mp.first];
                if(a==1) x=0;
                if(x==y) continue;
                // cout<<"char="<<mp.first<<" "<<y<<" "<<z<<" "<<w<<" "<<x;nl;
                ll d1=w-x,d2=y-z;
                // cout<<"d1 "<<d1<<" d2 "<<d2;nl;
                ll d=d1-d2;
                if(d<0) d*=-1;
                if(d==0) continue;
                else{
                    if(d>1){
                        f=0;
                        break;
                    }
                    if(s[((b+a)/2)-1]==mp.first) continue;
                    if(g==0) {
                        g++;
                        continue;
                    }
                    else{
                        // db(1)
                        f=0;
                        break;
                    }

                }
            }

        }
        // cout<<"i="<<i<<" f="<<f;nl;
        sum+=f;
    }
    return sum;
}
int main(){
   // fastio;
   // ++*(int*)0;// crash
   freopen("perfectly_balanced_chapter_1_input.txt","r",stdin);freopen("outt.txt","w+",stdout);
   tcs{
       // cout<<solve();nl;
       // solve();nl;
       cout<<"Case #"<<TTTT<<": "<<solve();nl;
       // if(i<t-1) nl;
   }
   return 0;
}

/*

*/
