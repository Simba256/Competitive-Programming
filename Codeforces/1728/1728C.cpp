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
#define rep(l, r, i) for (ll i = l; i < r; ++i)
#define per(l, r, i) for (ll i = r; i >= l; --i)
#define repp(l, r, i) for (ll i = l; i <= r; ++i)
#define print(a) for(auto i: a) cout<<i<<" "; nl;
#define so(v) sort(v.begin(),v.end())
#define inp(v,n) {int aaaa; for(int iiii=0;iiii<n;iiii++){cin>>aaaa;v.push_back(aaaa);}}

// ll add(char a,char b,char c, char d){
// }
ll gcd(ll a, ll b){if(a<b) swap(a,b);if(b==0) return a;return gcd(a%b,b);}

ll fun(ll a,ll b){
    if(a==b) return 0;
    else{
        // db(2);
        if(a>1 && b>1) return min(fun(int(log10(a)),b),fun(int(log10(b)),a))+1;
        else return 1;
    }
}

ll solve(){
    int n,x,y,s=0,c;
    cin>>n;
    // vll a,b;
    std::unordered_map<int, int> a;
    std::unordered_map<int, int> b;
    rep(0,2*n,i){
        cin>>x;
        if(i<n) a[x]++;
        else b[x]++;
    }
    for(auto &z:a){
        if(z.first<10) continue;
        else{
            c=b[z.first];
            y=min(z.second,c);
            a[int(log10(z.first))]+=z.second-y;
            b[int(log10(z.first))]+=c-y;
            s+=z.second+c-2*y;
        }
    }

    for(auto &z:b){
        if(z.first<10 || z.second==0) continue;
        b[int(log10(z.first))]+=z.second;
        s+=z.second;
    }

    for(auto &z:a){
        if(z.first>9 || z.first==1) continue;
        c=b[z.first];
        y=min(z.second,c);
        a[1]+=z.second-y;
        b[1]+=c-y;
        s+=z.second+c-2*y;
    }
    for(auto &z:b){
        if(z.first>9 || z.first==1) continue;
        s+=z.second;
    }

    // for(auto z:a){
    //     cout<<z.first<<" "<<z.second;nl;
    // }nl;
    // rep(0,n,i){
    //     cin>>x;
    //     if(a[x]) a[x]--;
    //     if (a.count(x) > 0 && a[x] == 0) a.erase(x);
    //     else if(x>9){
    //         y=int(log10(x));
    //         if(a[y]){
    //             s++;
    //             a[y]--;
    //             if (a.count(y) > 0 && a[y] == 0) a.erase(y);
    //         }
    //         else{
    //             b[y]++;
    //         }
    //     }
    // }
    //
    // nl;
    // cout<<"s="<<s;nl;
    // for(auto z:a){
    //     cout<<z.first<<" "<<z.second;nl;
    // }nl;
    // for(auto z:b){
    //     cout<<z.first<<" "<<z.second;nl;
    // }nl;
    //
    // for(auto &mp:a){
    //     if(mp.first>9 && mp.second>0){
    //         s+=mp.second;
    //         a[int(log10(mp.first))]+=mp.second;
    //         a.erase(mp.first);
    //     }
    // }
    //
    // nl;
    // cout<<"s="<<s;nl;
    // for(auto z:a){
    //     cout<<z.first<<" "<<z.second;nl;
    // }nl;
    // for(auto z:b){
    //     cout<<z.first<<" "<<z.second;nl;
    // }nl;
    //
    // for(auto &mp:b){
    //     if(a[mp.first]>0) {
    //         y=min(a[mp.first],mp.second);
    //         a[mp.first]-=y;
    //         mp.second-=y;
    //         s+=y;
    //         if (a.count(mp.first) > 0 && a[mp.first] == 0) a.erase(mp.first);
    //         if (b.count(mp.first) > 0 && b[mp.first] == 0) b.erase(mp.first);
    //     }
    //     else{
    //         s+=mp.second;
    //     }
    // }
    //
    // nl;
    // cout<<"s="<<s;nl;
    // for(auto z:a){
    //     cout<<z.first<<" "<<z.second;nl;
    // }nl;
    // for(auto z:b){
    //     cout<<z.first<<" "<<z.second;nl;
    // }nl;
    //
    // for(auto &mp:a){
    //     s+=mp.second;
    // }




    // for(auto &mp:b){
    //     s+=mp.second;
    // }
    //
    // inp(a,n)
    // so(a);
    // inp(b,n)
    // so(b);
    // ll s=0;
    // ll c,d;
    // rep(0,n,i){
    //     if(a[i]<)
    // }
    return s;
}
int main(){
   fastio;
   tcs{
       //TTTT
       // solve();nl;
       cout<<solve();nl;
   }
   return 0;
}

/*



*/
