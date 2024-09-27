
using namespace std;
#include<bits/stdc++.h>
int main(){
    long long a = 989345275647;
    while(a*3486784401<9223372036854775807) a*=3486784401;
    while(a*3<9223372036854775807) a*=3;
    cout<<a;return 0;
}
