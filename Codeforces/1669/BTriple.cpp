using namespace std;
#include<iostream>
int main(){
    int t;
    cin>>t;
    int flag, arr[200001],n;
    for(int j=0;j<t;j++){
        n=0;
        for (int i=0;i<200001;i++) arr[i]=0;
        flag=0;
        cin>>n;
        int inp[n]={0};
        for(int i=0;i<n;i++) cin>>inp[i];
        if(n<3) {
            cout<<-1<<endl;
            continue;
        }
        for(int i=0;i<n;i++) {
            arr[inp[i]]++;
            if(arr[inp[i]]==3) {
                cout<<inp[i]<<endl;
                flag=1;
                break;
            }
        }
        if(!flag) cout<<-1<<endl;
    }
    return 0;
}
