using namespace std;
#include<bits/stdc++.h>

int solve(){
    int m,n=-1,r1=-1,c1=-1,r2=-1,c2=-1,c=1;
    cin>>m;
    int a[2][m];
    for(int i=0;i<2;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]>n){
                n=a[i][j];
                r1=i;
                c1=j;
                r2=-1;
                c2=-1;
                c=1;
            }
            else if(a[i][j]==n){
                r2=i;
                c2=j;
                c=2;
            }
        }
    }
    //corner
    if((c1==0 || c1==m-1) && c==1){
        if(n<(m*2)-1) {
            cout<<(m*2)-1<<endl;
            return 1;
        }
        else{
            cout<<n+1<<endl;
            return 2;
        }
    }
    else if(c==1){
        if(r1==0){
            for(int i=0;i<2;i++){
                for(int j=0;j<r1;j++){

                }
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        solve();
    }
    return 0;
}



/*
1234
1243
1423
4123

12345
12354
12534
15234
51234



*/
