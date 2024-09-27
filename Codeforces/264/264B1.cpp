using namespace std;
#include<bits/stdc++.h>
const int LIM = 1e6;
#define vi std::vector<int>
#define rep(a,b,c) for(int c=a;c<b;c++)
#define pii pair<int,int>
bitset<LIM> isPrime;
vi eratosthenes() {
    const int S = (int)round(sqrt(LIM)), R = LIM / 2;
    vi pr = {2}, sieve(S+1); pr.reserve(int(LIM/log(LIM)*1.1));
    vector<pii> cp;
    for (int i = 3; i <= S; i += 2) if (!sieve[i]) {
        cp.push_back({i, i * i / 2});
        for (int j = i * i; j <= S; j += 2 * i) sieve[j] = 1;
    }
    for (int L = 1; L <= R; L += S) {
        array<bool, S> block{};
        for (auto &x : cp){
            int p = x.first, idx = x.second;
            for (int i=idx; i < S+L; idx = (i+=p)) block[i-L] = 1;
        }
        rep(0,min(S, R - L),i)
        if (!block[i]) pr.push_back((L + i) * 2 + 1);
    }
    for (int i : pr) isPrime[i] = 1;
    return pr;
}

int main(){
    vi v = eratosthenes();
    cout<<v.size();
    return 0;
}
