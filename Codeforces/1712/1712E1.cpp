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
#define per(l, r, i) for (int i = r; i >= l; --i)
#define repp(l, r, i) for (int i = l; i <= r; ++i)
#define print(a) for(auto i: a) cout<<i<<" "; nl;
#define so(v) sort(v.begin(),v.end())
#define inp(v,n) int a; for(int i=0;i<n;i++){cin>>a;v.push_back(a);}

ll lcm(int a,int b){
    ll d=1,i=1;
    while(i<=a && i<=b){
        i++;
        if(a%i==0 && b%i==0){
            d=i;
        }
        // cout<<"i="<<i<<endl;
    }
    return a*b/d;
}

// ll fact(int a){
//     if(a<2) return 1;
//     else return a*fact(a-1);
// }
ll nc3(ll a){
    return (a*(a-1)*(a-2))/6;
}
ll solve(){
    int l,r;
    cin>>l>>r;
    ll a,b;
    ll l3,r6,l6,r15;
    l3=(l+2)/3;
    r6=r/6;
    l6=(l+5)/6;
    r15=r/15;
    ll ts,sf,c=0;
    ts=max(c,r6-l3+1);
    sf=max(c,r15-l6+1);
    // ll a;
    rep(l+2,r+1,k){
        rep(l,k-1,i){
            // a=2*k/i;
            if(i==1){
                rep(\2,sqrt(k)+1,j){

                }
            }
            if((2*k)%i==0 && ){
                c++;
            }
            if(i>sqrt(k)){
                break;
            }
        }
    }
    //
    // rep(l,r-1,i){
    //     rep(i+1,r,j){
    //         // a=
    //         if(lcm(i,j)<=r) c++;
    //         // b=lcm(a,k);
    //         // if(b<i+j+k){
    //             // if(k%a!=0){
    //                 // if((i%3!=0 || j%4!=0 || k%6!=0)&&(i%6!=0 || j%10!=0 || k%15!=0))
    //                 // cout<<"("<<i<<","<<j<<","<<k<<") lcm="<<lcm(lcm(i,j),k)<<" i+j+k="<<i+j+k<<endl;
    //             // }
    //     }
    //     // if(i%10==0) cout<<i<<endl;
    // }
    // db(1)
    cout<<"nc3="<<nc3(r-l+1)<<" c="<<c<<" ts="<<ts<<" sf="<<sf<<endl;
    return nc3(r-l+1)-c-ts-sf;
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
hyp: lcm(a,b) must divide c;
or multiples of:
 ((3)+(4)+(6))x
 ((6)+(10)+(15))


 rep(j+1,r+1,k){
     a=lcm(i,j);
     b=lcm(a,k);
     if(b<i+j+k){
         if(k%a!=0){
             if((i%3!=0 || j%4!=0 || k%6!=0)&&(i%6!=0 || j%10!=0 || k%15!=0))
             cout<<"("<<i<<","<<j<<","<<k<<") lcm="<<lcm(lcm(i,j),k)<<" i+j+k="<<i+j+k<<endl;
         }
     }
 }

*/
