using namespace std;
#include<bits/stdc++.h>
int divceil(int a,int b){
    return (a+b-1)/b;
}
int main(){
    int n,m,a;
    long long b;
    cin>>n>>m>>a;
    b=1.0*divceil(n,a)*divceil(m,a);
    cout<<b;
    return 0;
}
