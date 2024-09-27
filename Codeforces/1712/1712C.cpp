using namespace std;
#include<bits/stdc++.h>

#define nl cout<<"\n"
#define ve vector
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vc vector<char>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tcs int tttt;cin>>tttt;for(int TTTT=1;TTTT<=tttt;TTTT++)
#define db(n) cout<<"here "<<n<<", "; //for debugging
#define dbb(n) cout<<#n<<" = "<<n<<endl
#define rep(l, r, i) for (int i = l; i < r; ++i)
#define per(l, r, i) for (int i = r; i >= l; --i)
#define repp(l, r, i) for (int i = l; i <= r; ++i)
#define print(a) for(auto i: a) cout<<i<<" "; nl;
#define so(v) sort(v.begin(),v.end())
#define inp(v,n) int a; for(int i=0;i<n;i++){cin>>a;v.push_back(a);}


bool ser(vector<int> vector1,int n){

}

ll solve(){
    ll n,a,b,in=0;
    cin>>n;
    vll v;
    cin>>a;
    b=a;
    v.push_back(a);
    rep(1,n,i){
        cin>>a;
        if(a<b) in=i;
        v.push_back(a);
        b=a;
    }
    cout<<"v=";print(v)
    vll nv=v;
    nv.resize(in);
    sort(nv.begin(),nv.end());
    vector<ll>::iterator ip;
    ip = unique(nv.begin(), nv.begin() + in-1);
    nv.resize(distance(nv.begin(), ip));
    cout<<"nv=";print(nv)
    v.erase(v.begin(),v.begin()+in);
    cout<<"v=";print(v)

}
int main(){
    // fastio;
    tcs{
        cout<<solve()<<endl;
        // cout<<endl;
    }
    return 0;
}

/*
ll rec(vector<int> vector1,int n,int b){
    // vector<int> vector1 = { 1, 45, 54, 71, 76, 12 };

    per()
    vector<int> vector2 = { 1, 7, 5, 4, 6, 12 };

    // Sort the vector
    sort(vector1.begin(), vector1.end());
    sort(vector2.begin(), vector2.end());

    // Print the vector
    cout << "First Vector: ";
    for (int i = 0; i < vector1.size(); i++)
        cout << vector1[i] << " ";
    cout << endl;

    cout << "Second Vector: ";
    for (int i = 0; i < vector2.size(); i++)
        cout << vector2[i] << " ";
    cout << endl;

    // Initialise a vector
    // to store the common values
    // and an iterator
    // to traverse this vector
    vector<int> v(vector1.size() + vector2.size());
    vector<int>::iterator it, st;

    it = set_intersection(vector1.begin(),
                          vector1.end(),
                          vector2.begin(),
                          vector2.end(),
                          v.begin());

    cout << "\nCommon elements:\n";
    for (st = v.begin(); st != it; ++st)
        cout << st-v.begin() << ", ";
    cout << '\n';




    return set<ll>( v.begin(), v.end() ).size();
}




a=*(v.end()-1);
vll r;
ll c=0;
rep(0,n,i){
    if(i<n-1 && v[i]==a) return fun(v);
    if(v[i]>a) {
        v[i]=0;
        r.push_back(v[i]);
        // c++;
    }
}
set<ll>( r.begin(), r.end() ).size();

*/
