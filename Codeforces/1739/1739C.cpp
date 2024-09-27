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
#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
double determinant(vector< vector<double> > m) {
  // TODO: Return the determinant of the square matrix passed in
  if(m.size()==1) return m[0][0];
  if(m.size()==2) return m[0][0]*m[1][1]-m[1][0]*m[0][1];
  else{
    int n=m.size();
    long long s=0;
    vector<vector<double>>v;
    int a=m[0][0];
    cout<<"m[0][0]="<<m[0][0];nl;
    int k=0;
    while(a==0){
      k++;
      a=m[k][0];
      cout<<"m[k][0]="<<m[k][0];nl;
    }
    cout<<"a="<<a;nl;
    cout<<"k="<<k;nl;
    for(int i=0;i<k;i++){
      vector<double> c;
      for(int j=1;j<n;j++){
        c.push_back(m[i][j]);
      }
      v.push_back(c);
    }
    for(auto q:v){
        for(auto r:q) cout<<r<<" ";nl;
    }
    for(int i=k+1;i<n;i++){
      if(m[i][0]==0) continue;
      vector<double> c;
      for(int j=1;j<n;j++){
        c.push_back(m[i][j]-((1.0*m[i][0]/a)*m[k][j]));
      }
//       row_i-(m[i][0]/a)*row_k
      v.push_back(c);
    }
    for(auto q:v){
        for(auto r:q) cout<<r<<" ";nl;
    }
    if(k%2) return (-1)*m[k][0]*determinant(v);
    else return m[k][0]*determinant(v);
  }
}
void solve(){
    int n;
    cin>>n;
    std::vector<std::vector<double>> v;
    double a;
    rep(0,n,i){
        std::vector<double> x;
        rep(0,n,j){
            cin>>a;
            x.push_back(a);
        }
        v.push_back(x);
    }
    cout<<"Determinant="<<determinant(v);
}
int main(){
   // fastio;
   // ++*(int*)0;// crash
   // freopen("consecutive_cuts_chapter_2_input.txt","r",stdin);freopen("outt.txt","w+",stdout);
   tcs{
       // cout<<solve();nl;
       solve();nl;
       // cout<<"Case #"<<i+1<<": "<<solve();
       // if(i<t-1) nl;
   }
   return 0;
}

/*
(n-4)C2
1,2 49,50






1,2,6   3,4,5


*/
