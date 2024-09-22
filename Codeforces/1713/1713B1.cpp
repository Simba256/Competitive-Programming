using namespace std;
#include<bits/stdc++.h>

#define forn(i,n) for (int i=0;i<n;i++)
#define forna(i,a,n) for (int i=a;i<n;i++)

string solve(){
    int n,a,m=0,f=0;
    cin>>n;
    vector<int> v;
    forn(i,n) {
        cin>>a;
        v.push_back(a);
        if (a>m) m=a;
    }
    forn(i,n-1){
        if(v[i]==m) f=1;
        if(f==0 && v[i]>v[i+1]) return "NO";
        else if(f==1 && v[i]<v[i+1]) return "NO";
    }
    return "YES";
}

int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        cout<<solve()<<endl;
    }
    return 0;
}


// 1234567
// 1236754
// 3421
// 231
