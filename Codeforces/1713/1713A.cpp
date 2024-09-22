using namespace std;
#include<bits/stdc++.h>

#define forn(a,b) for (int a=0;a<b;a++)

void solve(){
    int n,a,x,y,xh=0,xl=0,yh=0,yl=0;
    cin>>n;
    forn(i,n){
        cin>>x>>y;
        if(x>xh) xh=x;
        else if(x<xl) xl=x;
        if(y>yh) yh=y;
        else if(y<yl) yl=y;
    }
    cout<<(xh-xl+yh-yl)*2<<endl;

}

int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        solve();
    }
    return 0;
}
