using namespace std;
#include<bits/stdc++.h>

int solve(){
    // int l;
    string str;
    int p;
    // vector<char> v;
    cin>>str;
    cin>>p;
    // l=str.length();

    vector<char> v(str.begin(), str.end());

    // for(int i=0;i<l;i++){
    //     v.push_back(str[i]);
    // }

    // cout<<"vector done"<<endl;
    // for(int i=0;i<l;i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    // sort(v.begin(),v.end());
    int sum=0;
    for (auto x : v) sum+=int(x) - 96;

    // cout<<sum<<endl;

    // for (auto x : v) cout << x << " "; cout<<endl;

// cout<<*(v.end()-1)<<endl;
    while(sum>p){
        // cout<<"here"<<endl;
        sum-=int(*max_element(v.begin(), v.end()))-96;
        // cout<<"sum = "<<sum<<" p = "<<p<<endl;
        v.erase(max_element(v.begin(), v.end()));
        // for (auto x : v) cout << x << " "; cout<<endl;
        // cout<<"not here"<<endl;
    }

    // cout << x << " "; cout<<endl;


    // cout<<sum<<endl;
    // v.pop_back();

    for (auto x : v) cout << x ; cout<<endl;

    // char* max = max_element(v.begin(), v.end());
    //
    // cout<<max<<endl;

    // v.erase(m)
    // cout<<*v.begin()<<endl;

}

int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        solve();
    }
    return 0;
}
