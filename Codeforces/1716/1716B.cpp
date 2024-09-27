using namespace std;
#include<bits/stdc++.h>

int solve(){
    int n,flag;
    cin>>n;
    cout<<n<<endl;
    // int a[n];
    for(int i=0;i<n;i++){
        cout<<i+1<<" ";
    }
    cout<<endl;
    for(int j=1;j<n;j++){
        flag=0;
        for(int i=1;i<n;i++){
            if(i==n-j && flag==0){
                cout<<n<<" ";
                i--;
                flag=1;
            }
            else{
                cout<<i<<' ';
            }
        }
        cout<<endl;
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
