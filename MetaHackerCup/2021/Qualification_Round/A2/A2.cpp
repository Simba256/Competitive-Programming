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

// string t[300];

ll fun(char a,char b,map<char, vector<ll>> &in,string t[]){
    // m=map, a=end letter,b=start st[]
    ll ans=10000000000000;
    db(10)
    cout<<a<<" "<<b;nl;
    print(in[b])nl;
    if(in[b].size()>0){
        rep(0,in[b].size(),i){
            if(t[in[b][i]][1]==a){
                return 1;
            }
        }
        rep(0,in[b].size(),i){
            if(fun(a,t[in[b][i]][1],in,t)>0){
                ans=min(fun(a,t[in[b][i]][1],in,t)+1,ans);
            }
        }
        return ans;
    }
    else{
        return 0;
    }
}
ll solve(){
    string s;
    cin>>s;
    ll l=s.length();
    map<char, ll> m;
    map<char, int> out;
    rep(0,l,i) m[s[i]]++;
    ll k;
    cin>>k;
    string t[k];
    map<char, vector<ll>> in;
    rep(0,k,i){
        cin>>t[i];
        in[t[i][0]].push_back(i);
        out[t[i][1]]++;
    }
    ll count=0;

    // ll d=0;
    // for(char a='A';a<='Z';a++){
    //     if(l-m[a]==0) return 0;
    //     if(l-m[a]>0 && out[a]==0) continue;
    //     if(out[a]>0){
    //         map<char, int> mc(m);
    //         map<char,int> map;
    //         rep(0,k,i){
    //             if(t[i][1]==a) {
    //                 map[t[i][0]]++;
    //                 mc.erase(t[i][0]);
    //             }
    //         }
    //         d++;
    //         while(mc.size()>0 && d<l){
    //             rep(0,mc.size(),i){
    //                 mc[i].first==
    //             }
    //         }
    //
    //     }
    // }
    ll mini=1000000000000000;
    db(2)
    ll ff=0;
    for(char a='A';a<='Z';a++){
        count=0;
        if(l-m[a]==0) return 0;
        if(l-m[a]>0 && out[a]==0) {
            db(4)nl;
            cout<<a;nl;
            continue;
        }
        if(out[a]>0){
            db(3)nl;
            cout<<a;nl;
            rep(0,l,i){
                db(5)nl;
                if(s[i]==a) continue;
                db(6)nl;
                cout<<"a="<<a<<" b="<<s[i];nl;
                ll f=fun(a,s[i],in,t);
                db(7)
                if(f==0) break;
                count+=f*m[s[i]];
                if(i==l-1){
                    ff=1;
                    mini=min(mini,count);
                }

            }
        }
    }
    db(1)
    if(ff==0) return -1;
    else return mini;
    // return min((c-mc)*2+v,(v-mv)*2+c);
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
