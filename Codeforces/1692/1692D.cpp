using namespace std;
#include<bits/stdc++.h>

#define nl cout<<"\n"
#define ve vector
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vc vector<char>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define tcs int tttt;cin>>tttt;for(int TTTT=1;TTTT<=tttt;TTTT++)
#define db(n) cout<<"here "<<n<<", "; //for debugging
#define dbb(n) cout<<#n<<" = "<<n<<endl
#define rep(l, r, i) for (int i = l; i < r; ++i)
#define per(l, r, i) for (int i = r; i >= l; --i)
#define repp(l, r, i) for (int i = l; i <= r; ++i)
#define print(a) for(auto i: a) cout<<i<<" "; nl;
#define inp(a) int a; cin>>a;

void add(int &a,int &b){
    if(b>59) {
        b-=60;
        a+=1;
    }
    if(a>23) a-=24;
}

int isp(int a,int b){
    if((a/10)==b%10 && a%10==b/10) return 1;
    else return 0;
}
int solve(){
    string s;
    cin>>s;
    // db(1)
    int hs=0,ms=0;
    hs+=((s[0]-48)*10)+s[1]-48;
    ms+=((s[3]-48)*10)+s[4]-48;
    // cout<<"hs="<<hs<<" ms="<<ms<<endl;
    int x,h,m;
    cin>>x;
    h=x/60;
    m=x%60;
    // cout<<"h="<<h<<" m="<<m<<endl;
    int he,me,c=0;
    he=hs+h;
    me=ms+m;
    add(he,me);
    c+=isp(he,me);
    // db(2)
    // cout<<"he="<<he<<" me"<<me;nl;
    while(he!=hs || me!=ms){
        // db(3)
        he+=h;
        me+=m;
        add(he,me);
        c+=isp(he,me);
    }
    return c;
}

int main(){
    // fastio;
    tcs{
        // cout<<i<<"    ";
        cout<<solve()<<endl;
    }
    return 0;
}
