using namespace std;
#include<iostream>
int main(){
    int t,n,a;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        a=n/100;
        if(a>=19) cout<<"Division 1"<<endl;
        else if(a>=16) cout<<"Division 2"<<endl;
        else if(a>=14) cout<<"Division 3"<<endl;
        else cout<<"Division 4"<<endl;
    }
    return 0;
}
