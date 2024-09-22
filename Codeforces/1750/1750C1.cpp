#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        string a, b;
        cin >> n >> a >> b;
        a = '$' + a;
        b = '$' + b;
        bool ok = true;
        for (int i = 1; i <= n; ++i)
        {
            if (a[i] != char('1' - b[i] + '0'))
            {
                ok = false;
                break;
            }
        }
        ok = ok || (a == b);
        if (!ok)
        {
            cout << "NO\n";
            continue;
        }
        vector<pair<int, int>> ops;
        if (a[1] != b[1])
        {
            ops.push_back({1, n});
            a = b;
        }
        vector<int> cnt(n + 1);
        for (int i = 1; i <= n; ++i)
        {
            if (a[i] == '1')
            {
                if (i == 1)
                {
                    ops.push_back({1, n});
                    ops.push_back({2, n});
                }
                else
                {
                    cnt[i]++;
                    cnt[i - 1]++;
                }
            }
        }
        for (int i = 1; i <= n; ++i)
        {
            if (cnt[i] % 2 == 1)
            {
                ops.push_back({1, i});
            }
        }
        cout << "YES\n"
             << (int)ops.size() << '\n';
        for (auto i : ops)
        {
            cout << i.first << ' ' << i.second << '\n';
        }
    }
}
