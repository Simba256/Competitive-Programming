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
#define rep(l, r, i) for (int i = l; i < r; ++i)
#define per(l, r, i) for (int i = r; i >= l; --i)
#define repp(l, r, i) for (int i = l; i <= r; ++i)
#define print(a) for(auto i: a) cout<<i<<" "; nl;
#define so(v) sort(v.begin(),v.end())
#define inp(v,n) int a; for(int i=0;i<n;i++){cin>>a;v.push_back(a);}

int solve(){
    int n,m;
    cin>>n>>m;
    vi v;
    inp(v,m)
    if(m==1) {
        if(n>2) return 2;
        else return 1;
    }
    so(v);
    // cout<<"v=";
    // print(v)
    vi d;
    rep(0,m-1,i){
        d.push_back(v[i+1]-v[i]-1);
    }
    d.push_back(n-v[m-1]+v[0]-1);
    // cout<<"d=";
    // print(d)
    so(d);
    // cout<<"d=";
    // print(d)
    ll c=0;
    // cout<<"*d.end()-1="<<*(d.end()-1);nl;
    while(*(d.end()-1)!=0 && d.size()>0){
        // db(1)
        // cout<<"*d.end()="<<*d.end();nl;
        c+=*(d.end()-1)-1;
        if(*(d.end()-1)==1) c++;
        // cout<<"c="<<c<<endl;
        // print(d)
        d.erase(d.end()-1);
        rep(0,d.size(),i){
            if(d[i]<5) d[i]=0;
            else d[i]-=4;
        }
        // print(d)

    }
    return n-c;
}
int main(){
    // fastio;
    tcs{
        cout<<solve()<<endl;
        // cout<<endl;
    }
    return 0;
}

/*
8
10 3
3 6 8
6 2
2 5
20 3
3 7 12
41 5
1 11 21 31 41
10 5
2 4 6 8 10
5 5
3 2 5 4 1
1000000000 1
1
1000000000 4
1 1000000000 10 16
*/
