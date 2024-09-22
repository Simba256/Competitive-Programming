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



void fun(vector<int> &v,int n,int b){
    vector<vector<int>> nv;
    int l=v.size();
    int a;
    // db(1)
    if(l>4){
        n++;
        // db(2)
        rep(0,l/4,i){
            // db(3)
            vector<int> w;
            rep(0,4,j){
                w.push_back(v[(i*4)+j]);
            }
            nv.push_back(w);//this works?
        }
        // db(3)
        rep(0,l/4,i){
            // db(4)
            fun(nv[i],0,b);
        }
        // db(2)
        vector<int> nw;
        rep(0,l/4,i){
            nw.push_back(nv[i][0]);
        }
        // db(1)
        //combine all single winners
        // cout<<"nw: ";
        // for (auto x:nw) cout<<x<<" "; cout<<endl;
        // cout<<"n="<<n<<" b="<<b<<endl;
        fun(nw,n,b);

    }
    else if(l==4){
        // db(1)
        cout<<"? "<<v[0]<<" "<<v[2]<<endl;
        cout.flush();  //semicolon required?
        // int a;
        cin>>a;
        if(a==-1) exit(0);  //this works?
        if(a==1){
            v.erase(v.begin()+1);  //erase works like this?
            v.erase(v.begin()+1);
            cout<<"? "<<v[0]<<" "<<v[1]<<endl;
            cout.flush();
            cin>>a;
            if(a==-1) exit(0);
            if(a==1) v.erase(v.begin()+1);
            if(a==2) v.erase(v.begin());
            // cout<<"vector:";
            // for(auto x:v) cout<<x<<" ";
        }
        else if(a==2){
            v.erase(v.begin());
            v.erase(v.begin()+2);
            cout<<"? "<<v[0]<<" "<<v[1]<<endl;
            cout.flush();
            cin>>a;
            if(a==-1) exit(0);
            if(a==1) v.erase(v.begin()+1);
            if(a==2) v.erase(v.begin());
        }
        else if(a==0){
            v.erase(v.begin());
            v.erase(v.begin()+1);
            cout<<"? "<<v[0]<<" "<<v[1]<<endl;
            cout.flush();
            cin>>a;
            if(a==-1) exit(0);
            if(a==1) v.erase(v.begin()+1);
            if(a==2) v.erase(v.begin());
        }
        // db(2)
        // cout<<"vector: ";
        // for(auto x:v) cout<<x<<endl;

        if(n==b-1){
            cout<<"! "<<v[0]<<endl;
            cout.flush();
        }


        // cout<<"vector: ";
        // for(auto x:v) cout<<x<<endl;
    }
    else if(l==2){
        cout<<"? "<<v[0]<<" "<<v[1]<<endl;
        cout.flush();
        // int a;
        cin>>a;
        if(a==-1) exit(0);
        if(a==1) v.erase(v.begin()+1);
        else v.erase(v.begin());
        // cout<<"vector: ";
        // for(auto x:v) cout<<x<<endl;
        cout<<"! "<<v[0]<<endl;
        cout.flush();
        // cout<<"vector: ";
        // for(auto x:v) cout<<x<<endl;

    }
    else if(l==1){
        cout<<"! "<<v[0]<<endl;
        cout.flush();
        // for(auto x:v) cout<<x<<endl;
    }
}

solve(){
    int n,a;
    cin>>n;
    if(n==-1) exit(0);
    vector<int> v;
    if(n%2==0) a=n/2;
    else a=0;
    rep(0,pow(2,n),i){
        v.push_back(i+1);
    }
    fun(v,0,a);
}

int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        // cout<<i<<"    ";
        solve();
        // cout<<endl;
    }
    return 0;
}

//
//
// ceil((1/3)*2^(n+1))
// n   me   max
// 1   1    2
// 2   2    3
// 3   5    6
// 4   10   11
// 5   21   22
// 6   42   43
// 7   85   86
// 8  170   171
// 9  341   342
// 10 682   683
// 11 1365  1366
// 12 2730  2731
// 13 5461  5462
// 14 10922 10923
// 15 21845 21846
// 16 43690 43691
// 17 87381 87382


// n==3
// 1     5      0 score{1=0,5=0 or 1=1,5=1}
// {2     6      0 problem down to n=2 with{3,4,7,8}
//  2     6     !0 either 2 or 6 is in top 2}

/*

 1 2 3 4

    2
   2 3
 1 2 3 4

   2
  2 4
1 2 3 4

   3
  2 3
1 2 3 4

   3
  1 3
1 2 3 4

   4
  2 4
1 2 3 4

   4
  1 4
1 2 3 4



*/
