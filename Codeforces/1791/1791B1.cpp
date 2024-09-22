using namespace std;
#include<bits/stdc++.h>
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int x=0,y=0,flag=0;
        for(int j=0;j<n;j++){
            if(s[i]=='U') y++;
            if(s[i]=='D') y--;
            if(s[i]=='R') x++;
            if(s[i]=='L') x--;
            if(x==1 && y==1){
                cout<<"YES";
                flag = 1;
                break;
            }
        }
        if(flag==0){
            cout<<"NO";
        }
    }
    return 0;
}
