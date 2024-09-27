using namespace std;
#include<bits/stdc++.h>
const int MAXN = 100005;



vector<int> bit(MAXN, 0);

void update(int x, int delta, int n) {
    for (int i = x; i <= n; i += i & (-i))
        bit[i] += delta;
}

int sum(int x) {
    int res = 0;
    for (int i = x; i > 0; i -= i & (-i))
        res += bit[i];
    return res;
}

void range_update(int l, int r, int delta, int n) {
    update(l, delta, n);
    update(r + 1, -delta, n);
}

int point_query(int x) {
    return sum(x);
}

void convert_to_fenwick(vector<int> &arr) {
    int n = arr.size();
    for (int i = 1; i <= n; i++) {
        range_update(i,i, arr[i - 1], n);
    }
}


int main(){
    int n;
    cin>>n;
    std::vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    convert_to_fenwick(a);
}
/*
5
1 2 3 4 5

*/
