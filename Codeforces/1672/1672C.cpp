using namespace std;
#include<iostream>
int main(){
    int n,t,arr[200000]={0},val[200001]={0},flag,cnt=0,valcnt=0;
    cin>>t;
    for(int j=0;j<t;j++){
        valcnt=1;
        flag=0;
        cnt=0;
        if(j>0){
            for(int i=0;i<n;i++) arr[i]=0;
        }
        for(int i=0;i<200001;i++) val[i]=0;
        cin>>n;
        for(int i=0;i<n;i++) {
            cin>>arr[i];
            if(arr[i]<=200000) val[arr[i]]=1;
        }
        while(val[valcnt]) valcnt++;
        for(int i=1;i<n;i++){
            if(flag && arr[i]==arr[i-1]) {
                if(i!=n-1){
                    cnt++;
                    arr[i]=val[valcnt];
                    arr[i+1]=val[valcnt];
                    val[valcnt]=1;
                    while(val[valcnt]) valcnt++;
                }
                else{
                    for(int k=n-2;k>0;k--){
                        if(arr[k]==arr[k+1]){
                            arr[k]=val[valcnt];
                            arr[k-1]=val[valcnt];
                            val[valcnt]=1;
                            while(val[valcnt]) valcnt++;
                        }
                    }
                }
            }
            if(!flag && arr[i]==arr[i-1]) flag=1;
        }
        cout<<cnt<<endl;
        // for(int l=0;l<10;l++) cout<<val[l]<<endl;
    }
    return 0;
}
/*
4
5
1 1 1 1 1
5
2 1 1 1 2
6
1 1 2 3 3 4
6
1 2 1 4 5 4
*/
/*
2
1
2
0
*/
