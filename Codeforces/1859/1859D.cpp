#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>



// ll fun(ll a,ll b){
//     return min(a,b);
// }

class segmentTree{

    vector<ll> v;
    ll sn;


public:

    void build(ll n){
        sn = n;
        v.resize(2*n);
        for(int i=0;i<n;i++){
            v[i+n] = i+1;
        }for(int i=n-1;i>=1;i--){
            v[i] = 0;
        }
   }

   void update(ll l, ll r, ll k, ll l1, ll  r1, ll val){
        if(l1>r || r1<l) return;
        if(l<=l1 && r1<=r){
            v[k] = max(v[k],val);
            return;
        }ll d = (l1+r1)/2;
        update(l,r,2*k,l1,d,val);
        update(l,r,2*k+1,d+1,r1,val);
   }

    ll query(ll x){
        x--; // 1 based to 0 based indexing
        x += sn;
        ll ans = v[x];
        while(x>1){
            x /= 2;
            ans = max(ans,v[x]);
        }return ans;
    }


};

int main(){

    ll t;
    cin>>t;
    for(int i=0;i<t;i++){
        segmentTree T;
        ll n;
        cin>>n;

    }
    vll v = {1,2,3};
    ll a = 3;
    T.build(a);
    // cout<<"here";



    return 0;
}