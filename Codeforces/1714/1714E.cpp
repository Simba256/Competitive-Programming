using namespace std;
#include<iostream>
// #include<bits/stdc++.h>
// int fun(int a,int b){
//
// }
void solve(){
    int n,b,flag=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    b=a[0];
    if( b % 20 == 1 || b % 20 == 2 || b % 20 == 4 || b % 20 == 8 || b % 20 == 13 || b % 20 == 16 || b % 20 == 17 || b % 20 == 19 )
    {
        for(int i=1;i<n;i++){
            if(a[i] % 20 == 1 || a[i] % 20 == 2 || a[i] % 20 == 4 || a[i] % 20 == 8 || a[i] % 20 == 13 || a[i] % 20 == 16 || a[i] % 20 == 17 || a[i] % 20 == 19){
                flag=0;
            }
            else{
                flag=1;
                cout<<"NO"<<endl;
                break;
            }
        }
    }// 1,2,4,8,13,16,17,19
    else if( b % 20 == 3 || b % 20 == 6 || b % 20 == 7 || b % 20 == 9 || b % 20 == 11 || b % 20 == 12 || b % 20 == 14 || b % 20 == 18 ){
        for(int i=1;i<n;i++){
            if(a[i] % 20 == 3 || a[i] % 20 == 6 || a[i] % 20 == 7 || a[i] % 20 == 9 || a[i] % 20 == 11 || a[i] % 20 == 12 || a[i] % 20 == 14 || a[i] % 20 == 18){
                flag=0;
            }
            else{
                flag=1;
                cout<<"NO"<<endl;
                break;
            }
        }
    }
    // 3,6,7,9,11,12,14,18
    else if(b%10==0){
        for(int i=1;i<n;i++){
            if(a[i]==b || a[i]==(b-5)){
                flag=0;
            }
            else{
                flag=1;
                cout<<"NO"<<endl;
                break;
            }
        }
    }
    else{
        for(int i=1;i<n;i++){
            if(a[i]==b || a[i]==(b+5)){
                flag=0;
            }
            else{
                flag=1;
                cout<<"NO"<<endl;
                break;
            }
        }
    }
    if(flag==0){
        cout<<"YES"<<endl;
    }

}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}

//
/*mod 0 ,NO if anyone !=0
1,2,4,8,16,2    mod 20
2,4,8,16,2      mod 20
3,6,12,14,18,6  mod 20
4,8,16,2,4      mod 20
5,10            mod 10
6,12,14,18,6    mod 20
7,14,18,6,12,14 mod 20 skip first 12
8,16,2,4,8      mod 20
9,18,6,12,14,18 mod 20 skip first 12,14
10
11,12,14,18,6,12
12,14,18,6,12
13,16,2,4,8                  1,13,17,19,2,4,8,16
14,18,6,12,14                3,7,9,11,6,12,14,18
15,0
16,2,4,8,16
17,4,8,16,2,4 skip first 2
18,6,12,14,18
19,8,16,2,4,8 skip first 2,4

1,2,4,8,13,16,17,19
3,6,7,9,11,12,14,18*/
