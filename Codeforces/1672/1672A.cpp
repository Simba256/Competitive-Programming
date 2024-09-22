using namespace std;
#include<iostream>
int main(){
    int t,n,sum,a;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        sum=0;
        for(int j=0;j<n;j++){
            cin>>a;
            sum+=a-1;
        }
        if(sum%2) cout<<"errorgorn"<<endl;
        else cout<<"maomao90"<<endl;
    }
    return 0;
}
