using namespace std;
#include<iostream>
// void solve(int t,int arr[]){
//
// }
int main(){
    int t,n,arr[50]={0},flag=0;
    cin>>t;
    // solve(t,arr)
    for(int i=0;i<t;i++){
        cin>>n;
        flag=0;
        for(int j=0;j<n;j++) cin>>arr[j];
        // zero=arr[0]%2;
        // one=arr[1]%2;
        for(int j=0;j<n;j++){
            if(arr[j]%2==arr[j%2]%2) continue;
            else {
                flag=1;
                break;
            }
        }
        if(flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
/*
4
3
1 2 1
4
2 2 2 3
4
2 2 2 2
5
1000 1 1000 1 1000
*/
