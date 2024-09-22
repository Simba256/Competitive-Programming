#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int N = 1e5+5;

vector<ll> segTree(4*N), lazy(4*N);

void propagate(int node, int left, int right) {
    if (lazy[node] != 0) {
        segTree[node] += (right - left + 1) * lazy[node];
        if (left != right) {
            lazy[node*2] += lazy[node];
            lazy[node*2+1] += lazy[node];
        }
        lazy[node] = 0;
    }
}

ll merge(ll leftVal, ll rightVal) {
    return leftVal * rightVal;
}

void update(int node, int left, int right, int lq, int rq, ll value) {
    propagate(node, left, right);

    if (lq > right || rq < left) return;

    if (left >= lq && right <= rq) {
        segTree[node] *= value;
        if (left != right) {
            lazy[node*2] *= value;
            lazy[node*2+1] *= value;
        }
        return;
    }

    int mid = (left + right) / 2;
    update(node*2, left, mid, lq, rq, value);
    update(node*2+1, mid+1, right, lq, rq, value);
    segTree[node] = merge(segTree[node*2], segTree[node*2+1]);
}


ll query(int node, int left, int right, int lq, int rq) {
    propagate(node, left, right);
    if (lq > right || rq < left) return 0;
    if (left >= lq && right <= rq) return segTree[node];
    int mid = (left + right) / 2;
    return query(node*2, left, mid, lq, rq) + query(node*2+1, mid+1, right, lq, rq);
}

int main() {
    int n, q;
    cin >> n >> q;
    for (int i = 0; i < q; i++) {
        int type, l, r;
        ll val;
        cin >> type >> l >> r;
        if (type == 1) {
            cin >> val;
            update(1, 1, n, l, r, val);
        } else {
            cout << query(1, 1, n, l, r) << endl;
        }
    }
    return 0;
}

/*
10 10
1 2 3 4 5 6 7 8 9 10




*/
