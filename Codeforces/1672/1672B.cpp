using namespace std;
#include<iostream>
int main(){
    int t,ca,fa;
    cin>>t;
    string st;
    for(int i=0;i<t;i++){
        cin>>st;
        ca=0;
        if(st.length()>1){
            for(int j=0;j<st.length();j++){
                while(st[fa]=='A'){
                    fa++;
                }
                if(st[j]=='A') ca++;
            }
            if(ca>st.length()-ca) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}
