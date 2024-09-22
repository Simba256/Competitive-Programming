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
#define mp 1000000007
#define pi 3.14159265358979
#define prin(a,len) rep(0,len,i){rep(0,len,j) cout<<a[i][j]<<" ";nl;}nl;

string solve(){
    int n,o=0,e=0,a;
    cin>>n;
    rep(0,n,i){
        cin>>a;
        if(a%2) o++;
        else e++;
    }
    o %= 4;
    e %= 2;
    if((o==e && o==1)||o==0||o==3) return "Alice";
    else return "Bob";
    // if(max(o-e,e-o)%2)
}
int main(){
   fastio;
   // ++*(int*)0;// crash
   // freopen("consecutive_cuts_chapter_2_input.txt","r",stdin);freopen("outt.txt","w+",stdout);
   tcs{
       // cout<<solve();nl;
       cout<<solve();nl;
       // cout<<"Case #"<<i+1<<": "<<solve();
       // if(i<t-1) nl;
   }
   return 0;
}

/*

n = 1
even A
odd B

n = 2
>=1 even A
0 even B

n = 3
3 even or 0 even A
else B

n = 4
>=3 even or <=1 even A
2 even B

n = 5
5,2,1 even A
4,3,0 even B

n = 6
6,5,3,2,1 even A
0,4 even B

n = 7
7,

0 0 A
1 0 A
0 1 B
1 1 A
0 2 B
1 2 B
0 3 A
1 3 A







*/
